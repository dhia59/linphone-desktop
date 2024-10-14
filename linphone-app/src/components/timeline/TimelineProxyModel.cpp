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

#include "components/core/CoreManager.hpp"
#include "components/participant/ParticipantListModel.hpp"
#include "components/settings/AccountSettingsModel.hpp"
#include "components/settings/SettingsModel.hpp"
#include "components/sip-addresses/SipAddressesModel.hpp"
#include "utils/Utils.hpp"

#include "TimelineProxyModel.hpp"
#include "TimelineListModel.hpp"
#include "TimelineModel.hpp"

#include <QDebug>


// =============================================================================

// -----------------------------------------------------------------------------

TimelineProxyModel::TimelineProxyModel (QObject *parent) : QSortFilterProxyModel(parent) {
	
}

// -----------------------------------------------------------------------------

void TimelineProxyModel::unselectAll(){
	if( sourceModel())
		qobject_cast<TimelineListModel*>(sourceModel())->selectAll(false);
}

void TimelineProxyModel::setFilterFlags(const int& filterFlags){
	if( mFilterFlags != filterFlags){
		mFilterFlags = filterFlags;
		invalidate();
		emit filterFlagsChanged();
	}
}
void TimelineProxyModel::setFilterText(const QString& text){
	if( mFilterText != text){
		mFilterText = text;
		invalidate();
		emit filterTextChanged();
	}
}
	
TimelineProxyModel::TimelineListSource TimelineProxyModel::getListSource() const{
	return mListSource;
}

TimelineModel*  TimelineProxyModel::getFirstChatRoom(int row){
	//return CoreManager::getInstance()->getTimelineListModel()->getAt(0)->getChatRoomModel()
	QModelIndex index = sourceModel()->index(0, 0);
	TimelineModel* a = sourceModel()->data(index).value<TimelineModel*>();
	auto fr = a->getChatRoomModel()->mLastUpdateTime;
	//TimelineModel* m = NULL;
	//if( sourceModel())
	//	qobject_cast<TimelineListModel*>(sourceModel())->getAt(0);
	//qobject_cast<TimelineModel*>(qobject_cast<TimelineListModel*>(sourceModel())->getAt(0))
	
	//TimelineModel * getAt(const int& index);
	//m = CoreManager::getInstance()->getTimelineListModel()->getAt(1);
	//qobject_cast<TimelineListModel*>(sourceModel())->selectAll(true);
	//auto d = m->getChatRoomModel();
	//auto dd = d->mUnreadMessagesCount;
	return a;
}

void TimelineProxyModel::setListSource(const TimelineListSource& source){
	if(source != mListSource) {
		TimelineListModel * model = nullptr;
		if( source != Undefined){
			CoreManager *coreManager = CoreManager::getInstance();
			AccountSettingsModel *accountSettingsModel = coreManager->getAccountSettingsModel();
			model = source == Main ? CoreManager::getInstance()->getTimelineListModel() : CoreManager::getInstance()->getTimelineListModel()->clone();
		
			//model.
			connect(model, SIGNAL(selectedCountChanged(int)), this, SIGNAL(selectedCountChanged(int)));
			connect(model, &TimelineListModel::selectedChanged, this, &TimelineProxyModel::selectedChanged);
			connect(model, &TimelineListModel::countChanged, this, &TimelineProxyModel::countChanged);
		
			QObject::connect(accountSettingsModel, &AccountSettingsModel::defaultAccountChanged, this, [this]() {
				qobject_cast<TimelineListModel*>(sourceModel())->update();
				invalidate();
			});
			QObject::connect(coreManager->getSipAddressesModel(), &SipAddressesModel::sipAddressReset, this, [this]() {
				qobject_cast<TimelineListModel*>(sourceModel())->reset();
				invalidate();// Invalidate and reload GUI if the model has been reset
			});
		}
	
		if( mListSource != Main && sourceModel()){
			sourceModel()->deleteLater();
		}
		setSourceModel(model);
		sort(0);
		mListSource = source;
		emit listSourceChanged();
	}
}
	
// -----------------------------------------------------------------------------

bool TimelineProxyModel::filterAcceptsRow (int sourceRow, const QModelIndex &sourceParent) const {
	if(!sourceModel())
		return false;
	const QModelIndex index = sourceModel()->index(sourceRow, 0, sourceParent);
	auto timeline = sourceModel()->data(index).value<TimelineModel*>();
	if(!timeline || !timeline->getChatRoomModel() || timeline->getChatRoomModel()->getState() == (int)linphone::ChatRoom::State::Deleted)
		return false;
	bool haveEncryption = timeline->getChatRoomModel()->haveEncryption();
	bool noChat = !CoreManager::getInstance()->getSettingsModel()->getStandardChatEnabled() && !CoreManager::getInstance()->getSettingsModel()->getSecureChatEnabled();
	if(!noChat && !CoreManager::getInstance()->getSettingsModel()->getStandardChatEnabled() && !haveEncryption)
		return false;
	if(!noChat && !CoreManager::getInstance()->getSettingsModel()->getSecureChatEnabled() && haveEncryption)
		return false;
	bool show = (mFilterFlags==0);// Show all at 0 (no hide all)
	bool isGroup = timeline->getChatRoomModel()->isGroupEnabled();
	bool isEphemeral = timeline->getChatRoomModel()->isEphemeralEnabled();

	if (mFilterFlags > 0) {
		show = !(((mFilterFlags & TimelineFilter::GroupChatRoom) == TimelineFilter::GroupChatRoom) && !isGroup);
			
			
			/*(
			(((mFilterFlags & TimelineFilter::SecureChatRoom) == TimelineFilter::SecureChatRoom) && !haveEncryption)
			|| 
			);
			*/
	}
		
	if(show && mFilterText != ""){
		QRegularExpression search(QRegularExpression::escape(mFilterText), QRegularExpression::CaseInsensitiveOption | QRegularExpression::UseUnicodePropertiesOption);
		show = timeline->getChatRoomModel()->getSubject().contains(search) 
			|| timeline->getChatRoomModel()->getUsername().contains(search);
			//|| timeline->getChatRoomModel()->getFullPeerAddress().contains(search); not enough significant?
	}
	if(show)
		show = timeline->getChatRoomModel()->isCurrentAccount();
	//if (timeline->getChatRoomModel()->getContactType() != "contact")
	//	show = false;

	return show;
}

bool TimelineProxyModel::lessThan (const QModelIndex &left, const QModelIndex &right) const {
	if( !sourceModel())
		return false;
	const TimelineModel* a = sourceModel()->data(left).value<TimelineModel*>();
	const TimelineModel* b = sourceModel()->data(right).value<TimelineModel*>();
	bool aHaveUnread = a->getChatRoomModel()->getAllUnreadCount() > 0;
	bool bHaveUnread = b->getChatRoomModel()->getAllUnreadCount() > 0;
	return (aHaveUnread && !bHaveUnread)
			|| (aHaveUnread == bHaveUnread && a->getChatRoomModel()->mLastUpdateTime > b->getChatRoomModel()->mLastUpdateTime);
}
