#include "InternetChecker.hpp"
#include <QNetworkRequest>
#include <QUrl>
#include <QDebug>
#include <QProcess>
InternetChecker::InternetChecker(QObject* parent) : QObject(parent) {
	// Constructor implementation
}

void InternetChecker::checkConnection() {
	QNetworkRequest request(QUrl("http://www.google.com"));
	QNetworkReply* reply = networkManager.get(request);

	connect(reply, &QNetworkReply::finished, this, &InternetChecker::onReplyFinished);
}

void InternetChecker::onReplyFinished() {
	QNetworkReply* reply = qobject_cast<QNetworkReply*>(sender());
	if (reply) {
		if (reply->error() == QNetworkReply::NoError) {
			qDebug() << "Internet connection is available.";
			setIsNetworkReachable(true);
			emit networkUp();
		}
		else {
			qDebug() << "No internet connection.";
			setIsNetworkReachable(false);
			emit networkDown();
		}
		reply->deleteLater();
	}
}

bool InternetChecker::getIsNetworkReachable() const
{
	auto test = mIsNetworkReachable;
	return mIsNetworkReachable;
}

void InternetChecker::setIsNetworkReachable(const bool &isNetworkReachable)
{
	if (mIsNetworkReachable != isNetworkReachable) {
		mIsNetworkReachable = isNetworkReachable;
		emit isNetworkReachableChanged();
	}
}
void InternetChecker::pingHost(const QString &host) {
	QProcess pingProcess;

#ifdef Q_OS_WIN
	pingProcess.start("ping", QStringList() << "/n" << "1" << host); 
#else
	pingProcess.start("ping", QStringList() << "-c" << "1" << host);
#endif

	pingProcess.waitForFinished();
	int exitCode = pingProcess.exitCode();
	qDebug() << "ping exit Code = "<< exitCode;

	if (exitCode==0) {
		setIsNetworkReachable(true);
		emit networkUp();
	}
	else {
		setIsNetworkReachable(false);
		emit networkDown();
	}
}
