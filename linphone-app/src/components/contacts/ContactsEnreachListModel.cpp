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

#include <QQmlApplicationEngine>

#include "app/App.hpp"
#include "ContactEnreachModel.hpp"
#include "components/contact/VcardModel.hpp"
#include "components/core/CoreManager.hpp"
#include "components/friend/FriendListListener.hpp"
#include "utils/Utils.hpp"

#include "ContactsEnreachListModel.hpp"

// =============================================================================
void ContactsEnreachListModel::connectTo(FriendListListener * listener){
	connect(listener, &FriendListListener::contactCreated, this, &ContactsEnreachListModel::onContactCreated);
	connect(listener, &FriendListListener::contactDeleted, this, &ContactsEnreachListModel::onContactDeleted);
	connect(listener, &FriendListListener::contactUpdated, this, &ContactsEnreachListModel::onContactUpdated);
	connect(listener, &FriendListListener::syncStatusChanged, this, &ContactsEnreachListModel::onSyncStatusChanged);
	connect(listener, &FriendListListener::presenceReceived, this, &ContactsEnreachListModel::onPresenceReceived);
}
// =============================================================================

using namespace std;

ContactsEnreachListModel::ContactsEnreachListModel (QObject *parent) : ProxyListModel(parent) {
	mFriendListListener = std::make_shared<FriendListListener>();
	connectTo(mFriendListListener.get());
	update();
}

ContactsEnreachListModel::~ContactsEnreachListModel(){
	if(rowCount()>0) {
		beginResetModel();
		mOptimizedSearch.clear();
		mList.clear();
		mLinphoneFriends.clear();
		endResetModel();
	}
}




bool ContactsEnreachListModel::removeRows (int row, int count, const QModelIndex &parent) {
	int limit = row + count - 1;
	
	if (row < 0 || count < 0 || limit >= mList.count())
		return false;
		
	auto friendsList = CoreManager::getInstance()->getCore()->getFriendsLists();
	emit layoutAboutToBeChanged();
	beginRemoveRows(parent, row, limit);
	
	for (int i = 0; i < count; ++i) {
		QSharedPointer<ContactEnreachModel> contact = mList.takeAt(row).objectCast<ContactEnreachModel>();
		//for(auto address : contact->getListContacts()){
		//	/*auto addressStr = address.toString();
		//	mOptimizedSearch.remove(addressStr);*/
		//}
		
		/*for(auto l : friendsList)
			l->removeFriend(contact->mLinphoneFriend);*/
		
		emit contactRemoved(contact);
	}
	
	endRemoveRows();
	emit layoutChanged();
	return true;
}

// -----------------------------------------------------------------------------

QSharedPointer<ContactEnreachModel> ContactsEnreachListModel::findContactEnreachModelFromSipAddress (const QString &sipAddress) const {
	auto result = mOptimizedSearch.find(sipAddress);
	if(result != mOptimizedSearch.end())
		return result.value();
	else
		return nullptr;
}

QSharedPointer<ContactEnreachModel> ContactsEnreachListModel::findContactEnreachModelFromUsername (const QString &username) const {
	return nullptr;
//	auto it = find_if(mList.begin(), mList.end(), [&username](QSharedPointer<QObject> ContactEnreachModel) {
//			return qobject_cast<ContactEnreachModel*>(ContactEnreachModel.get())->getUsername() == username;
//});
//	return it != mList.end() ? it->objectCast<ContactEnreachModel>() : nullptr;
}

// -----------------------------------------------------------------------------
ContactEnreachModel *ContactsEnreachListModel::getContactEnreachModelFromAddress (const QString& address) const{
	auto contact = findContactEnreachModelFromSipAddress(Utils::cleanSipAddress(address));
	return contact.get();
}

