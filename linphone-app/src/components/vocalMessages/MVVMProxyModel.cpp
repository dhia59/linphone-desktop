/*
 * Copyright (c) 2010-2023 Belledonne Communications SARL.
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
#include "components/core/CoreManager.hpp"
#include "utils/Utils.hpp"
#include "MVVMProxyModel.hpp"
#include "components/settings/SettingsModel.hpp"
#include "components/settings/AccountSettingsModel.hpp"
#include "components/sip-addresses/SipAddressesModel.hpp"
#include "components/file/FileMediaModel.hpp"
#include "components/sound-player/SoundPlayer.hpp"
#include "utils/Utils.hpp"
#include "MVVMListModel.hpp"
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonParseError>

#include <QQmlApplicationEngine>
#include "app/App.hpp"
#include <QFile>
#include <Windows.h>

using namespace std;
// =============================================================================

// -----------------------------------------------------------------------------

bool MVVMProxyModel::getIsLoading() const
{
	return mIsLoading;
}

void MVVMProxyModel::setIsLoading(const bool & isloading)
{
	if (mIsLoading != isloading) {
		mIsLoading = isloading;
		emit isLoadingChanged();
	}
}



MVVMProxyModel::MVVMProxyModel (QObject *parent) : SortFilterProxyModel(parent) {
	//
	auto list = new MVVMListModel(this);
	setSourceModel(list);
	sort(0);
	ListMVVM();
}


// -----------------------------------------------------------------------------
void MVVMProxyModel::ListMVVM() {
	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	std::shared_ptr<linphone::Account> defaultAddress = CoreManager::getInstance()->getCore()->getDefaultAccount();
	auto authInfo = QString::fromStdString(defaultAddress->findAuthInfo()->getUsername());

	QUrl url(QString("http://185.164.213.62:8081/Enreach/listVoiceMessages?userName="+authInfo ));
	QNetworkRequest request(url);
	shared_ptr<linphone::Config> config(CoreManager::getInstance()->getCore()->getConfig());
	request.setRawHeader("instance", QByteArray::fromStdString(config->getString("apiAuth", "x-instance", "")));
	request.setRawHeader("token", QByteArray::fromStdString(config->getString("apiAuth", "x-token", "")));
	QList<QByteArray> headers = request.rawHeaderList();
	
	QNetworkReply *reply = manager->get(request);
	MVVMProxyModel::setIsLoading(true);
	if (reply) {
		
		QObject::connect(reply, &QNetworkReply::finished, this, [=]() {
			if (reply) {
				if (reply->error() == QNetworkReply::NoError) {

					QByteArray responseData = reply->readAll();
					
					QJsonDocument jsonResponse = QJsonDocument::fromJson(responseData);
					if (!jsonResponse.isNull()) {
						
						QJsonArray jsonArray = jsonResponse.array();
						for (const QJsonValue &jsonValue : jsonArray) {
							QString folder = CoreManager::getInstance()->getSettingsModel()->getMVVMFolder();
							if (jsonValue.isObject()) {
								QJsonObject jsonObject = jsonValue.toObject();
							
								QString fileContentBase64 = jsonObject.value("fileContent").toString();
								QByteArray fileContent = QByteArray::fromBase64(fileContentBase64.toUtf8());
								QFile file(folder+jsonObject.value("fileName").toString()); 	
								if (!file.exists()) {
									QString dateTimeString = jsonObject.value("fileDate").toString();
									QDateTime fileTime = QDateTime::fromString(dateTimeString, Qt::ISODate);
									
									if (file.open(QIODevice::WriteOnly)) {
										qint64 bytesWritten = file.write(fileContent);
										file.close();
										setFileCreationTime(folder + jsonObject.value("fileName").toString(), fileTime);

									}
								}
											

							}
						}
						auto list = new MVVMListModel(this);
						setSourceModel(list);
						sort(0);
					
					}
				}
				else {
					qDebug() << "Error Code:" << reply->error();
					qDebug() << "Error String:" << reply->errorString();
					
				}
				MVVMProxyModel::setIsLoading(false);
				// Clean up the reply
				reply->deleteLater();
			}
			else {
				qDebug() << "noo reply";
			}

		});
	}

}
bool MVVMProxyModel::setFileCreationTime(const QString& filePath, const QDateTime& creationTime) {
	// Convert QDateTime to FILETIME
	FILETIME fileTime;
	SYSTEMTIME systemTime;
	QDateTime localTime = creationTime.toLocalTime(); // Convert to local time
	systemTime.wYear = localTime.date().year();
	systemTime.wMonth = localTime.date().month();
	systemTime.wDay = localTime.date().day();
	systemTime.wHour = localTime.time().hour();
	systemTime.wMinute = localTime.time().minute();
	systemTime.wSecond = localTime.time().second();
	systemTime.wMilliseconds = 0;
	if (!SystemTimeToFileTime(&systemTime, &fileTime)) {
		qDebug() << "Failed to convert QDateTime to FILETIME.";
		return false;
	}

	// Open the file
	LPCWSTR path = reinterpret_cast<LPCWSTR>(filePath.utf16());
	HANDLE fileHandle = CreateFileW(path, FILE_WRITE_ATTRIBUTES, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (fileHandle != INVALID_HANDLE_VALUE) {
		// Set the file creation time
		if (!SetFileTime(fileHandle, &fileTime, NULL, NULL)) {
			qDebug() << "Failed to set file creation time.";
			CloseHandle(fileHandle);
			return false;
		}
		// Close the file handle
		CloseHandle(fileHandle);
		return true;
	}
	else {
		qDebug() << "Failed to open file for writing.";
		return false;
	}
}
void MVVMProxyModel::remove(FileMediaModel * fileModel){
	QFile file(fileModel->getFilePath());
	auto listModel = qobject_cast<MVVMListModel*>(sourceModel());
	auto model = listModel->get(fileModel);
	if(model){
		listModel->remove(fileModel);
		if(!file.remove())
			listModel->add(model);
	}
	
}

bool MVVMProxyModel::lessThan (const QModelIndex &left, const QModelIndex &right) const {
	const FileMediaModel* a = sourceModel()->data(left).value<FileMediaModel*>();
	const FileMediaModel* b = sourceModel()->data(right).value<FileMediaModel*>();
	
	return a->getCreationDateTime() > b->getCreationDateTime();

}
