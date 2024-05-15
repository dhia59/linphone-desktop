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

#include <QDir>
#include <QtDebug>
#include <QPluginLoader>
#include <QJsonDocument>

#include <cstdlib>
#include <cmath>

#include "config.h"

#include "app/App.hpp"
#include "app/logger/Logger.hpp"
#include "app/paths/Paths.hpp"

#include "components/assistant/AssistantModel.hpp"
#include "components/core/CoreManager.hpp"
#include "components/tunnel/TunnelModel.hpp"
#include "include/LinphoneApp/PluginNetworkHelper.hpp"
#include "utils/Utils.hpp"
#include "PstnModel.hpp"
#include "utils/Constants.hpp"
#include "utils/MediastreamerUtils.hpp"


// =============================================================================

using namespace std;

PstnModel::PstnModel(QObject *parent) : QAbstractListModel(parent)
{	
      loadPstnLists();
}


void PstnModel::loadPstnLists()
{
	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	std::shared_ptr<linphone::Account> defaultAddress = CoreManager::getInstance()->getCore()->getDefaultAccount();
	if (defaultAddress != nullptr)
	{
		auto authInfo = QString::fromStdString(defaultAddress->findAuthInfo()->getUsername());
		QUrl url(QString("http://185.164.213.62:8081/SelfCare/GetListPSTNByUsername?userName=mbaraketTest.PiloteNetcom"));
		QNetworkRequest request(url);
		shared_ptr<linphone::Config> config(CoreManager::getInstance()->getCore()->getConfig());
		request.setRawHeader("instance", QByteArray::fromStdString(config->getString("apiAuth", "x-instance", "")));
		request.setRawHeader("token", QByteArray::fromStdString(config->getString("apiAuth", "x-token", "")));
		QList<QByteArray> headers = request.rawHeaderList();
		foreach(const QByteArray &header, headers) {
			qDebug() << "heloooooooooo" + header << ":" << request.rawHeader(header);
		}
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
							beginResetModel();
							m_data.clear();
							QJsonArray jsonArray = jsonResponse.array();
							for (const QJsonValue &jsonValue : jsonArray) {
								if (jsonValue.isString()) {
									m_data << jsonValue.toString();
									m_labelTexts << jsonValue.toString();
								}
							}
							endResetModel();
						}
					}
					else {
						qDebug() << "Error Code:" << reply->error();
						qDebug() << "Error String:" << reply->errorString();
						sort(0);
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
}

int PstnModel::rowCount(const QModelIndex &parent) const
{
	if (parent.isValid())
		return 0;

	return m_data.size();
}



QVariant PstnModel::data(const QModelIndex &index, int role) const
{
	if (!index.isValid())
		return QVariant();

	if (role == DisplayRole) {
		return m_data[index.row()];
	}
	else if (role == LabelRole) {
		return m_labelTexts[index.row()];
	}

	return QVariant();
}
