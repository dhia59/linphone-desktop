/*
 * Copyright (c) 2010-2022 Belledonne Communications SARL.
 *
 * This file is part of Liblinphone 
 * (see https://gitlab.linphone.org/BC/public/liblinphone).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _MSC_VER
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif // _MSC_VER

#ifndef _LINPHONE_CHAT_ROOM_LISTENER_HH
#define _LINPHONE_CHAT_ROOM_LISTENER_HH

#include <list>
#include "chat_room.hh"
#include "enums.hh"
#include "object.hh"






namespace linphone {

	class ChatRoom;
	class Address;
	class ChatMessage;
	class EventLog;
	class ParticipantImdnState;

	/**
	 *
	 */
	class ChatRoomListener: public Listener {
	
		public:


	
		public:
			
		
			/**
			 * @brief Is composing notification callback prototype. 
			 *
			 * @param isComposing A boolean value telling whether the remote is composing or
			 * not 
			 */
			LINPHONECXX_PUBLIC virtual void onIsComposingReceived(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::Address> & remoteAddress, bool isComposing) {};
			
			/**
			 * @brief Callback used to notify a chat room that a message has been received. 
			 *
			 * @param message The LinphoneChatMessage that has been received   
			 */
			LINPHONECXX_PUBLIC virtual void onMessageReceived(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<linphone::ChatMessage> & message) {};
			
			/**
			 * @brief Callback used to notify a chat room that many chat messages have been
			 * received. 
			 *
			 * Only called when aggregation is enabled (aka [sip] chat_messages_aggregation ==
			 * 1 or using linphone_core_set_chat_messages_aggregation_enabled), it replaces
			 * the single message received callback. 
			 * @param chatMessages The  list of events to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onMessagesReceived(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::list<std::shared_ptr<linphone::ChatMessage>> & chatMessages) {};
			
			/**
			 * @brief Callback used to notify a chat room that an event log has been created. 
			 *
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onNewEvent(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used to notify a chat room that many event logs have been
			 * created. 
			 *
			 * @param eventLogs The  list of events to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onNewEvents(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::list<std::shared_ptr<linphone::EventLog>> & eventLogs) {};
			
			/**
			 * @brief Callback used to notify a chat room that a chat message has been
			 * received. 
			 *
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onChatMessageReceived(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used to notify a chat room that one or many chat messages have
			 * been received. 
			 *
			 * Only called when aggregation is enabled (aka [sip] chat_messages_aggregation ==
			 * 1 or using linphone_core_set_chat_messages_aggregation_enabled), it replaces
			 * the single chat message received callback. 
			 * @param eventLogs The  list of events to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onChatMessagesReceived(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::list<std::shared_ptr<linphone::EventLog>> & eventLogs) {};
			
			/**
			 * @brief Callback used to notify a chat room that a chat message is being sent. 
			 *
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onChatMessageSending(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used to notify a chat room that a chat message has been sent. 
			 *
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onChatMessageSent(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used to notify a chat room that a participant has been added. 
			 *
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantAdded(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used to notify a chat room that a participant has been removed. 
			 *
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantRemoved(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used to notify a chat room that the admin status of a
			 * participant has been changed. 
			 *
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantAdminStatusChanged(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used to notify a chat room state has changed. 
			 *
			 * @param newState The new LinphoneChatRoomState of the chat room 
			 */
			LINPHONECXX_PUBLIC virtual void onStateChanged(const std::shared_ptr<linphone::ChatRoom> & chatRoom, linphone::ChatRoom::State newState) {};
			
			/**
			 * @brief Callback used to notify a security event in the chat room. 
			 *
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onSecurityEvent(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used to notify that the subject of a chat room has changed. 
			 *
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onSubjectChanged(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used to notify a chat room that a message has been received but
			 * we were unable to decrypt it. 
			 *
			 * @param message The LinphoneChatMessage that has been received   
			 */
			LINPHONECXX_PUBLIC virtual void onUndecryptableMessageReceived(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<linphone::ChatMessage> & message) {};
			
			/**
			 * @brief Callback used to notify a chat room that a participant has been added. 
			 *
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantDeviceAdded(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used to notify a chat room that a participant has been removed. 
			 *
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantDeviceRemoved(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used to notify a conference that a participant device has
			 * changed state. 
			 *
			 * @param state new participant device state 
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantDeviceStateChanged(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog, linphone::ParticipantDeviceState state) {};
			
			/**
			 * @brief Callback used to notify a conference that the media availability of a
			 * participant device has been changed. 
			 *
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantDeviceMediaAvailabilityChanged(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used to notify a chat room has been joined. 
			 *
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onConferenceJoined(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used to notify a chat room has been left. 
			 *
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onConferenceLeft(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used to notify a chat room that an ephemeral related event has
			 * been generated. 
			 *
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onEphemeralEvent(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used to notify a chat room that the lifespan of an ephemeral
			 * message before disappearing has started to decrease. 
			 *
			 * This callback is called when the ephemeral message is read by the receiver. 
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onEphemeralMessageTimerStarted(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used to notify a chat room that an ephemeral message has been
			 * deleted. 
			 *
			 * @param eventLog LinphoneEventLog The event to be notified   
			 */
			LINPHONECXX_PUBLIC virtual void onEphemeralMessageDeleted(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::EventLog> & eventLog) {};
			
			/**
			 * @brief Callback used when a group chat room is created server-side to generate
			 * the address of the chat room. 
			 *
			 * The function linphone_chat_room_set_conference_address needs to be called by
			 * this callback. 
			 * @param chatRoom LinphoneChatRoom object   
			 */
			LINPHONECXX_PUBLIC virtual void onConferenceAddressGeneration(const std::shared_ptr<linphone::ChatRoom> & chatRoom) {};
			
			/**
			 * @brief Callback used when a group chat room server is subscribing to
			 * registration state of a participant. 
			 *
			 * @param participantAddress LinphoneAddress object   
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantRegistrationSubscriptionRequested(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::Address> & participantAddress) {};
			
			/**
			 * @brief Callback used when a group chat room server is unsubscribing to
			 * registration state of a participant. 
			 *
			 * @param participantAddress LinphoneAddress object   
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantRegistrationUnsubscriptionRequested(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<const linphone::Address> & participantAddress) {};
			
			/**
			 * @brief Callback used to tell the core whether or not to store the incoming
			 * message in db or not using linphone_chat_message_set_to_be_stored. 
			 *
			 * @param message The LinphoneChatMessage that is being received   
			 */
			LINPHONECXX_PUBLIC virtual void onChatMessageShouldBeStored(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<linphone::ChatMessage> & message) {};
			
			/**
			 * @brief Callback used to notify a participant state has changed in a message of
			 * this chat room. 
			 *
			 * @param state The LinphoneParticipantImdnState   
			 */
			LINPHONECXX_PUBLIC virtual void onChatMessageParticipantImdnStateChanged(const std::shared_ptr<linphone::ChatRoom> & chatRoom, const std::shared_ptr<linphone::ChatMessage> & message, const std::shared_ptr<const linphone::ParticipantImdnState> & state) {};
			
			
	};

};

#endif // _LINPHONE_CHAT_ROOM_LISTENER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
