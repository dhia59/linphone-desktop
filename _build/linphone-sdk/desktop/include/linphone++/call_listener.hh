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

#ifndef _LINPHONE_CALL_LISTENER_HH
#define _LINPHONE_CALL_LISTENER_HH

#include <string>
#include "call.hh"
#include "object.hh"






namespace linphone {

	class Call;
	class InfoMessage;
	class CallStats;
	class Headers;
	class AudioDevice;

	/**
	 *
	 */
	class CallListener: public Listener {
	
		public:


	
		public:
			
		
			/**
			 * @brief Callback for being notified of received DTMFs. 
			 *
			 * @param dtmf The ascii code of the dtmf 
			 */
			LINPHONECXX_PUBLIC virtual void onDtmfReceived(const std::shared_ptr<linphone::Call> & call, int dtmf) {};
			
			/**
			 * @brief GoClear ACK sent callback. 
			 *
			 * @param call the LinphoneCall on which the GoClear ACK was sent.   
			 */
			LINPHONECXX_PUBLIC virtual void onGoclearAckSent(const std::shared_ptr<linphone::Call> & call) {};
			
			/**
			 * @brief Call encryption changed callback. 
			 *
			 * @param authenticationToken An authentication_token, currently set for ZRTP kind
			 * of encryption only.   
			 */
			LINPHONECXX_PUBLIC virtual void onEncryptionChanged(const std::shared_ptr<linphone::Call> & call, bool on, const std::string & authenticationToken) {};
			
			/**
			 * @brief Call send master key changed callback. 
			 *
			 * @param call LinphoneCall object whose encryption is changed.   
			 */
			LINPHONECXX_PUBLIC virtual void onSendMasterKeyChanged(const std::shared_ptr<linphone::Call> & call, const std::string & sendMasterKey) {};
			
			/**
			 * @brief Call receive master key changed callback. 
			 *
			 * @param call LinphoneCall object whose encryption is changed.   
			 */
			LINPHONECXX_PUBLIC virtual void onReceiveMasterKeyChanged(const std::shared_ptr<linphone::Call> & call, const std::string & receiveMasterKey) {};
			
			/**
			 * @brief Callback for receiving info messages. 
			 *
			 * @param message LinphoneInfoMessage object.   
			 */
			LINPHONECXX_PUBLIC virtual void onInfoMessageReceived(const std::shared_ptr<linphone::Call> & call, const std::shared_ptr<const linphone::InfoMessage> & message) {};
			
			/**
			 * @brief Call state notification callback. 
			 *
			 * @param message An informational message about the state.   
			 */
			LINPHONECXX_PUBLIC virtual void onStateChanged(const std::shared_ptr<linphone::Call> & call, linphone::Call::State state, const std::string & message) {};
			
			/**
			 * @brief Callback for receiving quality statistics for calls. 
			 *
			 * @param stats LinphoneCallStats object   
			 */
			LINPHONECXX_PUBLIC virtual void onStatsUpdated(const std::shared_ptr<linphone::Call> & call, const std::shared_ptr<const linphone::CallStats> & stats) {};
			
			/**
			 * @brief Callback for notifying progresses of transfers. 
			 *
			 * @param state The LinphoneCallState of the call to transfer target at the far
			 * end. 
			 */
			LINPHONECXX_PUBLIC virtual void onTransferStateChanged(const std::shared_ptr<linphone::Call> & call, linphone::Call::State state) {};
			
			/**
			 * @brief Callback for notifying the processing SIP ACK messages. 
			 *
			 * @param isReceived if true this ACK is an incoming one, otherwise it is an ACK
			 * about to be sent. 
			 */
			LINPHONECXX_PUBLIC virtual void onAckProcessing(const std::shared_ptr<linphone::Call> & call, const std::shared_ptr<linphone::Headers> & ack, bool isReceived) {};
			
			/**
			 * @brief Callback for notifying a received TMMBR. 
			 *
			 * @param tmmbr the value of the received TMMBR 
			 */
			LINPHONECXX_PUBLIC virtual void onTmmbrReceived(const std::shared_ptr<linphone::Call> & call, int streamIndex, int tmmbr) {};
			
			/**
			 * @brief Callback for notifying a snapshot taken. 
			 *
			 * @param filePath the name of the saved file   
			 */
			LINPHONECXX_PUBLIC virtual void onSnapshotTaken(const std::shared_ptr<linphone::Call> & call, const std::string & filePath) {};
			
			/**
			 * @brief Callback to notify a next video frame has been decoded. 
			 *
			 * @param call LinphoneCall for which the next video frame has been decoded   
			 */
			LINPHONECXX_PUBLIC virtual void onNextVideoFrameDecoded(const std::shared_ptr<linphone::Call> & call) {};
			
			/**
			 * @brief Callback to notify that the camera is not working and has been changed
			 * to "No Webcam". 
			 *
			 * A camera is detected as mis-functionning as soon as it outputs no frames at all
			 * during a period of 5 seconds. This check is only performed on desktop
			 * platforms, in the purpose of notifying camera failures, for example if when a
			 * usb cable gets disconnected.
			 * @param cameraName the name of the non-working camera   
			 */
			LINPHONECXX_PUBLIC virtual void onCameraNotWorking(const std::shared_ptr<linphone::Call> & call, const std::string & cameraName) {};
			
			/**
			 * @brief Callback to notify that there are errors from the video rendering. 
			 *
			 * The error code depends of the implementation.
			 * @param errorCode error code from render. It depends of the renderer. 
			 */
			LINPHONECXX_PUBLIC virtual void onVideoDisplayErrorOccurred(const std::shared_ptr<linphone::Call> & call, int errorCode) {};
			
			/**
			 * @brief Callback to notify that the audio device has been changed. 
			 *
			 * @param audioDevice the new audio device used for this call   
			 */
			LINPHONECXX_PUBLIC virtual void onAudioDeviceChanged(const std::shared_ptr<linphone::Call> & call, const std::shared_ptr<linphone::AudioDevice> & audioDevice) {};
			
			/**
			 * @brief Callback to notify that the call is being recorded by the remote. 
			 *
			 * @param recording true if the call is being recorded by the remote, false
			 * otherwise 
			 */
			LINPHONECXX_PUBLIC virtual void onRemoteRecording(const std::shared_ptr<linphone::Call> & call, bool recording) {};
			
			
	};

};

#endif // _LINPHONE_CALL_LISTENER_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
