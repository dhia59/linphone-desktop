

#ifndef AccountManagementModel_H_
#define AccountManagementModel_H_

#include <linphone++/linphone.hh>
#include <utils/MediastreamerUtils.hpp>
#include <QObject>
#include <QVariantMap>
#include <QFont>

#include "components/core/CoreHandlers.hpp"
#include "utils/LinphoneEnums.hpp"
#include "utils/Utils.hpp"

#ifdef ENABLE_QT_KEYCHAIN
#include "components/vfs/VfsUtils.hpp"
#endif
#include <QObject>
#include <QStringList>


class AccountManagementModel :public QObject {
		Q_OBJECT	
	Q_PROPERTY(bool isPasswordUpdated READ getIsPasswordUpdated WRITE setIsPasswordUpdated NOTIFY isPasswordUpdatedChanged)
	Q_PROPERTY(bool isPasswordMatch READ getIsPasswordMatch WRITE setIsPasswordMatch NOTIFY isPasswordMatchChanged)
	Q_PROPERTY(bool isRequestSent READ getIsRequestSent WRITE setIsRequestSent NOTIFY isRequestSentChanged)
	Q_PROPERTY(bool isLoading READ getIsLoading WRITE setIsLoading NOTIFY isLoadingChanged)

public:
	explicit AccountManagementModel(QObject *parent = nullptr);
	AccountManagementModel(const AccountManagementModel&) = delete;
	AccountManagementModel& operator=(const AccountManagementModel&) = delete;
	virtual ~AccountManagementModel();
	Q_INVOKABLE bool updatePassword(QString oldPassword, QString newPassword);
	// getter
	bool getIsPasswordUpdated();
	bool getIsPasswordMatch();
	bool getIsRequestSent();
	bool getIsLoading();
	// setter
	void setIsPasswordMatch(const bool isPasswordMatch);
	void setIsPasswordUpdated(const bool isPasswordUpdated);
	void setIsRequestSent(const bool isRequestSent);
	void setIsLoading(const bool isLoading);
signals:
	void isPasswordUpdatedChanged();
	void isPasswordMatchChanged();
	void isRequestSentChanged();
	void isLoadingChanged();

private:
	bool m_isPasswordMatch;
	bool m_isPasswordUpdated;
	bool m_isRequestSent;
	bool m_isLoading;
	
};

Q_DECLARE_METATYPE(AccountManagementModel *)
// =============================================================================

#endif // AccountManagementModel_H_
