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
#include "ContactsEnreachListProxyModel.hpp"
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonParseError>
#include "ContactEnreachModel.hpp"
#include "ContactsEnreachListModel.hpp"
#include "utils/SipConstant.hpp"
#include <QObject>
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

const QRegExp ContactsEnreachListProxyModel::SearchSeparators("^[^_.-;@ ][_.-;@ ]");

// -----------------------------------------------------------------------------

ContactsEnreachListProxyModel::ContactsEnreachListProxyModel (QObject *parent) : QSortFilterProxyModel(parent) {
	getList();
}
// -----------------------------------------------------------------------------

void ContactsEnreachListProxyModel::getList() {
	ContactsEnreachListModel *contacts = new ContactsEnreachListModel();
	listApiContacts(contacts);
}
void ContactsEnreachListProxyModel::listLinphoneContacts(ContactsEnreachListModel *contacts, QVariantList *listSips) {
	ContactsListModel* contactsListModel = CoreManager::getInstance()->getContactsListModel();

	for (const auto &model : *contactsListModel) {
		QSharedPointer<ContactModel> contactModelParsed = qSharedPointerCast<ContactModel>(model);
		ContactEnreach* contact = new ContactEnreach();
		contact->setContactType(QString("personnel"));
		contact->setFullName(contactModelParsed->getVcardModel()->getUsername());
		contact->setSipAddresses(contactModelParsed->getVcardModel()->getSipAddresses());
		for (auto &sipadd : contact->getSipAddresses()) {
			listSips->append(sipadd);
		}
		ContactEnreachModel* contactModel = new ContactEnreachModel(contact);
		contacts->addContact(contactModel);
	}

}

void ContactsEnreachListProxyModel::listApiContacts(ContactsEnreachListModel *contacts) {
	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	std::shared_ptr<linphone::Account> defaultAddress = CoreManager::getInstance()->getCore()->getDefaultAccount();
	auto authInfo = QString::fromStdString( defaultAddress->findAuthInfo()->getUsername());
	QUrl url(QString("http://185.164.213.62:8081/Enreach/GetContactsByUsername?userName="+authInfo));
	QNetworkRequest request(url);
	QNetworkReply *reply = manager->get(request);
	QVariantList *listSips = new QVariantList();
	if (reply) {
		QObject::connect(reply, &QNetworkReply::finished, this, [=]() {
			if (reply) {
				if (reply->error() == QNetworkReply::NoError) {

					QByteArray responseData = reply->readAll();
					qDebug() << "Response:" << responseData;
					QJsonDocument jsonResponse = QJsonDocument::fromJson(responseData);
					if (!jsonResponse.isNull()) {
						listLinphoneContacts(contacts, listSips);
						QJsonArray jsonArray = jsonResponse.array();
						for (const QJsonValue &jsonValue : jsonArray) {
							if (jsonValue.isObject()) {
								QJsonObject jsonObject = jsonValue.toObject();
								ContactEnreach* contact = new ContactEnreach();
								contact->setContactType(jsonObject.value("contact_type").toString());
								contact->setFirstName(jsonObject.value("firstname").toString());
								contact->setLastName(jsonObject.value("lastname").toString());
								contact->setTel(jsonObject.value("tel").toString());
								contact->setExt(jsonObject.value("ext").toString());
								auto fullName = QString(contact->getFirstName() + " " + contact->getLastName());
								contact->setFullName(fullName);
								auto addr = QString();
								if (contact->getContactType() == "partager")
									addr = QString("sip:%1@%2").arg(contact->getTel()).arg(SipConstant::domain);
								else
									addr = QString("sip:%1@%2").arg(contact->getExt()).arg(SipConstant::domain);
								auto test = listSips->contains(QString(addr));
								if (! listSips->contains(QString(addr))) {
									contact->addSipAddress(QString(addr));
									//contact->getSipAddresses().count();
									ContactEnreachModel* contactModel = new ContactEnreachModel(contact);
									contacts->addContact(contactModel);
								}

							}
						}
						
						
						setSourceModel(contacts);
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

}
void ContactsEnreachListProxyModel::setFilter (const QString &pattern) {
  mFilter = pattern;
  invalidate();
}

// -----------------------------------------------------------------------------

bool ContactsEnreachListProxyModel::filterAcceptsRow(
	int sourceRow,
	const QModelIndex &sourceParent
) const {
	const QModelIndex index = sourceModel()->index(sourceRow, 0, sourceParent);
	const ContactEnreachModel *contact = index.data(0).value<ContactEnreachModel *>();
	if(mUseLocalFilter)
		return contact->getContactEnreach()->getContactType() == "local" && contact->getContactEnreach()->getFullName().toLower().contains(mFilter.toLower());
	if (mUsePartageFilter)
		return contact->getContactEnreach()->getContactType() == "partager" && contact->getContactEnreach()->getFullName().toLower().contains(mFilter.toLower());
	if(mUsePersonnelFilter)
		return contact->getContactEnreach()->getContactType() == "personnel" && contact->getContactEnreach()->getFullName().toLower().contains(mFilter.toLower());
	return contact->getContactEnreach()->getFullName().toLower().contains(mFilter.toLower());
	

}

bool ContactsEnreachListProxyModel::lessThan(const QModelIndex &left, const QModelIndex &right) const {
	const ContactEnreachModel *contactA = sourceModel()->data(left).value<ContactEnreachModel *>();
	const ContactEnreachModel *contactB = sourceModel()->data(right).value<ContactEnreachModel *>();
	return false;
	//unsigned int weightA = mWeights[contactA];
	//unsigned int weightB = mWeights[contactB];

	//// Sort by weight and name.
	//return weightA > weightB || (
	//	weightA == weightB &&
	//	QString::localeAwareCompare(Utils::coreStringToAppString(contactA->mLinphoneFriend->getName()), Utils::coreStringToAppString(contactB->mLinphoneFriend->getName())) <= 0
	//	);
}


// -----------------------------------------------------------------------------

float ContactsEnreachListProxyModel::computeStringWeight (const QString &string, float percentage) const {
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

float ContactsEnreachListProxyModel::computeContactWeight(const ContactEnreachModel *contact) const {
	float weight = computeStringWeight(contact->getContactEnreach()->getFirstName(), UsernameWeight);

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

void ContactsEnreachListProxyModel::setConnectedFilter (bool useConnectedFilter) {
  if (useConnectedFilter != mUseConnectedFilter) {
    mUseConnectedFilter = useConnectedFilter;
    invalidate();
  }
}

void ContactsEnreachListProxyModel::setLocalFilter(bool useLocalFilter)
{
	if (useLocalFilter != mUseLocalFilter) {
		mUseLocalFilter = useLocalFilter;
		invalidate();
	}
}

void ContactsEnreachListProxyModel::setPartgeFilter(bool usePartageFilter)
{
	if (usePartageFilter != mUsePartageFilter) {
		mUsePartageFilter = usePartageFilter;
		invalidate();
	}
}
void ContactsEnreachListProxyModel::setPersonnelFilter(bool usePersonnelFiler)
{
	if (usePersonnelFiler != mUsePersonnelFilter) {
		mUsePersonnelFilter = usePersonnelFiler;
		invalidate();
	}
}
