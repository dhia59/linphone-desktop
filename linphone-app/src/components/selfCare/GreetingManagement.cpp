#include "GreetingManagement.hpp"
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
#include "GreetingManagement.hpp"
#include "utils/Constants.hpp"
#include "utils/MediastreamerUtils.hpp"
#include <QJsonArray>
#include <QHttpMultiPart>
#include <QFile>
// =============================================================================

using namespace std;

GreetingManagement::GreetingManagement(QObject *parent) : QObject(parent)
{	
	setIsLoading(false);
}
/*
Q_INVOKABLE bool GreetingManagement::updateFullGreeting(const QString& fileUrl ) {
	QJsonObject jsonObject;
	
	QJsonDocument jsonDocument(jsonObject);
	QByteArray jsonData = jsonDocument.toJson();
	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	std::shared_ptr<linphone::Account> defaultAddress = CoreManager::getInstance()->getCore()->getDefaultAccount();
	if (defaultAddress != nullptr && defaultAddress->findAuthInfo())//
	{
		auto username = QString::fromStdString(defaultAddress->findAuthInfo()->getUsername());
		QUrl url("http://saylo.netcom-group.fr:8081/SelfCare/ActivateDesactivateForwardingRule/");
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
		/*QNetworkReply *reply = manager->post(request, jsonData); 
		if (reply) {
			QObject::connect(reply, &QNetworkReply::finished, this, [=]() {
				if (reply) {
					int statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
					if (reply->error() == QNetworkReply::NoError) {
						QByteArray responseData = reply->readAll();
						qDebug() << "Response:" << responseData;
						QJsonDocument jsonResponse = QJsonDocument::fromJson(responseData);
						if (!jsonResponse.isNull()) {
							//emit CoreManager::getInstance()->getHandlers()->forwadingListUpdated();
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
}*/
Q_INVOKABLE bool GreetingManagement::updateFullGreeting(const QString & fileUrl)
{
	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	QUrl url(fileUrl);
	QString filePath = url.toLocalFile(); 

	qDebug() << "File path:" << filePath;

	// Attempt to open the file
	QFile *file = new QFile(filePath);
	if (!file->open(QIODevice::ReadOnly)) {
		qWarning() << "Cannot open file:" << file->errorString();
		return false;
	}
	QUrl apiUrl("http://localhost:5249/SelfCare/UpdateFullGreeting"); // Replace with your API endpoint
	QNetworkRequest request(apiUrl);

	
	QHttpMultiPart *multiPart = new QHttpMultiPart(QHttpMultiPart::FormDataType);
	QFileInfo fileInfo(*file);
	// Create the file part
	QHttpPart filePart;
	filePart.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("application/octet-stream")); // Adjust if necessary
	filePart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"file\"; filename=\"" + fileInfo.fileName() + "\""));
	filePart.setBodyDevice(file);
	multiPart->append(filePart);

	setIsLoading(true);
	// Send the file data
	QNetworkReply *reply = manager->post(request, multiPart);
	connect(reply, &QNetworkReply::finished, this, [this, reply, multiPart]() {
		setIsLoading(false);
		if (reply->error() == QNetworkReply::NoError) {
			qDebug() << "File uploaded successfully:" << reply->readAll();
			setFullGreeting("OK");
			return true;
		}
		else {
			qWarning() << "Upload failed:" << reply->errorString();
			setFullGreeting("NOK");
			return true;
		}
		reply->deleteLater();
	});




}
bool GreetingManagement::getIsLoading() {
	return m_isLoading;
}
QString GreetingManagement::getFullGreeting()
{
	return m_fullGreeting;
}
QString GreetingManagement::getOnlynameGrgreeeeting()
{
	return m_onlynameGreeting;
}
void GreetingManagement::setIsLoading(const bool isLoading) {
	if (m_isLoading != isLoading) {
		m_isLoading = isLoading;
		emit isLoadingChanged();
	}
}

void GreetingManagement::setOnlynameGreeting(const QString onlyNameGreeting)
{
	if (m_onlynameGreeting != onlyNameGreeting) {
		m_onlynameGreeting = onlyNameGreeting;
		emit onlynameGreetingChanged();
	}
}

void GreetingManagement::setFullGreeting(const QString fullGreeting)
{
	if (m_fullGreeting != fullGreeting) {
		m_fullGreeting = fullGreeting;
		emit fullGreetingChanged();
	}
}
