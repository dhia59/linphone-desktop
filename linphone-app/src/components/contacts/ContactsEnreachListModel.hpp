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

#ifndef CONTACTS_ENREACH_LIST_MODEL_H_
#define CONTACTS_ENREACH_LIST_MODEL_H_

#include <memory>

#include "app/proxyModel/ProxyListModel.hpp"

// =============================================================================

namespace linphone {
	class FriendList;
}

class ContactEnreachModel;
class VcardModel;
class FriendListListener;

class ContactsEnreachListModel : public ProxyListModel {
	friend class SipAddressesModel;
	
	Q_OBJECT;
	
public:
	ContactsEnreachListModel (QObject *parent = Q_NULLPTR);
	virtual ~ContactsEnreachListModel();
	
	bool removeRows (int row, int count, const QModelIndex &parent = QModelIndex()) override;
	
	QSharedPointer<ContactEnreachModel> findContactEnreachModelFromSipAddress (const QString &sipAddress) const;
	QSharedPointer<ContactEnreachModel> findContactEnreachModelFromUsername (const QString &username) const;
	
	Q_INVOKABLE ContactEnreachModel *getContactEnreachModelFromAddress (const QString& address) const;
	Q_INVOKABLE ContactEnreachModel *addContact (ContactEnreachModel* contact);
	Q_INVOKABLE void removeContact (ContactEnreachModel *contact);
	
	Q_INVOKABLE void cleanAvatars ();
	Q_INVOKABLE void update ();
	
	void connectTo(FriendListListener * listener);
	
public slots:
	void onContactCreated(const std::shared_ptr<linphone::Friend> & linphoneFriend);
	void onContactDeleted(const std::shared_ptr<linphone::Friend> & linphoneFriend);
	void onContactUpdated(const std::shared_ptr<linphone::Friend> & newFriend, const std::shared_ptr<linphone::Friend> & oldFriend);
	void onSyncStatusChanged(linphone::FriendList::SyncStatus status, const std::string & message);
	void onPresenceReceived(const std::list<std::shared_ptr<linphone::Friend>> & friends);
	
signals:
	void contactAdded (QSharedPointer<ContactEnreachModel>);
	void contactRemoved (QSharedPointer<ContactEnreachModel>);
	void contactUpdated (QSharedPointer<ContactEnreachModel>);
	
	void sipAddressAdded (QSharedPointer<ContactEnreachModel>, const QString &sipAddress);
	void sipAddressRemoved (QSharedPointer<ContactEnreachModel>, const QString &sipAddress);
	
private:
	void addContact (QSharedPointer<ContactEnreachModel> contact);
	
	QMap<QString, QSharedPointer<ContactEnreachModel>>	mOptimizedSearch;
	std::list<std::shared_ptr<linphone::FriendList>> mLinphoneFriends;
	std::shared_ptr<FriendListListener> mFriendListListener;
};

#endif // CONTACTS_ENREACH_LIST_MODEL_H_
