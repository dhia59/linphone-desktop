#include "ForwardingManagement.hpp"
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
#include "ForwardingManagement.hpp"
#include "utils/Constants.hpp"
#include "utils/MediastreamerUtils.hpp"
#include <QJsonArray>

// =============================================================================

using namespace std;

ForwardingManagement::ForwardingManagement(QObject *parent) : QObject(parent)
{	
	setIsLoading(false);
}
bool ForwardingManagement::deleteForwardingRule(const QString &forwardingId) {
	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	std::shared_ptr<linphone::Account> defaultAddress = CoreManager::getInstance()->getCore()->getDefaultAccount();
	if (defaultAddress != nullptr && defaultAddress->findAuthInfo())//
	{
		auto username = QString::fromStdString(defaultAddress->findAuthInfo()->getUsername());
		QUrl url("http://saylo.netcom-group.fr:8081/SelfCare/ExtensionDeleteForwardingRule");
		QUrlQuery query;
		query.addQueryItem("username",username);
		query.addQueryItem("forwardingId", forwardingId);
		url.setQuery(query);
		QNetworkRequest request(url);
		shared_ptr<linphone::Config> config(CoreManager::getInstance()->getCore()->getConfig());
		request.setRawHeader("instance", QByteArray::fromStdString(config->getString("apiAuth", "x-instance", "")));
		request.setRawHeader("token", QByteArray::fromStdString(config->getString("apiAuth", "x-token", "")));
		request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
		QList<QByteArray> headers = request.rawHeaderList();
		foreach(const QByteArray &header, headers) {
			qDebug() << "heloooooooooo" + header << ":" << request.rawHeader(header);
		}
		setIsLoading(true);
		QNetworkReply *reply = manager->deleteResource(request); 
		if (reply) {
			QObject::connect(reply, &QNetworkReply::finished, this, [=]() {
				if (reply) {
					if (reply->error() == QNetworkReply::NoError) {
						QByteArray responseData = reply->readAll();
						qDebug() << "Response:" << responseData;

						if (responseData.toStdString()=="true") {
							emit CoreManager::getInstance()->getHandlers()->forwadingListUpdated();
							setIsLoading(false);
							return true;
						}
					}
					else {
						qDebug() << "Error Code:" << reply->error();
						qDebug() << "Error String:" << reply->errorString();
						setIsLoading(false);
						return false;
					}

					// Clean up the reply
					reply->deleteLater();
				}
				else {
					qDebug() << "noo reply";
					setIsLoading(false);
					return false;
				}

			});
		}
	}
	else
	{
		return false;
	}
}
bool ForwardingManagement::addForwardingRule(const QVariantMap &map) {

	QString label = map["label"].toString();
	int origin = map["origin"].toInt();
	int forwardType = map["forwardType"].toInt();
	int destination = map["destination"].toInt();
	QString destinationText = map["destinationText"].toString();
	int noAnswerDelay = map["noAnswerForwardingDelay"].toInt();
	QVariantList listVariants = map["numberFilter"].toList();
	QVariantList specificCaller = map["specificCaller"].toList();
	QString startTimeFilter = map["startTimeFilter"].toString();
	QString endTimeFilter = map["endTimeFilter"].toString();
	QVariantList daysFilter = map["daysFilter"].toList();
	QJsonArray  filtrerTargetNumbers;
	for (const QVariant &variant : listVariants) {
		filtrerTargetNumbers.append(variant.toString());
	}
	QJsonObject jsonObject;
	QJsonArray  targetNumbers;
	jsonObject["alias"] = "Forwarding";
	jsonObject["rootModel"] = "TriggeredService";
	jsonObject["activated"] = false;
	jsonObject["priorityOrder"] = -1;
	jsonObject["endDateTime"] = "0";
	jsonObject["label"] = label;
	jsonObject["isEditable"] = true;
	jsonObject["filtersOnTargetNumber"] = filtrerTargetNumbers ;
	jsonObject["applyToGroup"] = false;
	jsonObject["forwardType"] = getForwardTypeText(forwardType);
	jsonObject["filter"] = getOriginText(origin);
	if (forwardType == 1) {
		jsonObject["noAnswerForwardingDelay"] = getNoAnswerDelay(noAnswerDelay);
	}
	else {
		jsonObject["noAnswerForwardingDelay"] = 5000;
	}
	if (destination == 2)
	{
		jsonObject["destination"] = destinationText;
	}
	else {
		jsonObject["destination"] = getDestination(destination);
	}	
	jsonObject["isMainForPresenceState"] = true;
	jsonObject["allowDisableOnChildren"] = true;
	jsonObject["forwardOnService"] = true;
	jsonObject["specificCaller"] = JoinQvariantList(specificCaller,",");
	//jsonObject["timeFilter"] =getTimeFilterText(daysFilter, startTimeFilter, endTimeFilter);
	jsonObject["timeFilter"] ="0";

	QJsonDocument jsonDocument(jsonObject);
	QByteArray jsonData = jsonDocument.toJson();
	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	std::shared_ptr<linphone::Account> defaultAddress = CoreManager::getInstance()->getCore()->getDefaultAccount();
	if (defaultAddress != nullptr && defaultAddress->findAuthInfo())//defaultAddress != nullptr
	{
		auto username = QString::fromStdString(defaultAddress->findAuthInfo()->getUsername());
		QUrl url("http://saylo.netcom-group.fr:8081/SelfCare/ExtensionAddForwardingRule");
		QUrlQuery query;
		query.addQueryItem("username", username);
		url.setQuery(query);

		QNetworkRequest request(url);
		shared_ptr<linphone::Config> config(CoreManager::getInstance()->getCore()->getConfig());
		request.setRawHeader("instance", QByteArray::fromStdString(config->getString("apiAuth", "x-instance", "")));
		request.setRawHeader("token", QByteArray::fromStdString(config->getString("apiAuth", "x-token", "")));

		// Example: Set content type header for JSON data
		request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
		QList<QByteArray> headers = request.rawHeaderList();
		foreach(const QByteArray &header, headers) {
			qDebug() << "heloooooooooo" + header << ":" << request.rawHeader(header);
		}

		setIsLoading(true);
		QNetworkReply *reply = manager->post(request, jsonData); // No data for now, adjust as needed
		if (reply) {
			QObject::connect(reply, &QNetworkReply::finished, this, [=]() {
				if (reply) {
					if (reply->error() == QNetworkReply::NoError) {
						QByteArray responseData = reply->readAll();
						qDebug() << "Response:" << responseData;
						QJsonDocument jsonResponse = QJsonDocument::fromJson(responseData);
						if (!jsonResponse.isNull()) {
							emit CoreManager::getInstance()->getHandlers()->forwadingListUpdated();
							setIsLoading(false);
							return true;
						}
					}
					else {
						qDebug() << "Error Code:" << reply->error();
						qDebug() << "Error String:" << reply->errorString();
						setIsLoading(false);
						return false;
						
					}

					// Clean up the reply
					reply->deleteLater();
					setIsLoading(false);
				}
				else {
					qDebug() << "noo reply";
					setIsLoading(false);
					return false;
					
				}

			});
		}
	}
	else
	{
		setIsLoading(false);
		return false;
	}
}
Q_INVOKABLE bool ForwardingManagement::activateDesactivateForwardingRule(ForwardingModel *forwardingmodel) {
	QJsonObject jsonObject;
	jsonObject["activated"] = ! forwardingmodel->getActivated();

	QJsonDocument jsonDocument(jsonObject);
	QByteArray jsonData = jsonDocument.toJson();
	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	std::shared_ptr<linphone::Account> defaultAddress = CoreManager::getInstance()->getCore()->getDefaultAccount();
	if (defaultAddress != nullptr && defaultAddress->findAuthInfo())//
	{
		auto username = QString::fromStdString(defaultAddress->findAuthInfo()->getUsername());
		QUrl url("http://saylo.netcom-group.fr:8081/SelfCare/ActivateDesactivateForwardingRule/"+ forwardingmodel->getforwardingID());
		QUrlQuery query;
		query.addQueryItem("username", username);	
		url.setQuery(query);

		QNetworkRequest request(url);
		shared_ptr<linphone::Config> config(CoreManager::getInstance()->getCore()->getConfig());
		request.setRawHeader("instance", QByteArray::fromStdString(config->getString("apiAuth", "x-instance", "")));
		request.setRawHeader("token", QByteArray::fromStdString(config->getString("apiAuth", "x-token", "")));
		request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
		QList<QByteArray> headers = request.rawHeaderList();
		foreach(const QByteArray &header, headers) {
			qDebug() << "heloooooooooo" + header << ":" << request.rawHeader(header);
		}
		setIsLoading(true);
		QNetworkReply *reply = manager->post(request, jsonData); 
		if (reply) {
			QObject::connect(reply, &QNetworkReply::finished, this, [=]() {
				if (reply) {
					int statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
					if (reply->error() == QNetworkReply::NoError) {
						QByteArray responseData = reply->readAll();
						qDebug() << "Response:" << responseData;
						QJsonDocument jsonResponse = QJsonDocument::fromJson(responseData);
						if (!jsonResponse.isNull()) {
							emit CoreManager::getInstance()->getHandlers()->forwadingListUpdated();
							setIsLoading(false);
							return true;
						}
						
					}
					else 
					{
						int statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
						QByteArray errorData = reply->readAll();
						if (statusCode == 400 && errorData.contains("PreconditionFailed"))
						{
							qDebug() << "PreconditionFailedddddddddddddddddddddd" ;
							emit activationFailed();

						}
						else {
							qDebug() << "Error Code:" << reply->error();
							qDebug() << "Error String:" << reply->errorString();
							return false;
						}
						setIsLoading(false);
					}
			     	// Clean up the reply
					reply->deleteLater();
				}
				else {
					qDebug() << "noo reply";
					return false;
					setIsLoading(false);
				}

			});
		}
	}
	else
	{
		return false;
		setIsLoading(false);
	}
}
bool ForwardingManagement::getIsLoading() {
	return m_isLoading;
}
void ForwardingManagement::setIsLoading(const bool isLoading) {
	if (m_isLoading != isLoading) {
		m_isLoading = isLoading;
		emit isLoadingChanged();
	}
}
Q_INVOKABLE bool ForwardingManagement::editForwardingRule(const QVariantMap &map)
{
	QString label = map["label"].toString();
	int origin = map["origin"].toInt();
	int forwardType = map["forwardType"].toInt();
	int destination = map["destination"].toInt();
	QString destinationText = map["destinationText"].toString();
	int noAnswerDelay = map["noAnswerForwardingDelay"].toInt();
	QVariantList listVariants = map["numberFilter"].toList();
	QVariantList specificCaller = map["specificCaller"].toList();
	QString forwardingId = map["forwardingId"].toString();
	bool activated = map["activated"].toBool();
	QJsonArray  filtrerTargetNumbers;
	for (const QVariant &variant : listVariants) {
		filtrerTargetNumbers.append(variant.toString());
	}
	QJsonObject jsonObject;
	QJsonArray  targetNumbers;
	jsonObject["label"] = label;
	jsonObject["forwardType"] = getForwardTypeText(forwardType);
	jsonObject["filter"] = getOriginText(origin);
	jsonObject["specificCaller"] = "";
	jsonObject["filtersOnTargetNumber"] = filtrerTargetNumbers;
	jsonObject["activated"] = activated;
	QString startTimeFilter = map["startTimeFilter"].toString();
	QString endTimeFilter = map["endTimeFilter"].toString();
	QVariantList daysFilter = map["daysFilter"].toList();
	jsonObject["specificCaller"] = JoinQvariantList(specificCaller, ",");
	if (forwardType == 1) {
		jsonObject["noAnswerForwardingDelay"] = getNoAnswerDelay(noAnswerDelay);
	}
	else {
		jsonObject["noAnswerForwardingDelay"] = 5000;
	}
	if (destination == 2)
	{
		jsonObject["destination"] = destinationText;
	}
	else {
		jsonObject["destination"] = getDestination(destination);
	}
	//jsonObject["timeFilter"] = getTimeFilterText(daysFilter, startTimeFilter, endTimeFilter);
	jsonObject["timeFilter"] = "0";

	QJsonDocument jsonDocument(jsonObject);
	QByteArray jsonData = jsonDocument.toJson();
	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	std::shared_ptr<linphone::Account> defaultAddress = CoreManager::getInstance()->getCore()->getDefaultAccount();
	if (defaultAddress != nullptr && defaultAddress->findAuthInfo())//
	{
		auto username = QString::fromStdString(defaultAddress->findAuthInfo()->getUsername());
		QUrl url("http://saylo.netcom-group.fr:8081/SelfCare/ExtensionUpdateForwardingRule/"+ forwardingId);
		QUrlQuery query;
		query.addQueryItem("username", username);
		url.setQuery(query);

		QNetworkRequest request(url);
		shared_ptr<linphone::Config> config(CoreManager::getInstance()->getCore()->getConfig());
		request.setRawHeader("instance", QByteArray::fromStdString(config->getString("apiAuth", "x-instance", "")));
		request.setRawHeader("token", QByteArray::fromStdString(config->getString("apiAuth", "x-token", "")));
		request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
		QList<QByteArray> headers = request.rawHeaderList();
		foreach(const QByteArray &header, headers) {
			qDebug() << "heloooooooooo" + header << ":" << request.rawHeader(header);
		}
		setIsLoading(true);
		QNetworkReply *reply = manager->post(request, jsonData); 
		if (reply) {
			QObject::connect(reply, &QNetworkReply::finished, this, [=]() {
				if (reply) {
					if (reply->error() == QNetworkReply::NoError) {
						QByteArray responseData = reply->readAll();
						qDebug() << "Response:" << responseData;
						QJsonDocument jsonResponse = QJsonDocument::fromJson(responseData);
						if (!jsonResponse.isNull()) {
							emit CoreManager::getInstance()->getHandlers()->forwadingListUpdated();
							setIsLoading(false);
							return true;
						}
						
					}
					else {
						qDebug() << "Error Code:" << reply->error();
						qDebug() << "Error String:" << reply->errorString();
						setIsLoading(false);
						return false;
					}

					// Clean up the reply
					reply->deleteLater();
				}
				else {
					qDebug() << "noo reply";
					setIsLoading(false);
					return false;
				}

			});
		}
	}
	else
	{
		setIsLoading(false);
		return false;
	}
}

