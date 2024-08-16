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
#include "ForwardingListProxyModel.hpp"
#include "utils/Constants.hpp"
#include "utils/MediastreamerUtils.hpp"
#include <QQmlApplicationEngine>
#include <QStringList>

// =============================================================================

using namespace std;

ForwardingListProxyModel::ForwardingListProxyModel(QObject *parent) : QSortFilterProxyModel(parent)
{
	CoreManager *coreManager = CoreManager::getInstance();
	QObject::connect(
		coreManager->getHandlers().get(), &CoreHandlers::forwadingListUpdated,
		this, &ForwardingListProxyModel::handleListFowardingUpdate
	);
	
	loadListForwardings();
}
void ForwardingListProxyModel::handleListFowardingUpdate() {
	loadListForwardings();
}
void ForwardingListProxyModel::loadListForwardings()
{
	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	std::shared_ptr<linphone::Account> defaultAddress = CoreManager::getInstance()->getCore()->getDefaultAccount();
	if (defaultAddress != nullptr)
	{
		auto username = QString::fromStdString(defaultAddress->findAuthInfo()->getUsername());
		QUrl url(QString("http://saylo.netcom-group.fr:8081/SelfCare/GetListForwardingsByUsername"));
		QUrlQuery query;
		query.addQueryItem("username", username);
		url.setQuery(query);
		QNetworkRequest request(url);
		shared_ptr<linphone::Config> config(CoreManager::getInstance()->getCore()->getConfig());
		request.setRawHeader("instance", QByteArray::fromStdString(config->getString("apiAuth", "x-instance", "")));
		request.setRawHeader("token", QByteArray::fromStdString(config->getString("apiAuth", "x-token", "")));
		QList<QByteArray> headers = request.rawHeaderList();
		foreach(const QByteArray &header, headers) {
			qDebug() << "heloooooooooo" + header << ":" << request.rawHeader(header);
		}
		
		QNetworkReply *reply = manager->get(request);
		setIsLoading(true);
		if (reply) {
			QObject::connect(reply, &QNetworkReply::finished, this, [=]() {
				if (reply) {
					if (reply->error() == QNetworkReply::NoError) {

						QByteArray responseData = reply->readAll();
						qDebug() << "Response:" << responseData;
						QJsonDocument jsonResponse = QJsonDocument::fromJson(responseData);
						if (!jsonResponse.isNull()) {
							beginResetModel();
							QJsonArray jsonArray = jsonResponse.array();
							ForwardingListModel* list = new ForwardingListModel();
							for (const QJsonValue &jsonValue : jsonArray) {
								ForwardingModel* forwardingModel = new ForwardingModel();
								forwardingModel->setLabel(jsonValue["label"].toString());
								forwardingModel->setforwardingID(jsonValue["forwardingID"].toString());
								forwardingModel->setforwardType(jsonValue["forwardType"].toString());
								forwardingModel->setDestination(jsonValue["destination"].toString());
								forwardingModel->setfilter(jsonValue["filter"].toString());
								forwardingModel->setNoAnswerForwardingDelay(jsonValue["noAnswerForwardingDelay"].toInt());
								forwardingModel->setActivated(jsonValue["activated"].toBool());
								forwardingModel->setSpecificCaller(jsonValue["specificCaller"].toString());
								forwardingModel->setTimeFilter(jsonValue["timeFilter"].toString());
								QJsonArray filtersArray = jsonValue["filtersOnTargetNumber"].toArray();
								QStringList filtersList;
								foreach(const QJsonValue & value, filtersArray) {
									if (value.isString()) {
										filtersList << value.toString();
									}
								}
								
								forwardingModel->setFiltersOnTargetNumber(filtersList);
								list->addForwardingRule(forwardingModel);
							}
							setIsLoading(false);
							setSourceModel(list);
							///sort(0);
							endResetModel();
							
						}
					}
					else {
						qDebug() << "Error Code:" << reply->error();
						qDebug() << "Error String:" << reply->errorString();
						setIsLoading(false);
					}
					reply->deleteLater();
				}
				else {
					setIsLoading(false);
					qDebug() << "noo reply";
				}

			});
		}
	}
}

bool ForwardingListProxyModel::filterAcceptsRow(
	int sourceRow,
	const QModelIndex &sourceParent
) const 
{
	
	return true;
}

bool ForwardingListProxyModel::getIsLoading()
{
	return m_isLoading;
}

void ForwardingListProxyModel::setIsLoading(const bool isLoading)
{
	if (isLoading != m_isLoading) {
		m_isLoading = isLoading;
		emit isLoadingChanged();
	}
	
}

bool ForwardingListProxyModel::lessThan(const QModelIndex &left, const QModelIndex &right) const {
	const ForwardingModel *modelA = sourceModel()->data(left).value<ForwardingModel *>();
	const ForwardingModel *modelB = sourceModel()->data(right).value<ForwardingModel *>();
	return modelA < modelB;
	

}