#ifndef INTERNETCHECKER_HPP
#define INTERNETCHECKER_HPP

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>

class InternetChecker : public QObject {
	Q_OBJECT
    Q_PROPERTY(bool isNetworkReachable READ getIsNetworkReachable WRITE setIsNetworkReachable NOTIFY isNetworkReachableChanged)
public:
	explicit InternetChecker(QObject* parent = nullptr); // Ensure this matches the definition
	bool getIsNetworkReachable() const;
	void pingHost(const QString &host);

signals:
	void networkUp();
	void networkDown();
	void isNetworkReachableChanged();
public slots:
	void checkConnection();

private slots:
	void onReplyFinished();

private:
	QNetworkAccessManager networkManager;	
	void setIsNetworkReachable(const bool &isNetworkReachable);
	bool mIsNetworkReachable = false;
};

#endif // INTERNETCHECKER_HPP