void ContactsEnreachListModel::addContact(QSharedPointer<ContactEnreachModel> contact) {
	QObject::connect(contact.get(), &ContactEnreachModel::contactUpdated, this, [this, contact]() {
		emit contactUpdated(contact);
	});
	QObject::connect(contact.get(), &ContactEnreachModel::sipAddressAdded, this, [this, contact](const QString &sipAddress) {
		mOptimizedSearch[sipAddress] = contact;
		emit sipAddressAdded(contact, sipAddress);
	});
	QObject::connect(contact.get(), &ContactEnreachModel::sipAddressRemoved, this, [this, contact](const QString &sipAddress) {
		mOptimizedSearch.remove(sipAddress);
		emit sipAddressRemoved(contact, sipAddress);
	});
	add<ContactEnreachModel>(contact);
	/*for (auto address : contact->getVcardModel()->getSipAddresses()) {
		auto addressStr = address.toString();
		mOptimizedSearch[addressStr] = contact;
	}*/
}
ContactEnreachModel *ContactsEnreachListModel::addContact (ContactEnreachModel* model) {	

	if (!model)
		return nullptr;

	// Try to merge vcardModel to an existing contact.
	//auto contact = model->getContactEnreach();
	//if (contact) {
	//	//contact->mergeVcardModel(vcardModel);
	//	return contact.get();
	//}

	auto contact = QSharedPointer<ContactEnreachModel>::create(model->getContactEnreach());
	App::getInstance()->getEngine()->setObjectOwnership(contact.get(), QQmlEngine::CppOwnership);
	addContact(contact);

	//if (mLinphoneFriends.size() == 0) {
	//	update();// Friends were not loaded correctly. Update them.
	//}
	//auto friendsList = CoreManager::getInstance()->getCore()->getDefaultFriendList();
	//if (!friendsList) {
	//	qWarning() << "There is no friends list available, cannot add a contact";
	//	return nullptr;
	//}

	//if (friendsList->addFriend(contact->mLinphoneFriend) != linphone::FriendList::Status::OK) {
	//	qWarning() << QStringLiteral("Unable to add contact from vcard:") << vcardModel;
	//	return nullptr;
	//}


	///qInfo() << QStringLiteral("Add contact from vcard:") << contact.get() << vcardModel;

	// Make sure new subscribe is issued.
	/*friendsList->updateSubscriptions();*/

	//emit contactAdded(contact);

	return model;
}

void ContactsEnreachListModel::removeContact (ContactEnreachModel *contact){
	remove(contact);
}

// -----------------------------------------------------------------------------

void ContactsEnreachListModel::cleanAvatars () {
	qInfo() << QStringLiteral("Delete all avatars.");
	
	for (const auto &item : mList) {
		auto contact = item.objectCast<ContactEnreachModel>();
		/*VcardModel* vcardModel = contact->cloneVcardModel();
		vcardModel->setAvatar(QString(""));
		contact->setVcardModel(vcardModel);*/
	}
}

// -----------------------------------------------------------------------------


void ContactsEnreachListModel::update(){
	beginResetModel();
	for(auto l : mLinphoneFriends)
		l->removeListener(mFriendListListener);
	mLinphoneFriends.clear();
	mOptimizedSearch.clear();
	mList.clear();
	endResetModel();

	mLinphoneFriends = CoreManager::getInstance()->getCore()->getFriendsLists();
	
	for(auto l : mLinphoneFriends){
		l->addListener(mFriendListListener);
		for (const auto &linphoneFriend : l->getFriends()) {
			onContactCreated(linphoneFriend);
		}
	}
}

//------------------------------------------------------------------------------------------------

void ContactsEnreachListModel::onContactCreated(const std::shared_ptr<linphone::Friend> & linphoneFriend){
	if(linphoneFriend){
		QQmlEngine *engine = App::getInstance()->getEngine();
		//auto haveContact = std::find_if(mList.begin(), mList.end(), [linphoneFriend] (const QSharedPointer<QObject>& item){		
		//		return item.objectCast<ContactEnreachModel>()->getFriend() == linphoneFriend;
		//	});
		//if(haveContact == mList.end()) {
		//	auto contact = QSharedPointer<ContactEnreachModel>::create(linphoneFriend);
		//// See: http://doc.qt.io/qt-5/qtqml-cppintegration-data.html#data-ownership
		//// The returned value must have a explicit parent or a QQmlEngine::CppOwnership.
		//	engine->setObjectOwnership(contact.get(), QQmlEngine::CppOwnership);
		//	addContact(contact);
		//}
	}
}
void ContactsEnreachListModel::onContactDeleted(const std::shared_ptr<linphone::Friend> & linphoneFriend){
}
void ContactsEnreachListModel::onContactUpdated(const std::shared_ptr<linphone::Friend> & newFriend, const std::shared_ptr<linphone::Friend> & oldFriend){
}
void ContactsEnreachListModel::onSyncStatusChanged(linphone::FriendList::SyncStatus status, const std::string & message){
}
void ContactsEnreachListModel::onPresenceReceived(const std::list<std::shared_ptr<linphone::Friend>> & friends){
}

