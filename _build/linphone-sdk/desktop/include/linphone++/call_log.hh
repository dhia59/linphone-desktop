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

#ifndef _LINPHONE_CALL_LOG_HH
#define _LINPHONE_CALL_LOG_HH

#include <string>
#include "call.hh"
#include "object.hh"




struct _LinphoneCallLog;


namespace linphone {

	class ConferenceInfo;
	class ErrorInfo;
	class Address;

	/**
	 * @brief Object used to keep track of all calls initiated, received or missed. 
	 *
	 * It contains the call ID, date & time at which the call took place and it's
	 * duration (0 if it wasn't answered). You can also know if video was enabled or
	 * not or if it was a conference, as well as it's average quality.
	 * If needed, you can also create a fake @ref CallLog using Core::createCallLog(),
	 * otherwise use Core::getCallLogs() or even Call::getCallLog() to get the log of
	 * an ongoing call. 
	 */
	class CallLog: public Object {
	
		public:

			LINPHONECXX_PUBLIC CallLog(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneCallLog *cPtr() {return (_LinphoneCallLog *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Get the call ID used by the call. 
			 *
			 * @return The call ID used by the call as a string.   
			 */
			LINPHONECXX_PUBLIC std::string getCallId() const;
			
			/**
			 * @brief Retrieves the conference info associated to this call log in DB. 
			 *
			 * @return The @ref ConferenceInfo associated.   
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<linphone::ConferenceInfo> getConferenceInfo();
			
			/**
			 * @brief Get the direction of the call. 
			 *
			 * @return The @ref Call::Dir of the call. 
			 */
			LINPHONECXX_PUBLIC linphone::Call::Dir getDir() const;
			
			/**
			 * @brief Get the duration of the call since connected. 
			 *
			 * @return The duration of the call in seconds. 
			 */
			LINPHONECXX_PUBLIC int getDuration() const;
			
			/**
			 * @brief When the call was failed, return an object describing the failure. 
			 *
			 * @return @ref ErrorInfo about the error encountered by the call associated with
			 * this call log or nullptr.   
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::ErrorInfo> getErrorInfo() const;
			
			/**
			 * @brief Get the origin address (ie from) of the call. 
			 *
			 * @return The origin @ref Address (ie from) of the call.   
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getFromAddress() const;
			
			/**
			 * @brief Get the local address (that is from or to depending on call direction) 
			 *
			 * @return The local @ref Address of the call   
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getLocalAddress() const;
			
			/**
			 * @brief Get the overall quality indication of the call. 
			 *
			 * @return The overall quality indication of the call. 
			 */
			LINPHONECXX_PUBLIC float getQuality() const;
			
			/**
			 * @brief Get the persistent reference key associated to the call log. 
			 *
			 * The reference key can be for example an id to an external database. It is
			 * stored in the config file, thus can survive to process exits/restarts.
			 * @return The reference key string that has been associated to the call log, or
			 * nullptr if none has been associated.   
			 */
			LINPHONECXX_PUBLIC std::string getRefKey() const;
			
			/**
			 * @brief Associate a persistent reference key to the call log. 
			 *
			 * The reference key can be for example an id to an external database. It is
			 * stored in the config file, thus can survive to process exits/restarts.
			 * @param refkey The reference key string to associate to the call log.   
			 */
			LINPHONECXX_PUBLIC void setRefKey(const std::string & refkey);
			
			/**
			 * @brief Get the remote address (that is from or to depending on call direction). 
			 *
			 * @return The remote @ref Address of the call.   
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getRemoteAddress() const;
			
			/**
			 * @brief Set the remote address (that is 'from' or 'to' depending on call
			 * direction). 
			 *
			 * It allows to fill more information that the SDK doesn't have. A use case can be
			 * to fill the display name (coming from an external address book) into a call log
			 * on incoming call. When the call end, the database will take account of the new
			 * information and can be used later 
			 * @param address @ref Address object   
			 */
			LINPHONECXX_PUBLIC void setRemoteAddress(const std::shared_ptr<linphone::Address> & address);
			
			/**
			 * @brief Get the start date of the call. 
			 *
			 * @return The date of the beginning of the call. 
			 */
			LINPHONECXX_PUBLIC time_t getStartDate() const;
			
			/**
			 * @brief Get the status of the call. 
			 *
			 * @return The @ref Call::Status of the call. 
			 */
			LINPHONECXX_PUBLIC linphone::Call::Status getStatus() const;
			
			/**
			 * @brief Get the destination address (ie to) of the call. 
			 *
			 * @return The destination @ref Address (ie to) of the call.   
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const linphone::Address> getToAddress() const;
			
			/**
			 * @brief Tell whether video was enabled at the end of the call or not. 
			 *
			 * @return A boolean value telling whether video was enabled at the end of the
			 * call. 
			 */
			LINPHONECXX_PUBLIC bool videoEnabled() const;
			
			/**
			 * @brief Get a human readable string describing the call. 
			 *
			 * @note : the returned string must be freed by the application (use ms_free()). 
			 * @return A human readable string describing the call.     
			 */
			LINPHONECXX_PUBLIC std::string toStr() const;
			
			/**
			 * @brief Tells whether that call was part of a conference. 
			 *
			 * @return true if the call was part of a conference, false otherwise. 
			 */
			LINPHONECXX_PUBLIC bool wasConference();
			
			
	};

};

#endif // _LINPHONE_CALL_LOG_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
