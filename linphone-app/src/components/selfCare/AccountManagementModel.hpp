

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
	// setter
	void setIsPasswordMatch(const bool isPasswordMatch);
	void setIsPasswordUpdated(const bool isPasswordUpdated);
	void setIsRequestSent(const bool isRequestSent);
signals:
	void isPasswordUpdatedChanged();
	void isPasswordMatchChanged();
	void isRequestSentChanged();

private:
	bool m_isPasswordMatch;
	bool m_isPasswordUpdated;
	bool m_isRequestSent;
	
};

Q_DECLARE_METATYPE(AccountManagementModel *)
// =============================================================================

#endif // AccountManagementModel_H_
