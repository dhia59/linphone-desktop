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

#ifndef _LINPHONE_PROXY_CONFIG_HH
#define _LINPHONE_PROXY_CONFIG_HH

#include <cstdint>
#include <string>
#include <list>
#include "enums.hh"
#include "object.hh"




struct _LinphoneProxyConfig;


namespace linphone {

	class Address;
	class Core;
	class ProxyConfig;
	class ErrorInfo;
	class NatPolicy;
	class PushNotificationConfig;
	class AuthInfo;

	/**
	 * @brief Represents an account configuration to be used by @ref Core. 
	 *
	 * In addition to the @ref AuthInfo that stores the credentials, you need to
	 * configure a @ref ProxyConfig as well to be able to connect to a proxy server.
	 * A minimal proxy config consists of an identity address
	 * (sip:username@domain.tld) and the proxy server address, @see setServerAddr().
	 * If any, it will be stored inside the default configuration file, so it will
	 * survive the destruction of the @ref Core and be available at the next start.
	 * The account set with Core::setDefaultProxyConfig() will be used as default for
	 * outgoing calls & chat messages unless specified otherwise.
	 * @deprecated 06/04/2020 Use @ref Account object instead 
	 */
	class ProxyConfig: public Object {
	
		public:

			LINPHONECXX_PUBLIC ProxyConfig(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneProxyConfig *cPtr() {return (_LinphoneProxyConfig *)mPrivPtr;}

	
		public:
			
		
			/**
			 * @brief Indicates whether AVPF/SAVPF is being used for calls using this proxy
			 * config. 
			 *
			 * @return True if AVPF/SAVPF is enabled, false otherwise. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool avpfEnabled();
			
			/**
			 * @brief Get enablement status of RTCP feedback (also known as AVPF profile). 
			 *
			 * @return the enablement mode, which can be @ref AVPFMode::Default (use
			 * LinphoneCore's mode), @ref AVPFMode::Enabled (avpf is enabled), or @ref
			 * AVPFMode::Disabled (disabled). 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::AVPFMode getAvpfMode() const;
			
			/**
			 * @brief Enable the use of RTCP feedback (also known as AVPF profile). 
			 *
			 * @param mode the enablement mode, which can be @ref AVPFMode::Default (use
			 * LinphoneCore's mode), @ref AVPFMode::Enabled (avpf is enabled), or @ref
			 * AVPFMode::Disabled (disabled). 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setAvpfMode(linphone::AVPFMode mode);
			
			/**
			 * @brief Get the interval between regular RTCP reports when using AVPF/SAVPF. 
			 *
			 * @return The interval in seconds. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED uint8_t getAvpfRrInterval() const;
			
			/**
			 * @brief Set the interval between regular RTCP reports when using AVPF/SAVPF. 
			 *
			 * @param interval The interval in seconds (between 0 and 5 seconds). 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setAvpfRrInterval(uint8_t interval);
			
			/**
			 * @brief Get the conference factory uri. 
			 *
			 * @return The uri of the conference factory.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string getConferenceFactoryUri() const;
			
			/**
			 * @brief Set the conference factory uri. 
			 *
			 * @param uri The uri of the conference factory.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setConferenceFactoryUri(const std::string & uri);
			
			/**
			 * @brief Return the contact address of the proxy config. 
			 *
			 * @return a @ref Address correspong to the contact address of the proxy config.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::shared_ptr<const linphone::Address> getContact() const;
			
			/**
			 * @brief Returns the contact parameters. 
			 *
			 * @return previously set contact parameters.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string getContactParameters() const;
			
			/**
			 * @brief Set optional contact parameters that will be added to the contact
			 * information sent in the registration. 
			 *
			 * @param contactParams a string contaning the additional parameters in text form,
			 * like "myparam=something;myparam2=something_else"  
			 * The main use case for this function is provide the proxy additional information
			 * regarding the user agent, like for example unique identifier or apple push id.
			 * As an example, the contact address in the SIP register sent will look like
			 * <sip:joe@15.128.128.93:50421>;apple-push-id=43143-DFE23F-2323-FA2232.
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setContactParameters(const std::string & contactParams);
			
			/**
			 * @brief Returns the contact URI parameters. 
			 *
			 * @return previously set contact URI parameters.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string getContactUriParameters() const;
			
			/**
			 * @brief Set optional contact parameters that will be added to the contact
			 * information sent in the registration, inside the URI. 
			 *
			 * @param contactUriParams a string containing the additional parameters in text
			 * form, like "myparam=something;myparam2=something_else"  
			 * The main use case for this function is provide the proxy additional information
			 * regarding the user agent, like for example unique identifier or apple push id.
			 * As an example, the contact address in the SIP register sent will look like
			 * <sip:joe@15.128.128.93:50421;apple-push-id=43143-DFE23F-2323-FA2232>.
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setContactUriParameters(const std::string & contactUriParams);
			
			/**
			 * @brief Get the @ref Core object to which is associated the @ref ProxyConfig. 
			 *
			 * @return The @ref Core object to which is associated the @ref ProxyConfig.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::shared_ptr<linphone::Core> getCore() const;
			
			/**
			 * @brief Get the dependency of a @ref ProxyConfig. 
			 *
			 * @return The proxy config this one is dependent upon, or nullptr if not marked
			 * dependent.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::shared_ptr<linphone::ProxyConfig> getDependency();
			
			/**
			 * @brief Mark this proxy configuration as being dependent on the given one. 
			 *
			 * The dependency must refer to a proxy config previously added to the core and
			 * which idkey property is defined.
			 * @see setIdkey()
			 * The proxy configuration marked as dependent will wait for successful
			 * registration on its dependency before triggering its own.
			 * Once registered, both proxy configurations will share the same contact address
			 * (the 'dependency' one).
			 * This mecanism must be enabled before the proxy configuration is added to the
			 * core
			 * @param dependsOn The @ref ProxyConfig this one shall be depend on.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setDependency(const std::shared_ptr<linphone::ProxyConfig> & dependsOn);
			
			/**
			 * @brief Returns whether or not the + should be replaced by 00. 
			 *
			 * @return whether liblinphone should replace "+" by "00" in dialed numbers
			 * (passed to Core::invite()). 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool getDialEscapePlus() const;
			
			/**
			 * @brief Sets whether liblinphone should replace "+" by international calling
			 * prefix in dialed numbers (passed to Core::invite() ). 
			 *
			 * @param enable true to replace + by the international prefix, false otherwise. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setDialEscapePlus(bool enable);
			
			/**
			 * @brief Gets the prefix set for this proxy config. 
			 *
			 * @return dialing prefix.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string getDialPrefix() const;
			
			/**
			 * @brief Sets a dialing prefix to be automatically prepended when inviting a
			 * number with Core::invite(); This dialing prefix shall usually be the country
			 * code of the country where the user is living, without "+". 
			 *
			 * @param prefix the prefix to set (withouth the +)   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setDialPrefix(const std::string & prefix);
			
			/**
			 * @brief Get the domain name of the given proxy config. 
			 *
			 * @return The domain name of the proxy config.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string getDomain() const;
			
			/**
			 * @brief Get the reason why registration failed when the proxy config state is
			 * LinphoneRegistrationFailed. 
			 *
			 * @return The @ref Reason why registration failed for this proxy config. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Reason getError() const;
			
			/**
			 * @brief Get detailed information why registration failed when the proxy config
			 * state is LinphoneRegistrationFailed. 
			 *
			 * @return The @ref ErrorInfo explaining why registration failed for this proxy
			 * config.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::shared_ptr<const linphone::ErrorInfo> getErrorInfo() const;
			
			/**
			 * @brief Gets the proxy config expires. 
			 *
			 * @return the duration of registration. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED int getExpires() const;
			
			/**
			 * @brief Sets the registration expiration time in seconds. 
			 *
			 * @param expires the expiration time to set 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setExpires(int expires);
			
			/**
			 * @brief Gets the identity addres of the proxy config. 
			 *
			 * @return the SIP identity that belongs to this proxy configuration.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::shared_ptr<const linphone::Address> getIdentityAddress() const;
			
			/**
			 * @brief Sets the user identity as a SIP address. 
			 *
			 * This identity is normally formed with display name, username and domain, such
			 * as: Alice <sip:alice@example.net> The REGISTER messages will have from and to
			 * set to this identity. 
			 * @param identity the @ref Address of the identity to set   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status setIdentityAddress(const std::shared_ptr<const linphone::Address> & identity);
			
			/**
			 * @brief Get the idkey property of a @ref ProxyConfig. 
			 *
			 * @return The idkey string, or nullptr.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string getIdkey();
			
			/**
			 * @brief Set the idkey property on the given proxy configuration. 
			 *
			 * This property can the be referenced by another proxy config 'depends_on' to
			 * create a dependency relation between them. @see
			 * linphone_proxy_config_set_depends_on()
			 * @param idkey The idkey string to associate to the given @ref ProxyConfig.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setIdkey(const std::string & idkey);
			
			/**
			 * @brief Indicates whether to add to the contact parameters the push notification
			 * information. 
			 *
			 * For IOS, it indicates to VOIP push notification. 
			 * @return true if push notification informations should be added, false
			 * otherwise. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool isPushNotificationAllowed() const;
			
			/**
			 * @brief Gets whether push notifications are available or not (Android & iOS
			 * only). 
			 *
			 * @return true if push notifications are available, false otherwise 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool isPushNotificationAvailable() const;
			
			/**
			 * @brief Indicates whether to add to the contact parameters the remote push
			 * notification information (IOS only). 
			 *
			 * Default value is false. 
			 * @return true if remote push notification informations should be added, false
			 * otherwise. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool isRemotePushNotificationAllowed() const;
			
			/**
			 * @brief Get The policy that is used to pass through NATs/firewalls when using
			 * this proxy config. 
			 *
			 * If it is set to nullptr, the default NAT policy from the core will be used
			 * instead. 
			 * @return @ref NatPolicy object in use.   
			 * @see Core::getNatPolicy() 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::shared_ptr<linphone::NatPolicy> getNatPolicy() const;
			
			/**
			 * @brief Set the policy to use to pass through NATs/firewalls when using this
			 * proxy config. 
			 *
			 * If it is set to nullptr, the default NAT policy from the core will be used
			 * instead. 
			 * @param policy @ref NatPolicy object.   
			 * @see Core::setNatPolicy() 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setNatPolicy(const std::shared_ptr<linphone::NatPolicy> & policy);
			
			/**
			 * @brief Get default privacy policy for all calls routed through this proxy. 
			 *
			 * @return Privacy mode as LinphonePrivacyMask 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED unsigned int getPrivacy() const;
			
			/**
			 * @brief Set default privacy policy for all calls routed through this proxy. 
			 *
			 * @param privacy @ref Privacy to configure privacy 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setPrivacy(unsigned int privacy);
			
			/**
			 * @brief Gets if the PUBLISH is enabled. 
			 *
			 * @return true if PUBLISH request is enabled for this proxy. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool publishEnabled() const;
			
			/**
			 * @brief Indicates either or not, PUBLISH must be issued for this @ref
			 * ProxyConfig. 
			 *
			 * In case this @ref ProxyConfig has been added to @ref Core, follows the edit()
			 * rule. 
			 * @param enable if true, publish will be engaged 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void enablePublish(bool enable);
			
			/**
			 * @brief get the publish expiration time in second. 
			 *
			 * Default value is the registration expiration value. 
			 * @return expires in second 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED int getPublishExpires() const;
			
			/**
			 * @brief Set the publish expiration time in second. 
			 *
			 * @param expires in second 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setPublishExpires(int expires);
			
			/**
			 * @brief Indicates whether to add to the contact parameters the push notification
			 * information. 
			 *
			 * For IOS, it indicates to VOIP push notification. 
			 * @param allow true to allow push notification information, false otherwise. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setPushNotificationAllowed(bool allow);
			
			/**
			 * @brief Retrieves the push notification configuration. 
			 *
			 * @return The @ref PushNotificationConfig.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::shared_ptr<linphone::PushNotificationConfig> getPushNotificationConfig() const;
			
			/**
			 * @brief Sets the push notification configuration. 
			 *
			 * @param pushCfg @ref PushNotificationConfig to set.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setPushNotificationConfig(const std::shared_ptr<linphone::PushNotificationConfig> & pushCfg);
			
			/**
			 * @brief Get the route of the collector end-point when using quality reporting. 
			 *
			 * This SIP address should be used on server-side to process packets directly
			 * before discarding packets. Collector address should be a non existing account
			 * and will not receive any messages. If nullptr, reports will be send to the
			 * proxy domain. 
			 * @return The SIP address of the collector end-point.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string getQualityReportingCollector() const;
			
			/**
			 * @brief Set the route of the collector end-point when using quality reporting. 
			 *
			 * This SIP address should be used on server-side to process packets directly
			 * before discarding packets. Collector address should be a non existing account
			 * and will not receive any messages. If nullptr, reports will be send to the
			 * proxy domain. 
			 * @param collector route of the collector end-point, if nullptr PUBLISH will be
			 * sent to the proxy domain.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setQualityReportingCollector(const std::string & collector);
			
			/**
			 * @brief Indicates whether quality statistics during call should be stored and
			 * sent to a collector according to RFC 6035. 
			 *
			 * @return True if quality repotring is enabled, false otherwise. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool qualityReportingEnabled();
			
			/**
			 * @brief Indicates whether quality statistics during call should be stored and
			 * sent to a collector according to RFC 6035. 
			 *
			 * @param enable True to store quality statistics and send them to the collector,
			 * false to disable it. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void enableQualityReporting(bool enable);
			
			/**
			 * @brief Get the interval between interval reports when using quality reporting. 
			 *
			 * @return The interval in seconds, 0 means interval reports are disabled. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED int getQualityReportingInterval();
			
			/**
			 * @brief Set the interval between 2 interval reports sending when using quality
			 * reporting. 
			 *
			 * If call exceed interval size, an interval report will be sent to the collector.
			 * On call termination, a session report will be sent for the remaining period.
			 * Value must be 0 (disabled) or positive. 
			 * @param interval The interval in seconds, 0 means interval reports are disabled. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setQualityReportingInterval(int interval);
			
			/**
			 * @brief Get the realm of the given proxy config. 
			 *
			 * @return The realm of the proxy config.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string getRealm() const;
			
			/**
			 * @brief Set the realm of the given proxy config. 
			 *
			 * @param realm New realm value.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setRealm(const std::string & realm);
			
			/**
			 * @brief Get the persistent reference key associated to the proxy config. 
			 *
			 * The reference key can be for example an id to an external database. It is
			 * stored in the config file, thus can survive to process exits/restarts.
			 * @return The reference key string that has been associated to the proxy config,
			 * or nullptr if none has been associated.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string getRefKey() const;
			
			/**
			 * @brief Associate a persistent reference key to the proxy config. 
			 *
			 * The reference key can be for example an id to an external database. It is
			 * stored in the config file, thus can survive to process exits/restarts.
			 * @param refkey The reference key string to associate to the proxy config.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setRefKey(const std::string & refkey);
			
			/**
			 * @brief Returns whether the proxy config is enabled or not. 
			 *
			 * @return true if registration to the proxy is enabled. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED bool registerEnabled() const;
			
			/**
			 * @brief Indicates either or not, REGISTRATION must be issued for this @ref
			 * ProxyConfig. 
			 *
			 * In case this @ref ProxyConfig has been added to @ref Core, follows the edit()
			 * rule. 
			 * @param enable if true, registration will be engaged 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void enableRegister(bool enable);
			
			/**
			 * @brief Indicates whether to add to the contact parameters the remote push
			 * notification information (IOS only). 
			 *
			 * @param allow true to allow remote push notification information, false
			 * otherwise. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setRemotePushNotificationAllowed(bool allow);
			
			/**
			 * @brief Sets a SIP route. 
			 *
			 * When a route is set, all outgoing calls will go to the route's destination if
			 * this proxy is the default one (see Core::setDefaultProxyConfig() ). 
			 * @param route the SIP route to set   
			 * @return -1 if route is invalid, 0 otherwise. 
			 * @deprecated 08/07/2020 use setRoutes() instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status setRoute(const std::string & route);
			
			/**
			 * @brief Gets the list of the routes set for this proxy config. 
			 *
			 * @return The list of routes as string.    
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::list<std::string> getRoutes() const;
			
			/**
			 * @brief Sets a list of SIP route. 
			 *
			 * When a route is set, all outgoing calls will go to the route's destination if
			 * this proxy is the default one (see Core::setDefaultProxyConfig() ). 
			 * @param routes A  of routes   
			 * @return -1 if routes are invalid, 0 otherwise. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status setRoutes(const std::list<std::string> & routes);
			
			/**
			 * @brief Gets the proxy config proxy address. 
			 *
			 * @return the proxy's SIP address.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string getServerAddr() const;
			
			/**
			 * @brief Sets the proxy address. 
			 *
			 * Examples of valid sip proxy address are:
			 * @param serverAddress the proxy address to set.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status setServerAddr(const std::string & serverAddress);
			
			/**
			 * @brief Get the registration state of the given proxy config. 
			 *
			 * @return The @ref RegistrationState of the proxy config. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::RegistrationState getState() const;
			
			/**
			 * @brief Get the transport from either service route, route or addr. 
			 *
			 * @return The transport as a string (I.E udp, tcp, tls, dtls)   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string getTransport() const;
			
			/**
			 * @brief Return the unread chat message count for a given proxy config. 
			 *
			 * @return The unread chat message count. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED int getUnreadChatMessageCount() const;
			
			/**
			 * @brief Commits modification made to the proxy configuration. 
			 *
			 * @return 0 if successful, -1 otherwise 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status done();
			
			/**
			 * @brief Starts editing a proxy configuration. 
			 *
			 * Because proxy configuration must be consistent, applications MUST call edit()
			 * before doing any attempts to modify proxy configuration (such as identity,
			 * proxy address and so on). Once the modifications are done, then the application
			 * must call done() to commit the changes. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void edit();
			
			/**
			 * @brief Find authentication info matching proxy config, if any, similarly to
			 * linphone_core_find_auth_info. 
			 *
			 * @return a @ref AuthInfo matching proxy config criteria if possible, nullptr if
			 * nothing can be found.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::shared_ptr<const linphone::AuthInfo> findAuthInfo() const;
			
			/**
			 * @brief Obtain the value of a header sent by the server in last answer to
			 * REGISTER. 
			 *
			 * @param headerName the header name for which to fetch corresponding value   
			 * @return the value of the queried header.   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string getCustomHeader(const std::string & headerName);
			
			/**
			 * @brief Normalize a human readable phone number into a basic string. 
			 *
			 * 888-444-222 becomes 888444222 or +33888444222 depending on the @ref ProxyConfig
			 * object. This function will always generate a normalized username if input is a
			 * phone number. 
			 * @param username the string to parse   
			 * @return nullptr if input is an invalid phone number, normalized phone number
			 * from username input otherwise.     
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::string normalizePhoneNumber(const std::string & username);
			
			/**
			 * @brief Normalize a human readable sip uri into a fully qualified
			 * LinphoneAddress. 
			 *
			 * A sip address should look like DisplayName <sip:username@domain:port> .
			 * Basically this function performs the following tasks
			 * The result is a syntactically correct SIP address. 
			 * @param username the string to parse   
			 * @return nullptr if invalid input, normalized sip address otherwise.     
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED std::shared_ptr<linphone::Address> normalizeSipUri(const std::string & username);
			
			/**
			 * @brief Prevent a proxy config from refreshing its registration. 
			 *
			 * This is useful to let registrations to expire naturally (or) when the
			 * application wants to keep control on when refreshes are sent. However,
			 * linphone_core_set_network_reachable(lc,true) will always request the proxy
			 * configs to refresh their registrations. The refreshing operations can be
			 * resumed with refreshRegister(). 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void pauseRegister();
			
			/**
			 * @brief Refresh a proxy registration. 
			 *
			 * This is useful if for example you resuming from suspend, thus IP address may
			 * have changed. 
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void refreshRegister();
			
			/**
			 * @brief Set the value of a custom header sent to the server in REGISTERs
			 * request. 
			 *
			 * @param headerValue the header's value   
			 * @deprecated 06/04/2020 Use @ref Account object instead 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setCustomHeader(const std::string & headerName, const std::string & headerValue);
			
			
	};

};

#endif // _LINPHONE_PROXY_CONFIG_HH

#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif // _MSC_VER
