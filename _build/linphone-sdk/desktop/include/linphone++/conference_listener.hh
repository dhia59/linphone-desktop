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

#ifndef _LINPHONE_CONFERENCE_LISTENER_HH
#define _LINPHONE_CONFERENCE_LISTENER_HH

#include <string>
#include "enums.hh"
#include "conference.hh"
#include "object.hh"






namespace linphone {

	class Conference;
	class Participant;
	class ParticipantDevice;
	class AudioDevice;

	/**
	 *
	 */
	class ConferenceListener: public Listener {
	
		public:


	
		public:
			
		
			/**
			 * @brief Callback used to notify a conference that a participant has been added. 
			 *
			 * @param participant LinphoneParticipant that has been added to the conference   
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantAdded(const std::shared_ptr<linphone::Conference> & conference, const std::shared_ptr<const linphone::Participant> & participant) {};
			
			/**
			 * @brief Callback used to notify a conference that a participant has been
			 * removed. 
			 *
			 * @param participant LinphoneParticipant that has been removed to the conference 
			 *  
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantRemoved(const std::shared_ptr<linphone::Conference> & conference, const std::shared_ptr<const linphone::Participant> & participant) {};
			
			/**
			 * @brief Callback used to notify a conference that a participant has been added. 
			 *
			 * @param participantDevice LinphoneParticipantDevice that has been added to the
			 * conference   
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantDeviceAdded(const std::shared_ptr<linphone::Conference> & conference, const std::shared_ptr<const linphone::ParticipantDevice> & participantDevice) {};
			
			/**
			 * @brief Callback used to notify a conference that a participant has been
			 * removed. 
			 *
			 * @param participantDevice LinphoneParticipantDevice that has been removed to the
			 * conference   
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantDeviceRemoved(const std::shared_ptr<linphone::Conference> & conference, const std::shared_ptr<const linphone::ParticipantDevice> & participantDevice) {};
			
			/**
			 * @brief Callback used to notify a conference that the admin status of a
			 * participant has been changed. 
			 *
			 * @param participant LinphoneParticipant whose admin status has changed   
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantAdminStatusChanged(const std::shared_ptr<linphone::Conference> & conference, const std::shared_ptr<const linphone::Participant> & participant) {};
			
			/**
			 * @brief Callback used to notify a conference that a participant device has
			 * changed state. 
			 *
			 * @param state new participant device state 
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantDeviceStateChanged(const std::shared_ptr<linphone::Conference> & conference, const std::shared_ptr<const linphone::ParticipantDevice> & device, linphone::ParticipantDeviceState state) {};
			
			/**
			 * @brief Callback used to notify a conference that the media availability of a
			 * participant device has been changed. 
			 *
			 * @param device LinphoneParticipantDevice whose media availability changed has
			 * changed   
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantDeviceMediaAvailabilityChanged(const std::shared_ptr<linphone::Conference> & conference, const std::shared_ptr<const linphone::ParticipantDevice> & device) {};
			
			/**
			 * @brief Callback used to notify a conference that the media capability of a
			 * participant device has been changed. 
			 *
			 * @param device LinphoneParticipantDevice whose media capability changed has
			 * changed   
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantDeviceMediaCapabilityChanged(const std::shared_ptr<linphone::Conference> & conference, const std::shared_ptr<const linphone::ParticipantDevice> & device) {};
			
			/**
			 * @brief Callback used to notify a conference state has changed. 
			 *
			 * @param newState The new state of the conference 
			 */
			LINPHONECXX_PUBLIC virtual void onStateChanged(const std::shared_ptr<linphone::Conference> & conference, linphone::Conference::State newState) {};
			
			/**
			 * @brief Callback used to notify that the available media of a conference has
			 * changed. 
			 *
			 * @param conference LinphoneConference object   
			 */
			LINPHONECXX_PUBLIC virtual void onAvailableMediaChanged(const std::shared_ptr<linphone::Conference> & conference) {};
			
			/**
			 * @brief Callback used to notify that the subject of a conference has changed. 
			 *
			 * @param subject subject of the conference   
			 */
			LINPHONECXX_PUBLIC virtual void onSubjectChanged(const std::shared_ptr<linphone::Conference> & conference, const std::string & subject) {};
			
			/**
			 * @brief Callback used to notify that a participant device is speaking or isn't
			 * speaking anymore. 
			 *
			 * @param isSpeaking true if is speaking, false otherwise 
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantDeviceIsSpeakingChanged(const std::shared_ptr<linphone::Conference> & conference, const std::shared_ptr<const linphone::ParticipantDevice> & participantDevice, bool isSpeaking) {};
			
			/**
			 * @brief Callback used to notify that a participant device is muted or is no
			 * longer muted. 
			 *
			 * @param isMuted true if is muted, false otherwise 
			 */
			LINPHONECXX_PUBLIC virtual void onParticipantDeviceIsMuted(const std::shared_ptr<linphone::Conference> & conference, const std::shared_ptr<const linphone::ParticipantDevice> & participantDevice, bool isMuted) {};
			
			/**
			 * @brief Callback used to notify that the audio device of a conference has
			 * changed. 
			 *
			 * @param audioDevice audio device of the conference   
			 */
			LINPHONECXX_PUBLIC virtual void onAudioDeviceChanged(const std::shared_ptr<linphone::Conference> & conference, const std::shared_ptr<const linphone::AudioDevice> & audioDevice) {};
			
			/**
			 * @brief Callback used to notify which participant device video is being
			 * displayed as "actively speaking". 
			 *
			 * @param participantDevice the participant device currently displayed as active
			 * speaker   
			 */
			LINPHONECXX_PUBLIC virtual void onActiveSpeakerParticipantDevice(const std::shared_ptr<linphone::Conference> & conference, const std::shared_ptr<const linphone::ParticipantDevice> & participantDevice) {};
			
			
	};

};

#endif // _LINPHONE_CONFERENCE_LISTENER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