QString ForwardingManagement::getOriginText(int origin)
{
	switch (origin)
	{
		case 0:
			return "A";
		case 1:
			return "X";
		case 2:
			return "E";
		case 3: 
			return "I";
		default:
			return "";
		
	}
	
}

QString ForwardingManagement::getForwardTypeText(int forwardType)
{
	switch (forwardType)
	{
		case 0:
			return "AL";
		case 1:
			return "NA";
		case 2:
			return "OB";
		case 3:
			return "UR";
		default:
			return "";

	}
}

QString ForwardingManagement::getDestination(int destination)
{
	switch (destination)
	{
		case 0:
			return "ENT_RCPT";
		case 1:
			return "ENT_VM";
		default:
			return "";
	}
}

QString ForwardingManagement::JoinQvariantList(QVariantList &list, QString joinString)
{
	QStringList result;
	for (const QVariant &variant : list) {
		result.append(variant.toString());
	}
	return result.join(joinString);
}

int ForwardingManagement::getNoAnswerDelay(int noAnswerdelay)
{
	switch (noAnswerdelay)
	{
		case 0:
			return 5000;
		case 1:
			return 10000;
		case 2: 
			return 20000;
		case 3:
			return 25000;
		case 4:
			return 30000;
		case 5:
			return 45000;
		case 6:
			return 60000;
		case 7:
			return 90000;
		case 8:
			return 120000;
		default:
			return 0;
	}

}
QString ForwardingManagement::getTimeFilterText(QVariantList days, QString startDate, QString endDate)
{
	QString daysString = "";
	QString timeString = startDate+ "-" +endDate;
	if (days.count() == 7 || days.count()==0)
		daysString = "All";
	else
	{
		QStringList dayList;
		for (const QVariant &variant : days) {
			dayList << variant.toString();
		}
		daysString = dayList.join("+");
	}
	return daysString + "/" + timeString;
}