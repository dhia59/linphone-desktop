/*
 * Copyright (c) 2010-2020 Belledonne Communications SARL.
 *
 * This file is part of linphone-desktop
 * (see https://www.linphone.org).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <cmath>

#include "components/contact/ContactModel.hpp"
#include "components/contact/VcardModel.hpp"
#include "components/core/CoreManager.hpp"
#include "utils/Utils.hpp"

#include "ContactsListModel.hpp"
#include "ContactsListProxyModel.hpp"
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonParseError>

// =============================================================================

using namespace std;

namespace {
  constexpr float UsernameWeight = 50.f;
  constexpr float SipAddressWeight = 50.f;

  constexpr float FactorPos0 = 1.0f;
  constexpr float FactorPos1 = 0.9f;
  constexpr float FactorPos2 = 0.8f;
  constexpr float FactorPos3 = 0.7f;
  constexpr float FactorPosOther = 0.6f;
}

// Notes:
//
// - First `^` is necessary to search two words with one separator
// between them like `Claire Manning`.
//
// - [^_.-;@ ] is used to search patterns which starts with
// a separator like ` word`.
//
// - [_.-;@ ] is the main pattern (a separator).
const QRegExp ContactsListProxyModel::SearchSeparators("^[^_.-;@ ][_.-;@ ]");

// -----------------------------------------------------------------------------

ContactsListProxyModel::ContactsListProxyModel (QObject *parent) : QSortFilterProxyModel(parent) {
  /*setSourceModel(CoreManager::getInstance()->getContactsListModel());
  sort(0);*/
	getList();
}

// -----------------------------------------------------------------------------

void ContactsListProxyModel::setFilter (const QString &pattern) {
  mFilter = pattern;
  invalidate();
}

void ContactsListProxyModel::getList() {
	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	QUrl url("http://localhost:5249/Enreach/GetContactsByUsername");
	QNetworkRequest request(url);
	QNetworkReply *reply = manager->get(request);

	if (reply) {
		QObject::connect(reply, &QNetworkReply::finished, this, [=]() {
			if (reply) {
				if (reply->error() == QNetworkReply::NoError) {

					QByteArray responseData = reply->readAll();
					qDebug() << "Response:" << responseData;
					QJsonDocument jsonResponse = QJsonDocument::fromJson(responseData);
					
					if (!jsonResponse.isNull()) {
						QJsonArray jsonArray = jsonResponse.array();
				//	/*	QList<ContactEnreach*> contactList;
				//		ContactEnreachModel* contactModel = new ContactEnreachModel(this);*/
						ContactModel* contactModel ;
			         	ContactsListModel* ContactsList = new ContactsListModel();
				//		QList<VcardModel*> vcardList;
						for (const QJsonValue &jsonValue : jsonArray) {
							if (jsonValue.isObject()) {
								QJsonObject jsonObject = jsonValue.toObject();
								//ContactEnreach* contact = new ContactEnreach();
								//std::shared_ptr<linphone::Vcard> vcard = std::make_shared<linphone::Vcard>();
								//VcardModel *contact = new VcardModel(false);
								//VcardModel *contact = new VcardModel();
								//contact->setContactType(jsonObject.value("contact_type").toString());
								//contact->setFirstName(jsonObject.value("firstname").toString());
								//contact->setUsername(jsonObject.value("lastname").toString());
								/*contact->setTel(jsonObject.value("tel").toString());
								contact->setExt(jsonObject.value("ext").toString());
								contact->setSipAddresses(QString("test@cprxp1"));*/
								//contactList.append(contact);
								/*ContactsList->addContact(contact);
								contactModel->setVcardModel(contact);*/
							}
						}
				//		
						//contactModel->setContactEnreachs(contactList);
						setSourceModel(ContactsList);
						sort(0);
				}
				}
				else {
					qDebug() << "Error Code:" << reply->error();
					qDebug() << "Error String:" << reply->errorString();

				}

				// Clean up the reply
				reply->deleteLater();
			}
			else {
				qDebug() << "noo reply";
			}

		});
	}
	//return QJsonArray();
}

// -----------------------------------------------------------------------------

bool ContactsListProxyModel::filterAcceptsRow (
  int sourceRow,
  const QModelIndex &sourceParent
) const {
  const QModelIndex index = sourceModel()->index(sourceRow, 0, sourceParent);
  const ContactModel *contact = index.data().value<ContactModel *>();

  mWeights[contact] = uint(round(computeContactWeight(contact)));

  return mWeights[contact] > 0 && (
    !mUseConnectedFilter ||
    contact->getPresenceLevel() != Presence::PresenceLevel::White
  );
}

bool ContactsListProxyModel::lessThan (const QModelIndex &left, const QModelIndex &right) const {
  const ContactModel *contactA = sourceModel()->data(left).value<ContactModel *>();
  const ContactModel *contactB = sourceModel()->data(right).value<ContactModel *>();

  unsigned int weightA = mWeights[contactA];
  unsigned int weightB = mWeights[contactB];

  // Sort by weight and name.
  return weightA > weightB || (
    weightA == weightB &&
    QString::localeAwareCompare(Utils::coreStringToAppString(contactA->mLinphoneFriend->getName()), Utils::coreStringToAppString(contactB->mLinphoneFriend->getName())) <= 0
  );
}

// -----------------------------------------------------------------------------

float ContactsListProxyModel::computeStringWeight (const QString &string, float percentage) const {
  int index = -1;
  int offset = -1;

  // Search pattern.
  while ((index = string.indexOf(mFilter, index + 1, Qt::CaseInsensitive)) != -1) {
    // Search n chars between one separator and index.
    int tmpOffset = index - string.lastIndexOf(SearchSeparators, index) - 1;

    if ((tmpOffset != -1 && tmpOffset < offset) || offset == -1)
      if ((offset = tmpOffset) == 0) break;
  }

  switch (offset) {
    case -1: return 0;
    case 0: return percentage *FactorPos0;
    case 1: return percentage *FactorPos1;
    case 2: return percentage *FactorPos2;
    case 3: return percentage *FactorPos3;
    default: break;
  }

  return percentage *FactorPosOther;
}

float ContactsListProxyModel::computeContactWeight (const ContactModel *contact) const {
  float weight = computeStringWeight(contact->getVcardModel()->getUsername(), UsernameWeight);

  // Get all contact's addresses.
  const list<shared_ptr<linphone::Address>> addresses = contact->mLinphoneFriend->getAddresses();

  float size = float(addresses.size());
  for (auto it = addresses.cbegin(); it != addresses.cend(); ++it)
    weight += computeStringWeight(
      Utils::coreStringToAppString((*it)->asStringUriOnly()),
      SipAddressWeight / size
    );

  return weight;
}

// -----------------------------------------------------------------------------

void ContactsListProxyModel::setConnectedFilter (bool useConnectedFilter) {
  if (useConnectedFilter != mUseConnectedFilter) {
    mUseConnectedFilter = useConnectedFilter;
    invalidate();
  }
}
