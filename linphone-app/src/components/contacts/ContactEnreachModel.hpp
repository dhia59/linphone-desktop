#ifndef CONTACTENREACHMODEL_H
#define CONTACTENREACHMODEL_H

#include <QAbstractItemModel>
#include <QModelIndex>
#include <QVariant>
#include "ContactEnreach.hpp"
#include "utils/LinphoneEnums.hpp"
#include "components/presence/Presence.hpp"
#include <QQmlApplicationEngine>
#include <QDateTime>
class ContactEnreach;

class ContactEnreachModel : public QObject {
	// Grant access to `mLinphoneFriend`.
	friend class ContactsEnreachListModel;
	friend class ContactsEnreachListProxyModel;
	friend class SipAddressesProxyModel;
	friend class SipAddressesSorter;

	Q_OBJECT

		Q_PROPERTY(Presence::PresenceStatus presenceStatus READ getPresenceStatus NOTIFY presenceStatusChanged)
		Q_PROPERTY(QDateTime presenceTimestamp READ getPresenceTimestamp NOTIFY presenceStatusChanged)
		Q_PROPERTY(Presence::PresenceLevel presenceLevel READ getPresenceLevel NOTIFY presenceLevelChanged)
		Q_PROPERTY(ContactEnreach * contactEnreach READ getContactEnreach WRITE setContactEnreach NOTIFY contactUpdated)

public:
	
	//ContactEnreachModel(std::shared_ptr<linphone::Friend> linphoneFriend, QObject * parent = nullptr);
	ContactEnreachModel(ContactEnreach *contactEnreach, QObject * parent = nullptr);
	virtual ~ContactEnreachModel();

	void refreshPresence();

	ContactEnreach *getContactEnreach() const;
	void setContactEnreach(ContactEnreach *ContactEnreach);

//	void mergeContactEnreachModel(ContactEnreachModel *ContactEnreachModel);

	//Q_INVOKABLE ContactEnreachModel *cloneContactEnreachModel() const;
	Presence::PresenceLevel getPresenceLevel() const;
	QDateTime getPresenceTimestamp() const;
	//Q_INVOKABLE bool hasCapability(const LinphoneEnums::FriendCapability& capability);

	//std::shared_ptr<linphone::Friend> getFriend() const;

signals:
	void contactUpdated();
	void presenceStatusChanged(Presence::PresenceStatus status);
	void presenceLevelChanged(Presence::PresenceLevel level);
	void sipAddressAdded(const QString &sipAddress);
	void sipAddressRemoved(const QString &sipAddress);

private:
	void setContactEnreachModelInternal(ContactEnreach *contactEnreach);
	void updateSipAddresses(ContactEnreach *oldContactEnreach);

	Presence::PresenceStatus getPresenceStatus() const;

	ContactEnreach *mContactEnreach = nullptr;
	std::shared_ptr<linphone::Friend> mLinphoneFriend;
};

Q_DECLARE_METATYPE(ContactEnreachModel *);


#endif // CONTACTENREACHMODEL_H
