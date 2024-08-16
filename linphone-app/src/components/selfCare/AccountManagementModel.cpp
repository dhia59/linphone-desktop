
#include <QDir>
#include <QtDebug>
#include <QPluginLoader>
#include <QJsonDocument>

#include <cstdlib>
#include <cmath>

#include "config.h"
#include <QObject>

#include "app/App.hpp"
#include "app/logger/Logger.hpp"
#include "app/paths/Paths.hpp"

#include "components/core/CoreManager.hpp"
#include "include/LinphoneApp/PluginNetworkHelper.hpp"
#include "utils/Utils.hpp"
#include "AccountManagementModel.hpp"
#include "utils/Constants.hpp"
#include "utils/MediastreamerUtils.hpp"


// =============================================================================

using namespace std;

AccountManagementModel::AccountManagementModel(QObject *parent) : QObject(parent)


{
	m_isLoading = false;
	m_isPasswordMatch = false;
	m_isPasswordUpdated = false;
	m_isRequestSent = false;
}

AccountManagementModel::~AccountManagementModel()
{
	m_isPasswordMatch = false;
	m_isPasswordUpdated = false;
	m_isRequestSent = false;
	m_isLoading = false;
}

bool AccountManagementModel::getIsPasswordUpdated()
{
	return m_isPasswordUpdated;
}

bool AccountManagementModel::getIsPasswordMatch()
{
	return m_isPasswordMatch;
}

bool AccountManagementModel::getIsRequestSent()
{
	return m_isRequestSent;
}

bool AccountManagementModel::getIsLoading()
{
	return m_isLoading;
}

void AccountManagementModel::setIsPasswordMatch(const bool isPasswordMatch)
{
	if (m_isPasswordMatch != isPasswordMatch) {
		m_isPasswordMatch = isPasswordMatch;
		emit isPasswordMatchChanged();
	}
}

void AccountManagementModel::setIsPasswordUpdated(const bool isPasswordUpdated)
{
	if (m_isPasswordUpdated != isPasswordUpdated) {
		m_isPasswordUpdated = isPasswordUpdated;
		emit isPasswordUpdatedChanged();
	}
}

void AccountManagementModel::setIsRequestSent(const bool isRequestSent)
{
	if (m_isRequestSent != isRequestSent) {
		m_isRequestSent = isRequestSent;
		emit isRequestSentChanged();
	}
}

void AccountManagementModel::setIsLoading(const bool isLoading)
{
	if (m_isLoading != isLoading) {
		m_isLoading = isLoading;
		emit isLoadingChanged();
	}
}



Q_INVOKABLE bool AccountManagementModel::updatePassword(QString oldPassword, QString newPassword)
{
	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	std::shared_ptr<linphone::Account> defaultAddress = CoreManager::getInstance()->getCore()->getDefaultAccount();
	if (defaultAddress != nullptr)//
	{
		auto username = QString::fromStdString(defaultAddress->findAuthInfo()->getUsername());
		QUrl url("http://saylo.netcom-group.fr:8081/SelfCare/UserUpdateDevicePassword");
		QUrlQuery query;
		query.addQueryItem("username", username);
		query.addQueryItem("oldPassword", oldPassword);
		query.addQueryItem("newPassword", newPassword);
		url.setQuery(query);
		setIsLoading(false);
		QNetworkRequest request(url);
		shared_ptr<linphone::Config> config(CoreManager::getInstance()->getCore()->getConfig());
		request.setRawHeader("instance", QByteArray::fromStdString(config->getString("apiAuth", "x-instance", "")));
		request.setRawHeader("token", QByteArray::fromStdString(config->getString("apiAuth", "x-token", "")));
		request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
		QList<QByteArray> headers = request.rawHeaderList();
		foreach(const QByteArray &header, headers) {
			qDebug() << "heloooooooooo" + header << ":" << request.rawHeader(header);
		}
		QByteArray jsonData =  QByteArray();
		QNetworkReply *reply = manager->post(request, jsonData);
		if (reply) {
			QObject::connect(reply, &QNetworkReply::finished, this, [=]() {
				if (reply) {
					setIsLoading(false);
					if (reply->error() == QNetworkReply::NoError) {
						QByteArray responseData = reply->readAll();
						qDebug() << "Response:" << responseData;
						QJsonDocument jsonResponse = QJsonDocument::fromJson(responseData);
						setIsPasswordMatch(jsonResponse.object()["isPasswordMatch"].toBool());
						setIsPasswordUpdated(jsonResponse.object()["isPasswordUpdated"].toBool()); 
						setIsRequestSent(true);
						return true;
					}
					else {
						qDebug() << "Error Code:" << reply->error();
						qDebug() << "Error String:" << reply->errorString();
						return false;
					}
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
