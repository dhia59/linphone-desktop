/****************************************************************************
** Meta object code from reading C++ file 'SettingsModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/settings/SettingsModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsModel_t {
    QByteArrayData data[312];
    char stringdata0[6041];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsModel_t qt_meta_stringdata_SettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SettingsModel"
QT_MOC_LITERAL(1, 14, 33), // "createAppSipAccountEnabledCha..."
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 6), // "status"
QT_MOC_LITERAL(4, 56, 38), // "fetchRemoteConfigurationEnabl..."
QT_MOC_LITERAL(5, 95, 30), // "useAppSipAccountEnabledChanged"
QT_MOC_LITERAL(6, 126, 32), // "useOtherSipAccountEnabledChanged"
QT_MOC_LITERAL(7, 159, 51), // "autoApplyProvisioningConfigUr..."
QT_MOC_LITERAL(8, 211, 36), // "assistantSupportsPhoneNumbers..."
QT_MOC_LITERAL(9, 248, 31), // "assistantRegistrationUrlChanged"
QT_MOC_LITERAL(10, 280, 3), // "url"
QT_MOC_LITERAL(11, 284, 24), // "assistantLoginUrlChanged"
QT_MOC_LITERAL(12, 309, 25), // "assistantLogoutUrlChanged"
QT_MOC_LITERAL(13, 335, 18), // "cguAcceptedChanged"
QT_MOC_LITERAL(14, 354, 8), // "accepted"
QT_MOC_LITERAL(15, 363, 17), // "deviceNameChanged"
QT_MOC_LITERAL(16, 381, 26), // "captureGraphRunningChanged"
QT_MOC_LITERAL(17, 408, 7), // "running"
QT_MOC_LITERAL(18, 416, 19), // "playbackGainChanged"
QT_MOC_LITERAL(19, 436, 4), // "gain"
QT_MOC_LITERAL(20, 441, 18), // "captureGainChanged"
QT_MOC_LITERAL(21, 460, 21), // "captureDevicesChanged"
QT_MOC_LITERAL(22, 482, 7), // "devices"
QT_MOC_LITERAL(23, 490, 22), // "playbackDevicesChanged"
QT_MOC_LITERAL(24, 513, 20), // "captureDeviceChanged"
QT_MOC_LITERAL(25, 534, 6), // "device"
QT_MOC_LITERAL(26, 541, 21), // "playbackDeviceChanged"
QT_MOC_LITERAL(27, 563, 19), // "ringerDeviceChanged"
QT_MOC_LITERAL(28, 583, 15), // "ringPathChanged"
QT_MOC_LITERAL(29, 599, 4), // "path"
QT_MOC_LITERAL(30, 604, 30), // "echoCancellationEnabledChanged"
QT_MOC_LITERAL(31, 635, 22), // "echoCancellationStatus"
QT_MOC_LITERAL(32, 658, 7), // "msDelay"
QT_MOC_LITERAL(33, 666, 22), // "showAudioCodecsChanged"
QT_MOC_LITERAL(34, 689, 19), // "videoEnabledChanged"
QT_MOC_LITERAL(35, 709, 21), // "videoAvailableChanged"
QT_MOC_LITERAL(36, 731, 19), // "videoDevicesChanged"
QT_MOC_LITERAL(37, 751, 18), // "videoDeviceChanged"
QT_MOC_LITERAL(38, 770, 18), // "videoPresetChanged"
QT_MOC_LITERAL(39, 789, 6), // "preset"
QT_MOC_LITERAL(40, 796, 21), // "videoFramerateChanged"
QT_MOC_LITERAL(41, 818, 9), // "framerate"
QT_MOC_LITERAL(42, 828, 22), // "videoDefinitionChanged"
QT_MOC_LITERAL(43, 851, 10), // "definition"
QT_MOC_LITERAL(44, 862, 22), // "showVideoCodecsChanged"
QT_MOC_LITERAL(45, 885, 17), // "cameraModeChanged"
QT_MOC_LITERAL(46, 903, 21), // "gridCameraModeChanged"
QT_MOC_LITERAL(47, 925, 30), // "activeSpeakerCameraModeChanged"
QT_MOC_LITERAL(48, 956, 21), // "callCameraModeChanged"
QT_MOC_LITERAL(49, 978, 28), // "videoConferenceLayoutChanged"
QT_MOC_LITERAL(50, 1007, 31), // "haveAtLeastOneVideoCodecChanged"
QT_MOC_LITERAL(51, 1039, 23), // "autoAnswerStatusChanged"
QT_MOC_LITERAL(52, 1063, 28), // "autoAnswerVideoStatusChanged"
QT_MOC_LITERAL(53, 1092, 22), // "autoAnswerDelayChanged"
QT_MOC_LITERAL(54, 1115, 5), // "delay"
QT_MOC_LITERAL(55, 1121, 33), // "showTelKeypadAutomaticallyCha..."
QT_MOC_LITERAL(56, 1155, 34), // "keepCallsWindowInBackgroundCh..."
QT_MOC_LITERAL(57, 1190, 27), // "outgoingCallsEnabledChanged"
QT_MOC_LITERAL(58, 1218, 26), // "callRecorderEnabledChanged"
QT_MOC_LITERAL(59, 1245, 31), // "automaticallyRecordCallsChanged"
QT_MOC_LITERAL(60, 1277, 26), // "autoDownloadMaxSizeChanged"
QT_MOC_LITERAL(61, 1304, 7), // "maxSize"
QT_MOC_LITERAL(62, 1312, 23), // "callPauseEnabledChanged"
QT_MOC_LITERAL(63, 1336, 28), // "muteMicrophoneEnabledChanged"
QT_MOC_LITERAL(64, 1365, 26), // "standardChatEnabledChanged"
QT_MOC_LITERAL(65, 1392, 24), // "secureChatEnabledChanged"
QT_MOC_LITERAL(66, 1417, 23), // "groupChatEnabledChanged"
QT_MOC_LITERAL(67, 1441, 25), // "hideEmptyChatRoomsChanged"
QT_MOC_LITERAL(68, 1467, 30), // "waitRegistrationForCallChanged"
QT_MOC_LITERAL(69, 1498, 30), // "incallScreenshotEnabledChanged"
QT_MOC_LITERAL(70, 1529, 24), // "conferenceEnabledChanged"
QT_MOC_LITERAL(71, 1554, 29), // "videoConferenceEnabledChanged"
QT_MOC_LITERAL(72, 1584, 31), // "chatNotificationsEnabledChanged"
QT_MOC_LITERAL(73, 1616, 35), // "chatNotificationSoundEnabledC..."
QT_MOC_LITERAL(74, 1652, 32), // "chatNotificationSoundPathChanged"
QT_MOC_LITERAL(75, 1685, 22), // "fileTransferUrlChanged"
QT_MOC_LITERAL(76, 1708, 22), // "mediaEncryptionChanged"
QT_MOC_LITERAL(77, 1731, 15), // "MediaEncryption"
QT_MOC_LITERAL(78, 1747, 10), // "encryption"
QT_MOC_LITERAL(79, 1758, 16), // "limeStateChanged"
QT_MOC_LITERAL(80, 1775, 5), // "state"
QT_MOC_LITERAL(81, 1781, 22), // "contactsEnabledChanged"
QT_MOC_LITERAL(82, 1804, 32), // "createEphemeralsChatRoomsChanged"
QT_MOC_LITERAL(83, 1837, 26), // "showNetworkSettingsChanged"
QT_MOC_LITERAL(84, 1864, 20), // "dtmfsProtocolChanged"
QT_MOC_LITERAL(85, 1885, 18), // "ipv6EnabledChanged"
QT_MOC_LITERAL(86, 1904, 24), // "downloadBandWidthChanged"
QT_MOC_LITERAL(87, 1929, 9), // "bandwidth"
QT_MOC_LITERAL(88, 1939, 22), // "uploadBandWidthChanged"
QT_MOC_LITERAL(89, 1962, 33), // "adaptiveRateControlEnabledCha..."
QT_MOC_LITERAL(90, 1996, 14), // "tcpPortChanged"
QT_MOC_LITERAL(91, 2011, 4), // "port"
QT_MOC_LITERAL(92, 2016, 14), // "udpPortChanged"
QT_MOC_LITERAL(93, 2031, 21), // "audioPortRangeChanged"
QT_MOC_LITERAL(94, 2053, 1), // "a"
QT_MOC_LITERAL(95, 2055, 1), // "b"
QT_MOC_LITERAL(96, 2057, 21), // "videoPortRangeChanged"
QT_MOC_LITERAL(97, 2079, 17), // "iceEnabledChanged"
QT_MOC_LITERAL(98, 2097, 18), // "turnEnabledChanged"
QT_MOC_LITERAL(99, 2116, 17), // "stunServerChanged"
QT_MOC_LITERAL(100, 2134, 6), // "server"
QT_MOC_LITERAL(101, 2141, 15), // "turnUserChanged"
QT_MOC_LITERAL(102, 2157, 4), // "user"
QT_MOC_LITERAL(103, 2162, 19), // "turnPasswordChanged"
QT_MOC_LITERAL(104, 2182, 8), // "password"
QT_MOC_LITERAL(105, 2191, 14), // "dscpSipChanged"
QT_MOC_LITERAL(106, 2206, 4), // "dscp"
QT_MOC_LITERAL(107, 2211, 16), // "dscpAudioChanged"
QT_MOC_LITERAL(108, 2228, 16), // "dscpVideoChanged"
QT_MOC_LITERAL(109, 2245, 20), // "rlsUriEnabledChanged"
QT_MOC_LITERAL(110, 2266, 13), // "rlsUriChanged"
QT_MOC_LITERAL(111, 2280, 22), // "textMessageFontChanged"
QT_MOC_LITERAL(112, 2303, 4), // "font"
QT_MOC_LITERAL(113, 2308, 26), // "textMessageFontSizeChanged"
QT_MOC_LITERAL(114, 2335, 4), // "size"
QT_MOC_LITERAL(115, 2340, 16), // "emojiFontChanged"
QT_MOC_LITERAL(116, 2357, 20), // "emojiFontSizeChanged"
QT_MOC_LITERAL(117, 2378, 29), // "savedScreenshotsFolderChanged"
QT_MOC_LITERAL(118, 2408, 6), // "folder"
QT_MOC_LITERAL(119, 2415, 23), // "savedCallsFolderChanged"
QT_MOC_LITERAL(120, 2439, 16), // "savedMVVMChanged"
QT_MOC_LITERAL(121, 2456, 21), // "downloadFolderChanged"
QT_MOC_LITERAL(122, 2478, 25), // "remoteProvisioningChanged"
QT_MOC_LITERAL(123, 2504, 18), // "remoteProvisioning"
QT_MOC_LITERAL(124, 2523, 28), // "remoteProvisioningNotChanged"
QT_MOC_LITERAL(125, 2552, 18), // "flexiAPIUrlChanged"
QT_MOC_LITERAL(126, 2571, 18), // "exitOnCloseChanged"
QT_MOC_LITERAL(127, 2590, 5), // "value"
QT_MOC_LITERAL(128, 2596, 20), // "mipmapEnabledChanged"
QT_MOC_LITERAL(129, 2617, 31), // "useMinimalTimelineFilterChanged"
QT_MOC_LITERAL(130, 2649, 21), // "sipDisplayModeChanged"
QT_MOC_LITERAL(131, 2671, 28), // "checkForUpdateEnabledChanged"
QT_MOC_LITERAL(132, 2700, 22), // "versionCheckUrlChanged"
QT_MOC_LITERAL(133, 2723, 23), // "versionCheckTypeChanged"
QT_MOC_LITERAL(134, 2747, 28), // "magicSearchMaxResultsChanged"
QT_MOC_LITERAL(135, 2776, 33), // "dontAskAgainInfoEncryptionCha..."
QT_MOC_LITERAL(136, 2810, 30), // "haveDontAskAgainChoicesChanged"
QT_MOC_LITERAL(137, 2841, 17), // "logsFolderChanged"
QT_MOC_LITERAL(138, 2859, 20), // "logsUploadUrlChanged"
QT_MOC_LITERAL(139, 2880, 18), // "logsEnabledChanged"
QT_MOC_LITERAL(140, 2899, 22), // "fullLogsEnabledChanged"
QT_MOC_LITERAL(141, 2922, 16), // "logsEmailChanged"
QT_MOC_LITERAL(142, 2939, 5), // "email"
QT_MOC_LITERAL(143, 2945, 19), // "vfsEncryptedChanged"
QT_MOC_LITERAL(144, 2965, 22), // "contactImporterChanged"
QT_MOC_LITERAL(145, 2988, 31), // "developerSettingsEnabledChanged"
QT_MOC_LITERAL(146, 3020, 15), // "isInCallChanged"
QT_MOC_LITERAL(147, 3036, 20), // "onSettingsTabChanged"
QT_MOC_LITERAL(148, 3057, 3), // "idx"
QT_MOC_LITERAL(149, 3061, 21), // "settingsWindowClosing"
QT_MOC_LITERAL(150, 3083, 13), // "reloadDevices"
QT_MOC_LITERAL(151, 3097, 10), // "useWebview"
QT_MOC_LITERAL(152, 3108, 17), // "startCaptureGraph"
QT_MOC_LITERAL(153, 3126, 16), // "stopCaptureGraph"
QT_MOC_LITERAL(154, 3143, 17), // "resetCaptureGraph"
QT_MOC_LITERAL(155, 3161, 12), // "getMicVolume"
QT_MOC_LITERAL(156, 3174, 29), // "startEchoCancellerCalibration"
QT_MOC_LITERAL(157, 3204, 19), // "accessVideoSettings"
QT_MOC_LITERAL(158, 3224, 20), // "setHighMosaicQuality"
QT_MOC_LITERAL(159, 3245, 23), // "setLimitedMosaicQuality"
QT_MOC_LITERAL(160, 3269, 32), // "getCurrentPreviewVideoDefinition"
QT_MOC_LITERAL(161, 3302, 13), // "setCameraMode"
QT_MOC_LITERAL(162, 3316, 10), // "CameraMode"
QT_MOC_LITERAL(163, 3327, 4), // "mode"
QT_MOC_LITERAL(164, 3332, 15), // "tunnelAvailable"
QT_MOC_LITERAL(165, 3348, 9), // "getTunnel"
QT_MOC_LITERAL(166, 3358, 12), // "TunnelModel*"
QT_MOC_LITERAL(167, 3371, 21), // "getRemoteProvisioning"
QT_MOC_LITERAL(168, 3393, 17), // "isQRCodeAvailable"
QT_MOC_LITERAL(169, 3411, 25), // "isCheckForUpdateAvailable"
QT_MOC_LITERAL(170, 3437, 21), // "haveVersionNightlyUrl"
QT_MOC_LITERAL(171, 3459, 22), // "getShowLocalSipAccount"
QT_MOC_LITERAL(172, 3482, 22), // "getShowStartChatButton"
QT_MOC_LITERAL(173, 3505, 27), // "getShowStartVideoCallButton"
QT_MOC_LITERAL(174, 3533, 24), // "resetDontAskAgainChoices"
QT_MOC_LITERAL(175, 3558, 10), // "getLogText"
QT_MOC_LITERAL(176, 3569, 15), // "setVfsEncrypted"
QT_MOC_LITERAL(177, 3585, 9), // "encrypted"
QT_MOC_LITERAL(178, 3595, 14), // "deleteUserData"
QT_MOC_LITERAL(179, 3610, 15), // "isLdapAvailable"
QT_MOC_LITERAL(180, 3626, 17), // "isOAuth2Available"
QT_MOC_LITERAL(181, 3644, 28), // "isDeveloperSettingsAvailable"
QT_MOC_LITERAL(182, 3673, 26), // "createAppSipAccountEnabled"
QT_MOC_LITERAL(183, 3700, 31), // "fetchRemoteConfigurationEnabled"
QT_MOC_LITERAL(184, 3732, 23), // "useAppSipAccountEnabled"
QT_MOC_LITERAL(185, 3756, 25), // "useOtherSipAccountEnabled"
QT_MOC_LITERAL(186, 3782, 44), // "autoApplyProvisioningConfigUr..."
QT_MOC_LITERAL(187, 3827, 29), // "assistantSupportsPhoneNumbers"
QT_MOC_LITERAL(188, 3857, 24), // "assistantRegistrationUrl"
QT_MOC_LITERAL(189, 3882, 17), // "assistantLoginUrl"
QT_MOC_LITERAL(190, 3900, 18), // "assistantLogoutUrl"
QT_MOC_LITERAL(191, 3919, 11), // "cguAccepted"
QT_MOC_LITERAL(192, 3931, 10), // "deviceName"
QT_MOC_LITERAL(193, 3942, 19), // "captureGraphRunning"
QT_MOC_LITERAL(194, 3962, 14), // "captureDevices"
QT_MOC_LITERAL(195, 3977, 15), // "playbackDevices"
QT_MOC_LITERAL(196, 3993, 12), // "playbackGain"
QT_MOC_LITERAL(197, 4006, 11), // "captureGain"
QT_MOC_LITERAL(198, 4018, 13), // "captureDevice"
QT_MOC_LITERAL(199, 4032, 14), // "playbackDevice"
QT_MOC_LITERAL(200, 4047, 12), // "ringerDevice"
QT_MOC_LITERAL(201, 4060, 8), // "ringPath"
QT_MOC_LITERAL(202, 4069, 23), // "echoCancellationEnabled"
QT_MOC_LITERAL(203, 4093, 15), // "showAudioCodecs"
QT_MOC_LITERAL(204, 4109, 12), // "videoDevices"
QT_MOC_LITERAL(205, 4122, 11), // "videoDevice"
QT_MOC_LITERAL(206, 4134, 11), // "videoPreset"
QT_MOC_LITERAL(207, 4146, 14), // "videoFramerate"
QT_MOC_LITERAL(208, 4161, 25), // "supportedVideoDefinitions"
QT_MOC_LITERAL(209, 4187, 15), // "videoDefinition"
QT_MOC_LITERAL(210, 4203, 12), // "videoEnabled"
QT_MOC_LITERAL(211, 4216, 14), // "videoAvailable"
QT_MOC_LITERAL(212, 4231, 15), // "showVideoCodecs"
QT_MOC_LITERAL(213, 4247, 14), // "gridCameraMode"
QT_MOC_LITERAL(214, 4262, 23), // "activeSpeakerCameraMode"
QT_MOC_LITERAL(215, 4286, 14), // "callCameraMode"
QT_MOC_LITERAL(216, 4301, 21), // "videoConferenceLayout"
QT_MOC_LITERAL(217, 4323, 31), // "LinphoneEnums::ConferenceLayout"
QT_MOC_LITERAL(218, 4355, 16), // "autoAnswerStatus"
QT_MOC_LITERAL(219, 4372, 21), // "autoAnswerVideoStatus"
QT_MOC_LITERAL(220, 4394, 15), // "autoAnswerDelay"
QT_MOC_LITERAL(221, 4410, 26), // "showTelKeypadAutomatically"
QT_MOC_LITERAL(222, 4437, 27), // "keepCallsWindowInBackground"
QT_MOC_LITERAL(223, 4465, 20), // "outgoingCallsEnabled"
QT_MOC_LITERAL(224, 4486, 19), // "callRecorderEnabled"
QT_MOC_LITERAL(225, 4506, 24), // "automaticallyRecordCalls"
QT_MOC_LITERAL(226, 4531, 19), // "autoDownloadMaxSize"
QT_MOC_LITERAL(227, 4551, 16), // "callPauseEnabled"
QT_MOC_LITERAL(228, 4568, 21), // "muteMicrophoneEnabled"
QT_MOC_LITERAL(229, 4590, 19), // "standardChatEnabled"
QT_MOC_LITERAL(230, 4610, 17), // "secureChatEnabled"
QT_MOC_LITERAL(231, 4628, 16), // "groupChatEnabled"
QT_MOC_LITERAL(232, 4645, 18), // "hideEmptyChatRooms"
QT_MOC_LITERAL(233, 4664, 23), // "waitRegistrationForCall"
QT_MOC_LITERAL(234, 4688, 23), // "incallScreenshotEnabled"
QT_MOC_LITERAL(235, 4712, 17), // "conferenceEnabled"
QT_MOC_LITERAL(236, 4730, 22), // "videoConferenceEnabled"
QT_MOC_LITERAL(237, 4753, 24), // "chatNotificationsEnabled"
QT_MOC_LITERAL(238, 4778, 28), // "chatNotificationSoundEnabled"
QT_MOC_LITERAL(239, 4807, 25), // "chatNotificationSoundPath"
QT_MOC_LITERAL(240, 4833, 15), // "fileTransferUrl"
QT_MOC_LITERAL(241, 4849, 15), // "limeIsSupported"
QT_MOC_LITERAL(242, 4865, 25), // "supportedMediaEncryptions"
QT_MOC_LITERAL(243, 4891, 15), // "mediaEncryption"
QT_MOC_LITERAL(244, 4907, 24), // "mediaEncryptionMandatory"
QT_MOC_LITERAL(245, 4932, 22), // "isPostQuantumAvailable"
QT_MOC_LITERAL(246, 4955, 9), // "limeState"
QT_MOC_LITERAL(247, 4965, 15), // "contactsEnabled"
QT_MOC_LITERAL(248, 4981, 19), // "showNetworkSettings"
QT_MOC_LITERAL(249, 5001, 18), // "useSipInfoForDtmfs"
QT_MOC_LITERAL(250, 5020, 18), // "useRfc2833ForDtmfs"
QT_MOC_LITERAL(251, 5039, 11), // "ipv6Enabled"
QT_MOC_LITERAL(252, 5051, 17), // "downloadBandwidth"
QT_MOC_LITERAL(253, 5069, 15), // "uploadBandwidth"
QT_MOC_LITERAL(254, 5085, 26), // "adaptiveRateControlEnabled"
QT_MOC_LITERAL(255, 5112, 7), // "tcpPort"
QT_MOC_LITERAL(256, 5120, 7), // "udpPort"
QT_MOC_LITERAL(257, 5128, 14), // "audioPortRange"
QT_MOC_LITERAL(258, 5143, 10), // "QList<int>"
QT_MOC_LITERAL(259, 5154, 14), // "videoPortRange"
QT_MOC_LITERAL(260, 5169, 10), // "iceEnabled"
QT_MOC_LITERAL(261, 5180, 11), // "turnEnabled"
QT_MOC_LITERAL(262, 5192, 10), // "stunServer"
QT_MOC_LITERAL(263, 5203, 8), // "turnUser"
QT_MOC_LITERAL(264, 5212, 12), // "turnPassword"
QT_MOC_LITERAL(265, 5225, 7), // "dscpSip"
QT_MOC_LITERAL(266, 5233, 9), // "dscpAudio"
QT_MOC_LITERAL(267, 5243, 9), // "dscpVideo"
QT_MOC_LITERAL(268, 5253, 13), // "rlsUriEnabled"
QT_MOC_LITERAL(269, 5267, 6), // "rlsUri"
QT_MOC_LITERAL(270, 5274, 15), // "textMessageFont"
QT_MOC_LITERAL(271, 5290, 19), // "textMessageFontSize"
QT_MOC_LITERAL(272, 5310, 9), // "emojiFont"
QT_MOC_LITERAL(273, 5320, 13), // "emojiFontSize"
QT_MOC_LITERAL(274, 5334, 11), // "flexiAPIUrl"
QT_MOC_LITERAL(275, 5346, 22), // "savedScreenshotsFolder"
QT_MOC_LITERAL(276, 5369, 16), // "savedCallsFolder"
QT_MOC_LITERAL(277, 5386, 10), // "mvvmFolder"
QT_MOC_LITERAL(278, 5397, 14), // "downloadFolder"
QT_MOC_LITERAL(279, 5412, 11), // "exitOnClose"
QT_MOC_LITERAL(280, 5424, 21), // "checkForUpdateEnabled"
QT_MOC_LITERAL(281, 5446, 15), // "versionCheckUrl"
QT_MOC_LITERAL(282, 5462, 16), // "versionCheckType"
QT_MOC_LITERAL(283, 5479, 16), // "VersionCheckType"
QT_MOC_LITERAL(284, 5496, 19), // "showLocalSipAccount"
QT_MOC_LITERAL(285, 5516, 19), // "showStartChatButton"
QT_MOC_LITERAL(286, 5536, 24), // "showStartVideoCallButton"
QT_MOC_LITERAL(287, 5561, 13), // "mipmapEnabled"
QT_MOC_LITERAL(288, 5575, 24), // "useMinimalTimelineFilter"
QT_MOC_LITERAL(289, 5600, 14), // "sipDisplayMode"
QT_MOC_LITERAL(290, 5615, 21), // "Utils::SipDisplayMode"
QT_MOC_LITERAL(291, 5637, 21), // "magicSearchMaxResults"
QT_MOC_LITERAL(292, 5659, 26), // "dontAskAgainInfoEncryption"
QT_MOC_LITERAL(293, 5686, 23), // "haveDontAskAgainChoices"
QT_MOC_LITERAL(294, 5710, 10), // "logsFolder"
QT_MOC_LITERAL(295, 5721, 13), // "logsUploadUrl"
QT_MOC_LITERAL(296, 5735, 11), // "logsEnabled"
QT_MOC_LITERAL(297, 5747, 15), // "fullLogsEnabled"
QT_MOC_LITERAL(298, 5763, 9), // "logsEmail"
QT_MOC_LITERAL(299, 5773, 14), // "isVfsEncrypted"
QT_MOC_LITERAL(300, 5788, 24), // "developerSettingsEnabled"
QT_MOC_LITERAL(301, 5813, 8), // "isInCall"
QT_MOC_LITERAL(302, 5822, 19), // "MediaEncryptionNone"
QT_MOC_LITERAL(303, 5842, 19), // "MediaEncryptionDtls"
QT_MOC_LITERAL(304, 5862, 19), // "MediaEncryptionSrtp"
QT_MOC_LITERAL(305, 5882, 19), // "MediaEncryptionZrtp"
QT_MOC_LITERAL(306, 5902, 24), // "VersionCheckType_Release"
QT_MOC_LITERAL(307, 5927, 24), // "VersionCheckType_Nightly"
QT_MOC_LITERAL(308, 5952, 23), // "VersionCheckType_Custom"
QT_MOC_LITERAL(309, 5976, 17), // "CameraMode_Hybrid"
QT_MOC_LITERAL(310, 5994, 25), // "CameraMode_OccupyAllSpace"
QT_MOC_LITERAL(311, 6020, 20) // "CameraMode_BlackBars"

    },
    "SettingsModel\0createAppSipAccountEnabledChanged\0"
    "\0status\0fetchRemoteConfigurationEnabledChanged\0"
    "useAppSipAccountEnabledChanged\0"
    "useOtherSipAccountEnabledChanged\0"
    "autoApplyProvisioningConfigUriHandlerEnabledChanged\0"
    "assistantSupportsPhoneNumbersChanged\0"
    "assistantRegistrationUrlChanged\0url\0"
    "assistantLoginUrlChanged\0"
    "assistantLogoutUrlChanged\0cguAcceptedChanged\0"
    "accepted\0deviceNameChanged\0"
    "captureGraphRunningChanged\0running\0"
    "playbackGainChanged\0gain\0captureGainChanged\0"
    "captureDevicesChanged\0devices\0"
    "playbackDevicesChanged\0captureDeviceChanged\0"
    "device\0playbackDeviceChanged\0"
    "ringerDeviceChanged\0ringPathChanged\0"
    "path\0echoCancellationEnabledChanged\0"
    "echoCancellationStatus\0msDelay\0"
    "showAudioCodecsChanged\0videoEnabledChanged\0"
    "videoAvailableChanged\0videoDevicesChanged\0"
    "videoDeviceChanged\0videoPresetChanged\0"
    "preset\0videoFramerateChanged\0framerate\0"
    "videoDefinitionChanged\0definition\0"
    "showVideoCodecsChanged\0cameraModeChanged\0"
    "gridCameraModeChanged\0"
    "activeSpeakerCameraModeChanged\0"
    "callCameraModeChanged\0"
    "videoConferenceLayoutChanged\0"
    "haveAtLeastOneVideoCodecChanged\0"
    "autoAnswerStatusChanged\0"
    "autoAnswerVideoStatusChanged\0"
    "autoAnswerDelayChanged\0delay\0"
    "showTelKeypadAutomaticallyChanged\0"
    "keepCallsWindowInBackgroundChanged\0"
    "outgoingCallsEnabledChanged\0"
    "callRecorderEnabledChanged\0"
    "automaticallyRecordCallsChanged\0"
    "autoDownloadMaxSizeChanged\0maxSize\0"
    "callPauseEnabledChanged\0"
    "muteMicrophoneEnabledChanged\0"
    "standardChatEnabledChanged\0"
    "secureChatEnabledChanged\0"
    "groupChatEnabledChanged\0"
    "hideEmptyChatRoomsChanged\0"
    "waitRegistrationForCallChanged\0"
    "incallScreenshotEnabledChanged\0"
    "conferenceEnabledChanged\0"
    "videoConferenceEnabledChanged\0"
    "chatNotificationsEnabledChanged\0"
    "chatNotificationSoundEnabledChanged\0"
    "chatNotificationSoundPathChanged\0"
    "fileTransferUrlChanged\0mediaEncryptionChanged\0"
    "MediaEncryption\0encryption\0limeStateChanged\0"
    "state\0contactsEnabledChanged\0"
    "createEphemeralsChatRoomsChanged\0"
    "showNetworkSettingsChanged\0"
    "dtmfsProtocolChanged\0ipv6EnabledChanged\0"
    "downloadBandWidthChanged\0bandwidth\0"
    "uploadBandWidthChanged\0"
    "adaptiveRateControlEnabledChanged\0"
    "tcpPortChanged\0port\0udpPortChanged\0"
    "audioPortRangeChanged\0a\0b\0"
    "videoPortRangeChanged\0iceEnabledChanged\0"
    "turnEnabledChanged\0stunServerChanged\0"
    "server\0turnUserChanged\0user\0"
    "turnPasswordChanged\0password\0"
    "dscpSipChanged\0dscp\0dscpAudioChanged\0"
    "dscpVideoChanged\0rlsUriEnabledChanged\0"
    "rlsUriChanged\0textMessageFontChanged\0"
    "font\0textMessageFontSizeChanged\0size\0"
    "emojiFontChanged\0emojiFontSizeChanged\0"
    "savedScreenshotsFolderChanged\0folder\0"
    "savedCallsFolderChanged\0savedMVVMChanged\0"
    "downloadFolderChanged\0remoteProvisioningChanged\0"
    "remoteProvisioning\0remoteProvisioningNotChanged\0"
    "flexiAPIUrlChanged\0exitOnCloseChanged\0"
    "value\0mipmapEnabledChanged\0"
    "useMinimalTimelineFilterChanged\0"
    "sipDisplayModeChanged\0"
    "checkForUpdateEnabledChanged\0"
    "versionCheckUrlChanged\0versionCheckTypeChanged\0"
    "magicSearchMaxResultsChanged\0"
    "dontAskAgainInfoEncryptionChanged\0"
    "haveDontAskAgainChoicesChanged\0"
    "logsFolderChanged\0logsUploadUrlChanged\0"
    "logsEnabledChanged\0fullLogsEnabledChanged\0"
    "logsEmailChanged\0email\0vfsEncryptedChanged\0"
    "contactImporterChanged\0"
    "developerSettingsEnabledChanged\0"
    "isInCallChanged\0onSettingsTabChanged\0"
    "idx\0settingsWindowClosing\0reloadDevices\0"
    "useWebview\0startCaptureGraph\0"
    "stopCaptureGraph\0resetCaptureGraph\0"
    "getMicVolume\0startEchoCancellerCalibration\0"
    "accessVideoSettings\0setHighMosaicQuality\0"
    "setLimitedMosaicQuality\0"
    "getCurrentPreviewVideoDefinition\0"
    "setCameraMode\0CameraMode\0mode\0"
    "tunnelAvailable\0getTunnel\0TunnelModel*\0"
    "getRemoteProvisioning\0isQRCodeAvailable\0"
    "isCheckForUpdateAvailable\0"
    "haveVersionNightlyUrl\0getShowLocalSipAccount\0"
    "getShowStartChatButton\0"
    "getShowStartVideoCallButton\0"
    "resetDontAskAgainChoices\0getLogText\0"
    "setVfsEncrypted\0encrypted\0deleteUserData\0"
    "isLdapAvailable\0isOAuth2Available\0"
    "isDeveloperSettingsAvailable\0"
    "createAppSipAccountEnabled\0"
    "fetchRemoteConfigurationEnabled\0"
    "useAppSipAccountEnabled\0"
    "useOtherSipAccountEnabled\0"
    "autoApplyProvisioningConfigUriHandlerEnabled\0"
    "assistantSupportsPhoneNumbers\0"
    "assistantRegistrationUrl\0assistantLoginUrl\0"
    "assistantLogoutUrl\0cguAccepted\0"
    "deviceName\0captureGraphRunning\0"
    "captureDevices\0playbackDevices\0"
    "playbackGain\0captureGain\0captureDevice\0"
    "playbackDevice\0ringerDevice\0ringPath\0"
    "echoCancellationEnabled\0showAudioCodecs\0"
    "videoDevices\0videoDevice\0videoPreset\0"
    "videoFramerate\0supportedVideoDefinitions\0"
    "videoDefinition\0videoEnabled\0"
    "videoAvailable\0showVideoCodecs\0"
    "gridCameraMode\0activeSpeakerCameraMode\0"
    "callCameraMode\0videoConferenceLayout\0"
    "LinphoneEnums::ConferenceLayout\0"
    "autoAnswerStatus\0autoAnswerVideoStatus\0"
    "autoAnswerDelay\0showTelKeypadAutomatically\0"
    "keepCallsWindowInBackground\0"
    "outgoingCallsEnabled\0callRecorderEnabled\0"
    "automaticallyRecordCalls\0autoDownloadMaxSize\0"
    "callPauseEnabled\0muteMicrophoneEnabled\0"
    "standardChatEnabled\0secureChatEnabled\0"
    "groupChatEnabled\0hideEmptyChatRooms\0"
    "waitRegistrationForCall\0incallScreenshotEnabled\0"
    "conferenceEnabled\0videoConferenceEnabled\0"
    "chatNotificationsEnabled\0"
    "chatNotificationSoundEnabled\0"
    "chatNotificationSoundPath\0fileTransferUrl\0"
    "limeIsSupported\0supportedMediaEncryptions\0"
    "mediaEncryption\0mediaEncryptionMandatory\0"
    "isPostQuantumAvailable\0limeState\0"
    "contactsEnabled\0showNetworkSettings\0"
    "useSipInfoForDtmfs\0useRfc2833ForDtmfs\0"
    "ipv6Enabled\0downloadBandwidth\0"
    "uploadBandwidth\0adaptiveRateControlEnabled\0"
    "tcpPort\0udpPort\0audioPortRange\0"
    "QList<int>\0videoPortRange\0iceEnabled\0"
    "turnEnabled\0stunServer\0turnUser\0"
    "turnPassword\0dscpSip\0dscpAudio\0dscpVideo\0"
    "rlsUriEnabled\0rlsUri\0textMessageFont\0"
    "textMessageFontSize\0emojiFont\0"
    "emojiFontSize\0flexiAPIUrl\0"
    "savedScreenshotsFolder\0savedCallsFolder\0"
    "mvvmFolder\0downloadFolder\0exitOnClose\0"
    "checkForUpdateEnabled\0versionCheckUrl\0"
    "versionCheckType\0VersionCheckType\0"
    "showLocalSipAccount\0showStartChatButton\0"
    "showStartVideoCallButton\0mipmapEnabled\0"
    "useMinimalTimelineFilter\0sipDisplayMode\0"
    "Utils::SipDisplayMode\0magicSearchMaxResults\0"
    "dontAskAgainInfoEncryption\0"
    "haveDontAskAgainChoices\0logsFolder\0"
    "logsUploadUrl\0logsEnabled\0fullLogsEnabled\0"
    "logsEmail\0isVfsEncrypted\0"
    "developerSettingsEnabled\0isInCall\0"
    "MediaEncryptionNone\0MediaEncryptionDtls\0"
    "MediaEncryptionSrtp\0MediaEncryptionZrtp\0"
    "VersionCheckType_Release\0"
    "VersionCheckType_Nightly\0"
    "VersionCheckType_Custom\0CameraMode_Hybrid\0"
    "CameraMode_OccupyAllSpace\0"
    "CameraMode_BlackBars"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     143,   14, // methods
     117, 1058, // properties
       3, 1526, // enums/sets
       0,    0, // constructors
       0,       // flags
     114,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  729,    2, 0x06 /* Public */,
       4,    1,  732,    2, 0x06 /* Public */,
       5,    1,  735,    2, 0x06 /* Public */,
       6,    1,  738,    2, 0x06 /* Public */,
       7,    0,  741,    2, 0x06 /* Public */,
       8,    1,  742,    2, 0x06 /* Public */,
       9,    1,  745,    2, 0x06 /* Public */,
      11,    1,  748,    2, 0x06 /* Public */,
      12,    1,  751,    2, 0x06 /* Public */,
      13,    1,  754,    2, 0x06 /* Public */,
      15,    0,  757,    2, 0x06 /* Public */,
      16,    1,  758,    2, 0x06 /* Public */,
      18,    1,  761,    2, 0x06 /* Public */,
      20,    1,  764,    2, 0x06 /* Public */,
      21,    1,  767,    2, 0x06 /* Public */,
      23,    1,  770,    2, 0x06 /* Public */,
      24,    1,  773,    2, 0x06 /* Public */,
      26,    1,  776,    2, 0x06 /* Public */,
      27,    1,  779,    2, 0x06 /* Public */,
      28,    1,  782,    2, 0x06 /* Public */,
      30,    1,  785,    2, 0x06 /* Public */,
      31,    2,  788,    2, 0x06 /* Public */,
      33,    1,  793,    2, 0x06 /* Public */,
      34,    0,  796,    2, 0x06 /* Public */,
      35,    0,  797,    2, 0x06 /* Public */,
      36,    1,  798,    2, 0x06 /* Public */,
      37,    1,  801,    2, 0x06 /* Public */,
      38,    1,  804,    2, 0x06 /* Public */,
      40,    1,  807,    2, 0x06 /* Public */,
      42,    1,  810,    2, 0x06 /* Public */,
      44,    1,  813,    2, 0x06 /* Public */,
      45,    0,  816,    2, 0x06 /* Public */,
      46,    0,  817,    2, 0x06 /* Public */,
      47,    0,  818,    2, 0x06 /* Public */,
      48,    0,  819,    2, 0x06 /* Public */,
      49,    0,  820,    2, 0x06 /* Public */,
      50,    0,  821,    2, 0x06 /* Public */,
      51,    1,  822,    2, 0x06 /* Public */,
      52,    1,  825,    2, 0x06 /* Public */,
      53,    1,  828,    2, 0x06 /* Public */,
      55,    1,  831,    2, 0x06 /* Public */,
      56,    1,  834,    2, 0x06 /* Public */,
      57,    1,  837,    2, 0x06 /* Public */,
      58,    1,  840,    2, 0x06 /* Public */,
      59,    1,  843,    2, 0x06 /* Public */,
      60,    1,  846,    2, 0x06 /* Public */,
      62,    1,  849,    2, 0x06 /* Public */,
      63,    1,  852,    2, 0x06 /* Public */,
      64,    1,  855,    2, 0x06 /* Public */,
      65,    0,  858,    2, 0x06 /* Public */,
      66,    0,  859,    2, 0x06 /* Public */,
      67,    1,  860,    2, 0x06 /* Public */,
      68,    1,  863,    2, 0x06 /* Public */,
      69,    1,  866,    2, 0x06 /* Public */,
      70,    1,  869,    2, 0x06 /* Public */,
      71,    0,  872,    2, 0x06 /* Public */,
      72,    1,  873,    2, 0x06 /* Public */,
      73,    1,  876,    2, 0x06 /* Public */,
      74,    1,  879,    2, 0x06 /* Public */,
      75,    1,  882,    2, 0x06 /* Public */,
      76,    1,  885,    2, 0x06 /* Public */,
      79,    1,  888,    2, 0x06 /* Public */,
      81,    1,  891,    2, 0x06 /* Public */,
      82,    0,  894,    2, 0x06 /* Public */,
      83,    1,  895,    2, 0x06 /* Public */,
      84,    0,  898,    2, 0x06 /* Public */,
      85,    1,  899,    2, 0x06 /* Public */,
      86,    1,  902,    2, 0x06 /* Public */,
      88,    1,  905,    2, 0x06 /* Public */,
      89,    1,  908,    2, 0x06 /* Public */,
      90,    1,  911,    2, 0x06 /* Public */,
      92,    1,  914,    2, 0x06 /* Public */,
      93,    2,  917,    2, 0x06 /* Public */,
      96,    2,  922,    2, 0x06 /* Public */,
      97,    1,  927,    2, 0x06 /* Public */,
      98,    1,  930,    2, 0x06 /* Public */,
      99,    1,  933,    2, 0x06 /* Public */,
     101,    1,  936,    2, 0x06 /* Public */,
     103,    1,  939,    2, 0x06 /* Public */,
     105,    1,  942,    2, 0x06 /* Public */,
     107,    1,  945,    2, 0x06 /* Public */,
     108,    1,  948,    2, 0x06 /* Public */,
     109,    1,  951,    2, 0x06 /* Public */,
     110,    0,  954,    2, 0x06 /* Public */,
     111,    1,  955,    2, 0x06 /* Public */,
     113,    1,  958,    2, 0x06 /* Public */,
     115,    1,  961,    2, 0x06 /* Public */,
     116,    1,  964,    2, 0x06 /* Public */,
     117,    1,  967,    2, 0x06 /* Public */,
     119,    1,  970,    2, 0x06 /* Public */,
     120,    1,  973,    2, 0x06 /* Public */,
     121,    1,  976,    2, 0x06 /* Public */,
     122,    1,  979,    2, 0x06 /* Public */,
     124,    1,  982,    2, 0x06 /* Public */,
     125,    1,  985,    2, 0x06 /* Public */,
     126,    1,  988,    2, 0x06 /* Public */,
     128,    0,  991,    2, 0x06 /* Public */,
     129,    0,  992,    2, 0x06 /* Public */,
     130,    0,  993,    2, 0x06 /* Public */,
     131,    0,  994,    2, 0x06 /* Public */,
     132,    0,  995,    2, 0x06 /* Public */,
     133,    0,  996,    2, 0x06 /* Public */,
     134,    0,  997,    2, 0x06 /* Public */,
     135,    0,  998,    2, 0x06 /* Public */,
     136,    0,  999,    2, 0x06 /* Public */,
     137,    1, 1000,    2, 0x06 /* Public */,
     138,    1, 1003,    2, 0x06 /* Public */,
     139,    1, 1006,    2, 0x06 /* Public */,
     140,    0, 1009,    2, 0x06 /* Public */,
     141,    1, 1010,    2, 0x06 /* Public */,
     143,    0, 1013,    2, 0x06 /* Public */,
     144,    0, 1014,    2, 0x06 /* Public */,
     145,    1, 1015,    2, 0x06 /* Public */,
     146,    1, 1018,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
     147,    1, 1021,    2, 0x02 /* Public */,
     149,    0, 1024,    2, 0x02 /* Public */,
     150,    0, 1025,    2, 0x02 /* Public */,
     151,    0, 1026,    2, 0x02 /* Public */,
     152,    0, 1027,    2, 0x02 /* Public */,
     153,    0, 1028,    2, 0x02 /* Public */,
     154,    0, 1029,    2, 0x02 /* Public */,
     155,    0, 1030,    2, 0x02 /* Public */,
     156,    0, 1031,    2, 0x02 /* Public */,
     157,    0, 1032,    2, 0x02 /* Public */,
     158,    0, 1033,    2, 0x02 /* Public */,
     159,    0, 1034,    2, 0x02 /* Public */,
     160,    0, 1035,    2, 0x02 /* Public */,
     161,    1, 1036,    2, 0x02 /* Public */,
     164,    0, 1039,    2, 0x02 /* Public */,
     165,    0, 1040,    2, 0x02 /* Public */,
     167,    0, 1041,    2, 0x02 /* Public */,
     168,    0, 1042,    2, 0x02 /* Public */,
     169,    0, 1043,    2, 0x02 /* Public */,
     170,    0, 1044,    2, 0x02 /* Public */,
     171,    0, 1045,    2, 0x02 /* Public */,
     172,    0, 1046,    2, 0x02 /* Public */,
     173,    0, 1047,    2, 0x02 /* Public */,
     174,    0, 1048,    2, 0x02 /* Public */,
     175,    0, 1049,    2, 0x02 /* Public */,
     176,    2, 1050,    2, 0x02 /* Public */,
     179,    0, 1055,    2, 0x02 /* Public */,
     180,    0, 1056,    2, 0x02 /* Public */,
     181,    0, 1057,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Float,   19,
    QMetaType::Void, QMetaType::Float,   19,
    QMetaType::Void, QMetaType::QStringList,   22,
    QMetaType::Void, QMetaType::QStringList,   22,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,   32,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   22,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::QVariantMap,   43,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,   61,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, 0x80000000 | 77,   78,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Bool, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,   91,
    QMetaType::Void, QMetaType::Int,   91,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   94,   95,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   94,   95,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,  100,
    QMetaType::Void, QMetaType::QString,  102,
    QMetaType::Void, QMetaType::QString,  104,
    QMetaType::Void, QMetaType::Int,  106,
    QMetaType::Void, QMetaType::Int,  106,
    QMetaType::Void, QMetaType::Int,  106,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QFont,  112,
    QMetaType::Void, QMetaType::Int,  114,
    QMetaType::Void, QMetaType::QFont,  112,
    QMetaType::Void, QMetaType::Int,  114,
    QMetaType::Void, QMetaType::QString,  118,
    QMetaType::Void, QMetaType::QString,  118,
    QMetaType::Void, QMetaType::QString,  118,
    QMetaType::Void, QMetaType::QString,  118,
    QMetaType::Void, QMetaType::QString,  123,
    QMetaType::Void, QMetaType::QString,  123,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Bool,  127,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  118,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  142,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Bool,    3,
    QMetaType::Bool, QMetaType::Bool,    2,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,  148,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Float,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QVariantMap,
    QMetaType::Void, 0x80000000 | 162,  163,
    QMetaType::Bool,
    0x80000000 | 166,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,  177,  178,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags
     182, QMetaType::Bool, 0x00495103,
     183, QMetaType::Bool, 0x00495103,
     184, QMetaType::Bool, 0x00495103,
     185, QMetaType::Bool, 0x00495103,
     186, QMetaType::Bool, 0x00495103,
     187, QMetaType::Bool, 0x00495103,
     188, QMetaType::QString, 0x00495103,
     189, QMetaType::QString, 0x00495103,
     190, QMetaType::QString, 0x00495103,
     191, QMetaType::Bool, 0x00495003,
     192, QMetaType::QString, 0x00495103,
     193, QMetaType::Bool, 0x00495001,
     194, QMetaType::QStringList, 0x00495001,
     195, QMetaType::QStringList, 0x00495001,
     196, QMetaType::Float, 0x00495103,
     197, QMetaType::Float, 0x00495103,
     198, QMetaType::QString, 0x00495103,
     199, QMetaType::QString, 0x00495103,
     200, QMetaType::QString, 0x00495103,
     201, QMetaType::QString, 0x00495103,
     202, QMetaType::Bool, 0x00495103,
     203, QMetaType::Bool, 0x00495103,
     204, QMetaType::QStringList, 0x00495001,
     205, QMetaType::QString, 0x00495103,
     206, QMetaType::QString, 0x00495103,
     207, QMetaType::Int, 0x00495103,
     208, QMetaType::QVariantList, 0x00095401,
     209, QMetaType::QVariantMap, 0x00495103,
     210, QMetaType::Bool, 0x00495103,
     211, QMetaType::Bool, 0x00495001,
     212, QMetaType::Bool, 0x00495103,
     213, 0x80000000 | 162, 0x0049510b,
     214, 0x80000000 | 162, 0x0049510b,
     215, 0x80000000 | 162, 0x0049510b,
     216, 0x80000000 | 217, 0x0049510b,
     218, QMetaType::Bool, 0x00495103,
     219, QMetaType::Bool, 0x00495103,
     220, QMetaType::Int, 0x00495103,
     221, QMetaType::Bool, 0x00495103,
     222, QMetaType::Bool, 0x00495103,
     223, QMetaType::Bool, 0x00495103,
     224, QMetaType::Bool, 0x00495103,
     225, QMetaType::Bool, 0x00495103,
     226, QMetaType::Int, 0x00495103,
     227, QMetaType::Bool, 0x00495103,
     228, QMetaType::Bool, 0x00495103,
     229, QMetaType::Bool, 0x00495103,
     230, QMetaType::Bool, 0x00495103,
     231, QMetaType::Bool, 0x00495001,
     232, QMetaType::Bool, 0x00495103,
     233, QMetaType::Bool, 0x00495103,
     234, QMetaType::Bool, 0x00495103,
     235, QMetaType::Bool, 0x00495103,
     236, QMetaType::Bool, 0x00495001,
     237, QMetaType::Bool, 0x00495103,
     238, QMetaType::Bool, 0x00495103,
     239, QMetaType::QString, 0x00495103,
     240, QMetaType::QString, 0x00495103,
     241, QMetaType::Bool, 0x00095401,
     242, QMetaType::QVariantList, 0x00095401,
     243, 0x80000000 | 77, 0x0049510b,
     244, QMetaType::Bool, 0x00495003,
     245, QMetaType::Bool, 0x00095401,
     246, QMetaType::Bool, 0x00495103,
     247, QMetaType::Bool, 0x00495103,
     248, QMetaType::Bool, 0x00495103,
     249, QMetaType::Bool, 0x00495103,
     250, QMetaType::Bool, 0x00495103,
     251, QMetaType::Bool, 0x00495103,
     252, QMetaType::Int, 0x00495103,
     253, QMetaType::Int, 0x00495103,
     254, QMetaType::Bool, 0x00495103,
     255, QMetaType::Int, 0x00495103,
     256, QMetaType::Int, 0x00495103,
     257, 0x80000000 | 258, 0x0049510b,
     259, 0x80000000 | 258, 0x0049510b,
     260, QMetaType::Bool, 0x00495103,
     261, QMetaType::Bool, 0x00495103,
     262, QMetaType::QString, 0x00495103,
     263, QMetaType::QString, 0x00495103,
     264, QMetaType::QString, 0x00495103,
     265, QMetaType::Int, 0x00495103,
     266, QMetaType::Int, 0x00495103,
     267, QMetaType::Int, 0x00495103,
     268, QMetaType::Bool, 0x00495103,
     269, QMetaType::QString, 0x00495103,
     270, QMetaType::QFont, 0x00495103,
     271, QMetaType::Int, 0x00495103,
     272, QMetaType::QFont, 0x00495103,
     273, QMetaType::Int, 0x00495103,
     123, QMetaType::QString, 0x00495103,
     274, QMetaType::QString, 0x00495103,
     275, QMetaType::QString, 0x00495103,
     276, QMetaType::QString, 0x00495103,
     277, QMetaType::QString, 0x00495003,
     278, QMetaType::QString, 0x00495103,
     279, QMetaType::Bool, 0x00495103,
     280, QMetaType::Bool, 0x00495103,
     281, QMetaType::QString, 0x00495103,
     282, 0x80000000 | 283, 0x0049510b,
     284, QMetaType::Bool, 0x00095401,
     285, QMetaType::Bool, 0x00095401,
     286, QMetaType::Bool, 0x00095401,
     287, QMetaType::Bool, 0x00495103,
     288, QMetaType::Bool, 0x00495103,
     289, 0x80000000 | 290, 0x0049510b,
     291, QMetaType::Int, 0x00495103,
     292, QMetaType::Bool, 0x00495103,
     293, QMetaType::Bool, 0x00495001,
     294, QMetaType::QString, 0x00495103,
     295, QMetaType::QString, 0x00495103,
     296, QMetaType::Bool, 0x00495103,
     297, QMetaType::Bool, 0x00495103,
     298, QMetaType::QString, 0x00495103,
     299, QMetaType::Bool, 0x00495001,
     300, QMetaType::Bool, 0x00495103,
     301, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      14,
      15,
      12,
      13,
      16,
      17,
      18,
      19,
      20,
      22,
      25,
      26,
      27,
      28,
       0,
      29,
      23,
      24,
      30,
      32,
      33,
      34,
      35,
      37,
      38,
      39,
      40,
      41,
      42,
      43,
      44,
      45,
      46,
      47,
      48,
      49,
      50,
      51,
      52,
      53,
      54,
      55,
      56,
      57,
      58,
      59,
       0,
       0,
      60,
      60,
       0,
      61,
      62,
      64,
      65,
      65,
      66,
      67,
      68,
      69,
      70,
      71,
      72,
      73,
      74,
      75,
      76,
      77,
      78,
      79,
      80,
      81,
      82,
      83,
      84,
      85,
      86,
      87,
      92,
      94,
      88,
      89,
      90,
      91,
      95,
      99,
     100,
     101,
       0,
       0,
       0,
      96,
      97,
      98,
     102,
     103,
     104,
     105,
     106,
     107,
     108,
     109,
     110,
     112,
     113,

 // enums: name, alias, flags, count, data
      77,   77, 0x0,    4, 1541,
     283,  283, 0x0,    3, 1549,
     162,  162, 0x0,    3, 1555,

 // enum data: key, value
     302, uint(SettingsModel::MediaEncryptionNone),
     303, uint(SettingsModel::MediaEncryptionDtls),
     304, uint(SettingsModel::MediaEncryptionSrtp),
     305, uint(SettingsModel::MediaEncryptionZrtp),
     306, uint(SettingsModel::VersionCheckType_Release),
     307, uint(SettingsModel::VersionCheckType_Nightly),
     308, uint(SettingsModel::VersionCheckType_Custom),
     309, uint(SettingsModel::CameraMode_Hybrid),
     310, uint(SettingsModel::CameraMode_OccupyAllSpace),
     311, uint(SettingsModel::CameraMode_BlackBars),

       0        // eod
};

void SettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createAppSipAccountEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->fetchRemoteConfigurationEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->useAppSipAccountEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->useOtherSipAccountEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->autoApplyProvisioningConfigUriHandlerEnabledChanged(); break;
        case 5: _t->assistantSupportsPhoneNumbersChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->assistantRegistrationUrlChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->assistantLoginUrlChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->assistantLogoutUrlChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->cguAcceptedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->deviceNameChanged(); break;
        case 11: _t->captureGraphRunningChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->playbackGainChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 13: _t->captureGainChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->captureDevicesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 15: _t->playbackDevicesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 16: _t->captureDeviceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->playbackDeviceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->ringerDeviceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->ringPathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->echoCancellationEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->echoCancellationStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->showAudioCodecsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->videoEnabledChanged(); break;
        case 24: _t->videoAvailableChanged(); break;
        case 25: _t->videoDevicesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 26: _t->videoDeviceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->videoPresetChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->videoFramerateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->videoDefinitionChanged((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 30: _t->showVideoCodecsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->cameraModeChanged(); break;
        case 32: _t->gridCameraModeChanged(); break;
        case 33: _t->activeSpeakerCameraModeChanged(); break;
        case 34: _t->callCameraModeChanged(); break;
        case 35: _t->videoConferenceLayoutChanged(); break;
        case 36: _t->haveAtLeastOneVideoCodecChanged(); break;
        case 37: _t->autoAnswerStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->autoAnswerVideoStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->autoAnswerDelayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->showTelKeypadAutomaticallyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->keepCallsWindowInBackgroundChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->outgoingCallsEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->callRecorderEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->automaticallyRecordCallsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->autoDownloadMaxSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->callPauseEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->muteMicrophoneEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->standardChatEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->secureChatEnabledChanged(); break;
        case 50: _t->groupChatEnabledChanged(); break;
        case 51: _t->hideEmptyChatRoomsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->waitRegistrationForCallChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->incallScreenshotEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->conferenceEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->videoConferenceEnabledChanged(); break;
        case 56: _t->chatNotificationsEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->chatNotificationSoundEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: _t->chatNotificationSoundPathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 59: _t->fileTransferUrlChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 60: _t->mediaEncryptionChanged((*reinterpret_cast< MediaEncryption(*)>(_a[1]))); break;
        case 61: _t->limeStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->contactsEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: _t->createEphemeralsChatRoomsChanged(); break;
        case 64: _t->showNetworkSettingsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: _t->dtmfsProtocolChanged(); break;
        case 66: _t->ipv6EnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 67: _t->downloadBandWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 68: _t->uploadBandWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 69: { bool _r = _t->adaptiveRateControlEnabledChanged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 70: _t->tcpPortChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 71: _t->udpPortChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 72: _t->audioPortRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 73: _t->videoPortRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 74: _t->iceEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 75: _t->turnEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 76: _t->stunServerChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 77: _t->turnUserChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 78: _t->turnPasswordChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 79: _t->dscpSipChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 80: _t->dscpAudioChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 81: _t->dscpVideoChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 82: _t->rlsUriEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 83: _t->rlsUriChanged(); break;
        case 84: _t->textMessageFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 85: _t->textMessageFontSizeChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 86: _t->emojiFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 87: _t->emojiFontSizeChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 88: _t->savedScreenshotsFolderChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 89: _t->savedCallsFolderChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 90: _t->savedMVVMChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 91: _t->downloadFolderChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 92: _t->remoteProvisioningChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 93: _t->remoteProvisioningNotChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 94: _t->flexiAPIUrlChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 95: _t->exitOnCloseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 96: _t->mipmapEnabledChanged(); break;
        case 97: _t->useMinimalTimelineFilterChanged(); break;
        case 98: _t->sipDisplayModeChanged(); break;
        case 99: _t->checkForUpdateEnabledChanged(); break;
        case 100: _t->versionCheckUrlChanged(); break;
        case 101: _t->versionCheckTypeChanged(); break;
        case 102: _t->magicSearchMaxResultsChanged(); break;
        case 103: _t->dontAskAgainInfoEncryptionChanged(); break;
        case 104: _t->haveDontAskAgainChoicesChanged(); break;
        case 105: _t->logsFolderChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 106: _t->logsUploadUrlChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 107: _t->logsEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 108: _t->fullLogsEnabledChanged(); break;
        case 109: _t->logsEmailChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 110: _t->vfsEncryptedChanged(); break;
        case 111: _t->contactImporterChanged(); break;
        case 112: { bool _r = _t->developerSettingsEnabledChanged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 113: { bool _r = _t->isInCallChanged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 114: _t->onSettingsTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 115: _t->settingsWindowClosing(); break;
        case 116: _t->reloadDevices(); break;
        case 117: { bool _r = _t->useWebview();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 118: _t->startCaptureGraph(); break;
        case 119: _t->stopCaptureGraph(); break;
        case 120: _t->resetCaptureGraph(); break;
        case 121: { float _r = _t->getMicVolume();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 122: _t->startEchoCancellerCalibration(); break;
        case 123: _t->accessVideoSettings(); break;
        case 124: _t->setHighMosaicQuality(); break;
        case 125: _t->setLimitedMosaicQuality(); break;
        case 126: { QVariantMap _r = _t->getCurrentPreviewVideoDefinition();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 127: _t->setCameraMode((*reinterpret_cast< CameraMode(*)>(_a[1]))); break;
        case 128: { bool _r = _t->tunnelAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 129: { TunnelModel* _r = _t->getTunnel();
            if (_a[0]) *reinterpret_cast< TunnelModel**>(_a[0]) = std::move(_r); }  break;
        case 130: { QString _r = _t->getRemoteProvisioning();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 131: { bool _r = _t->isQRCodeAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 132: { bool _r = _t->isCheckForUpdateAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 133: { bool _r = _t->haveVersionNightlyUrl();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 134: { bool _r = _t->getShowLocalSipAccount();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 135: { bool _r = _t->getShowStartChatButton();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 136: { bool _r = _t->getShowStartVideoCallButton();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 137: _t->resetDontAskAgainChoices(); break;
        case 138: { QString _r = _t->getLogText();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 139: _t->setVfsEncrypted((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 140: { bool _r = _t->isLdapAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 141: { bool _r = _t->isOAuth2Available();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 142: { bool _r = _t->isDeveloperSettingsAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::createAppSipAccountEnabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::fetchRemoteConfigurationEnabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::useAppSipAccountEnabledChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::useOtherSipAccountEnabledChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::autoApplyProvisioningConfigUriHandlerEnabledChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::assistantSupportsPhoneNumbersChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::assistantRegistrationUrlChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::assistantLoginUrlChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::assistantLogoutUrlChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::cguAcceptedChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::deviceNameChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::captureGraphRunningChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::playbackGainChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::captureGainChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::captureDevicesChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::playbackDevicesChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::captureDeviceChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::playbackDeviceChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::ringerDeviceChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::ringPathChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::echoCancellationEnabledChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::echoCancellationStatus)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::showAudioCodecsChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::videoEnabledChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::videoAvailableChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::videoDevicesChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::videoDeviceChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::videoPresetChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::videoFramerateChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::videoDefinitionChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::showVideoCodecsChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::cameraModeChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::gridCameraModeChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::activeSpeakerCameraModeChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::callCameraModeChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::videoConferenceLayoutChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::haveAtLeastOneVideoCodecChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::autoAnswerStatusChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::autoAnswerVideoStatusChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::autoAnswerDelayChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::showTelKeypadAutomaticallyChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::keepCallsWindowInBackgroundChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::outgoingCallsEnabledChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::callRecorderEnabledChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::automaticallyRecordCallsChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::autoDownloadMaxSizeChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::callPauseEnabledChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::muteMicrophoneEnabledChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::standardChatEnabledChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::secureChatEnabledChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::groupChatEnabledChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::hideEmptyChatRoomsChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::waitRegistrationForCallChanged)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::incallScreenshotEnabledChanged)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::conferenceEnabledChanged)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::videoConferenceEnabledChanged)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::chatNotificationsEnabledChanged)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::chatNotificationSoundEnabledChanged)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::chatNotificationSoundPathChanged)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::fileTransferUrlChanged)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(MediaEncryption );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::mediaEncryptionChanged)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::limeStateChanged)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::contactsEnabledChanged)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::createEphemeralsChatRoomsChanged)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::showNetworkSettingsChanged)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::dtmfsProtocolChanged)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::ipv6EnabledChanged)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::downloadBandWidthChanged)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::uploadBandWidthChanged)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = bool (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::adaptiveRateControlEnabledChanged)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::tcpPortChanged)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::udpPortChanged)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::audioPortRangeChanged)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::videoPortRangeChanged)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::iceEnabledChanged)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::turnEnabledChanged)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::stunServerChanged)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::turnUserChanged)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::turnPasswordChanged)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::dscpSipChanged)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::dscpAudioChanged)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::dscpVideoChanged)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::rlsUriEnabledChanged)) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::rlsUriChanged)) {
                *result = 83;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QFont & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::textMessageFontChanged)) {
                *result = 84;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::textMessageFontSizeChanged)) {
                *result = 85;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QFont & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::emojiFontChanged)) {
                *result = 86;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::emojiFontSizeChanged)) {
                *result = 87;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::savedScreenshotsFolderChanged)) {
                *result = 88;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::savedCallsFolderChanged)) {
                *result = 89;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::savedMVVMChanged)) {
                *result = 90;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::downloadFolderChanged)) {
                *result = 91;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::remoteProvisioningChanged)) {
                *result = 92;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::remoteProvisioningNotChanged)) {
                *result = 93;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::flexiAPIUrlChanged)) {
                *result = 94;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::exitOnCloseChanged)) {
                *result = 95;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::mipmapEnabledChanged)) {
                *result = 96;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::useMinimalTimelineFilterChanged)) {
                *result = 97;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::sipDisplayModeChanged)) {
                *result = 98;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::checkForUpdateEnabledChanged)) {
                *result = 99;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::versionCheckUrlChanged)) {
                *result = 100;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::versionCheckTypeChanged)) {
                *result = 101;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::magicSearchMaxResultsChanged)) {
                *result = 102;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::dontAskAgainInfoEncryptionChanged)) {
                *result = 103;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::haveDontAskAgainChoicesChanged)) {
                *result = 104;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::logsFolderChanged)) {
                *result = 105;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::logsUploadUrlChanged)) {
                *result = 106;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::logsEnabledChanged)) {
                *result = 107;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::fullLogsEnabledChanged)) {
                *result = 108;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::logsEmailChanged)) {
                *result = 109;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::vfsEncryptedChanged)) {
                *result = 110;
                return;
            }
        }
        {
            using _t = void (SettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::contactImporterChanged)) {
                *result = 111;
                return;
            }
        }
        {
            using _t = bool (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::developerSettingsEnabledChanged)) {
                *result = 112;
                return;
            }
        }
        {
            using _t = bool (SettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsModel::isInCallChanged)) {
                *result = 113;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 34:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinphoneEnums::ConferenceLayout >(); break;
        case 75:
        case 74:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SettingsModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getCreateAppSipAccountEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getFetchRemoteConfigurationEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getUseAppSipAccountEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getUseOtherSipAccountEnabled(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getAutoApplyProvisioningConfigUriHandlerEnabled(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getAssistantSupportsPhoneNumbers(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getAssistantRegistrationUrl(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getAssistantLoginUrl(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getAssistantLogoutUrl(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isCguAccepted(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->getDeviceName(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getCaptureGraphRunning(); break;
        case 12: *reinterpret_cast< QStringList*>(_v) = _t->getCaptureDevices(); break;
        case 13: *reinterpret_cast< QStringList*>(_v) = _t->getPlaybackDevices(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getPlaybackGain(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getCaptureGain(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->getCaptureDevice(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->getPlaybackDevice(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->getRingerDevice(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->getRingPath(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->getEchoCancellationEnabled(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->getShowAudioCodecs(); break;
        case 22: *reinterpret_cast< QStringList*>(_v) = _t->getVideoDevices(); break;
        case 23: *reinterpret_cast< QString*>(_v) = _t->getVideoDevice(); break;
        case 24: *reinterpret_cast< QString*>(_v) = _t->getVideoPreset(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->getVideoFramerate(); break;
        case 26: *reinterpret_cast< QVariantList*>(_v) = _t->getSupportedVideoDefinitions(); break;
        case 27: *reinterpret_cast< QVariantMap*>(_v) = _t->getVideoDefinition(); break;
        case 28: *reinterpret_cast< bool*>(_v) = _t->getVideoEnabled(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->getVideoAvailable(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->getShowVideoCodecs(); break;
        case 31: *reinterpret_cast< CameraMode*>(_v) = _t->getGridCameraMode(); break;
        case 32: *reinterpret_cast< CameraMode*>(_v) = _t->getActiveSpeakerCameraMode(); break;
        case 33: *reinterpret_cast< CameraMode*>(_v) = _t->getCallCameraMode(); break;
        case 34: *reinterpret_cast< LinphoneEnums::ConferenceLayout*>(_v) = _t->getVideoConferenceLayout(); break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->getAutoAnswerStatus(); break;
        case 36: *reinterpret_cast< bool*>(_v) = _t->getAutoAnswerVideoStatus(); break;
        case 37: *reinterpret_cast< int*>(_v) = _t->getAutoAnswerDelay(); break;
        case 38: *reinterpret_cast< bool*>(_v) = _t->getShowTelKeypadAutomatically(); break;
        case 39: *reinterpret_cast< bool*>(_v) = _t->getKeepCallsWindowInBackground(); break;
        case 40: *reinterpret_cast< bool*>(_v) = _t->getOutgoingCallsEnabled(); break;
        case 41: *reinterpret_cast< bool*>(_v) = _t->getCallRecorderEnabled(); break;
        case 42: *reinterpret_cast< bool*>(_v) = _t->getAutomaticallyRecordCalls(); break;
        case 43: *reinterpret_cast< int*>(_v) = _t->getAutoDownloadMaxSize(); break;
        case 44: *reinterpret_cast< bool*>(_v) = _t->getCallPauseEnabled(); break;
        case 45: *reinterpret_cast< bool*>(_v) = _t->getMuteMicrophoneEnabled(); break;
        case 46: *reinterpret_cast< bool*>(_v) = _t->getStandardChatEnabled(); break;
        case 47: *reinterpret_cast< bool*>(_v) = _t->getSecureChatEnabled(); break;
        case 48: *reinterpret_cast< bool*>(_v) = _t->getGroupChatEnabled(); break;
        case 49: *reinterpret_cast< bool*>(_v) = _t->getHideEmptyChatRooms(); break;
        case 50: *reinterpret_cast< bool*>(_v) = _t->getWaitRegistrationForCall(); break;
        case 51: *reinterpret_cast< bool*>(_v) = _t->getIncallScreenshotEnabled(); break;
        case 52: *reinterpret_cast< bool*>(_v) = _t->getConferenceEnabled(); break;
        case 53: *reinterpret_cast< bool*>(_v) = _t->getVideoConferenceEnabled(); break;
        case 54: *reinterpret_cast< bool*>(_v) = _t->getChatNotificationsEnabled(); break;
        case 55: *reinterpret_cast< bool*>(_v) = _t->getChatNotificationSoundEnabled(); break;
        case 56: *reinterpret_cast< QString*>(_v) = _t->getChatNotificationSoundPath(); break;
        case 57: *reinterpret_cast< QString*>(_v) = _t->getFileTransferUrl(); break;
        case 58: *reinterpret_cast< bool*>(_v) = _t->getLimeIsSupported(); break;
        case 59: *reinterpret_cast< QVariantList*>(_v) = _t->getSupportedMediaEncryptions(); break;
        case 60: *reinterpret_cast< MediaEncryption*>(_v) = _t->getMediaEncryption(); break;
        case 61: *reinterpret_cast< bool*>(_v) = _t->mandatoryMediaEncryptionEnabled(); break;
        case 62: *reinterpret_cast< bool*>(_v) = _t->getPostQuantumAvailable(); break;
        case 63: *reinterpret_cast< bool*>(_v) = _t->getLimeState(); break;
        case 64: *reinterpret_cast< bool*>(_v) = _t->getContactsEnabled(); break;
        case 65: *reinterpret_cast< bool*>(_v) = _t->getShowNetworkSettings(); break;
        case 66: *reinterpret_cast< bool*>(_v) = _t->getUseSipInfoForDtmfs(); break;
        case 67: *reinterpret_cast< bool*>(_v) = _t->getUseRfc2833ForDtmfs(); break;
        case 68: *reinterpret_cast< bool*>(_v) = _t->getIpv6Enabled(); break;
        case 69: *reinterpret_cast< int*>(_v) = _t->getDownloadBandwidth(); break;
        case 70: *reinterpret_cast< int*>(_v) = _t->getUploadBandwidth(); break;
        case 71: *reinterpret_cast< bool*>(_v) = _t->getAdaptiveRateControlEnabled(); break;
        case 72: *reinterpret_cast< int*>(_v) = _t->getTcpPort(); break;
        case 73: *reinterpret_cast< int*>(_v) = _t->getUdpPort(); break;
        case 74: *reinterpret_cast< QList<int>*>(_v) = _t->getAudioPortRange(); break;
        case 75: *reinterpret_cast< QList<int>*>(_v) = _t->getVideoPortRange(); break;
        case 76: *reinterpret_cast< bool*>(_v) = _t->getIceEnabled(); break;
        case 77: *reinterpret_cast< bool*>(_v) = _t->getTurnEnabled(); break;
        case 78: *reinterpret_cast< QString*>(_v) = _t->getStunServer(); break;
        case 79: *reinterpret_cast< QString*>(_v) = _t->getTurnUser(); break;
        case 80: *reinterpret_cast< QString*>(_v) = _t->getTurnPassword(); break;
        case 81: *reinterpret_cast< int*>(_v) = _t->getDscpSip(); break;
        case 82: *reinterpret_cast< int*>(_v) = _t->getDscpAudio(); break;
        case 83: *reinterpret_cast< int*>(_v) = _t->getDscpVideo(); break;
        case 84: *reinterpret_cast< bool*>(_v) = _t->getRlsUriEnabled(); break;
        case 85: *reinterpret_cast< QString*>(_v) = _t->getRlsUri(); break;
        case 86: *reinterpret_cast< QFont*>(_v) = _t->getTextMessageFont(); break;
        case 87: *reinterpret_cast< int*>(_v) = _t->getTextMessageFontSize(); break;
        case 88: *reinterpret_cast< QFont*>(_v) = _t->getEmojiFont(); break;
        case 89: *reinterpret_cast< int*>(_v) = _t->getEmojiFontSize(); break;
        case 90: *reinterpret_cast< QString*>(_v) = _t->getRemoteProvisioning(); break;
        case 91: *reinterpret_cast< QString*>(_v) = _t->getFlexiAPIUrl(); break;
        case 92: *reinterpret_cast< QString*>(_v) = _t->getSavedScreenshotsFolder(); break;
        case 93: *reinterpret_cast< QString*>(_v) = _t->getSavedCallsFolder(); break;
        case 94: *reinterpret_cast< QString*>(_v) = _t->getMVVMFolder(); break;
        case 95: *reinterpret_cast< QString*>(_v) = _t->getDownloadFolder(); break;
        case 96: *reinterpret_cast< bool*>(_v) = _t->getExitOnClose(); break;
        case 97: *reinterpret_cast< bool*>(_v) = _t->isCheckForUpdateEnabled(); break;
        case 98: *reinterpret_cast< QString*>(_v) = _t->getVersionCheckUrl(); break;
        case 99: *reinterpret_cast< VersionCheckType*>(_v) = _t->getVersionCheckType(); break;
        case 100: *reinterpret_cast< bool*>(_v) = _t->getShowLocalSipAccount(); break;
        case 101: *reinterpret_cast< bool*>(_v) = _t->getShowStartChatButton(); break;
        case 102: *reinterpret_cast< bool*>(_v) = _t->getShowStartVideoCallButton(); break;
        case 103: *reinterpret_cast< bool*>(_v) = _t->isMipmapEnabled(); break;
        case 104: *reinterpret_cast< bool*>(_v) = _t->useMinimalTimelineFilter(); break;
        case 105: *reinterpret_cast< Utils::SipDisplayMode*>(_v) = _t->getSipDisplayMode(); break;
        case 106: *reinterpret_cast< int*>(_v) = _t->getMagicSearchMaxResults(); break;
        case 107: *reinterpret_cast< bool*>(_v) = _t->getDontAskAgainInfoEncryption(); break;
        case 108: *reinterpret_cast< bool*>(_v) = _t->getHaveDontAskAgainChoices(); break;
        case 109: *reinterpret_cast< QString*>(_v) = _t->getLogsFolder(); break;
        case 110: *reinterpret_cast< QString*>(_v) = _t->getLogsUploadUrl(); break;
        case 111: *reinterpret_cast< bool*>(_v) = _t->getLogsEnabled(); break;
        case 112: *reinterpret_cast< bool*>(_v) = _t->getFullLogsEnabled(); break;
        case 113: *reinterpret_cast< QString*>(_v) = _t->getLogsEmail(); break;
        case 114: *reinterpret_cast< bool*>(_v) = _t->getVfsEncrypted(); break;
        case 115: *reinterpret_cast< bool*>(_v) = _t->getDeveloperSettingsEnabled(); break;
        case 116: *reinterpret_cast< bool*>(_v) = _t->getIsInCall(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SettingsModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCreateAppSipAccountEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setFetchRemoteConfigurationEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setUseAppSipAccountEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setUseOtherSipAccountEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setAutoApplyProvisioningConfigUriHandlerEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setAssistantSupportsPhoneNumbers(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setAssistantRegistrationUrl(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setAssistantLoginUrl(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setAssistantLogoutUrl(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->acceptCgu(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setDeviceName(*reinterpret_cast< QString*>(_v)); break;
        case 14: _t->setPlaybackGain(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setCaptureGain(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setCaptureDevice(*reinterpret_cast< QString*>(_v)); break;
        case 17: _t->setPlaybackDevice(*reinterpret_cast< QString*>(_v)); break;
        case 18: _t->setRingerDevice(*reinterpret_cast< QString*>(_v)); break;
        case 19: _t->setRingPath(*reinterpret_cast< QString*>(_v)); break;
        case 20: _t->setEchoCancellationEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 21: _t->setShowAudioCodecs(*reinterpret_cast< bool*>(_v)); break;
        case 23: _t->setVideoDevice(*reinterpret_cast< QString*>(_v)); break;
        case 24: _t->setVideoPreset(*reinterpret_cast< QString*>(_v)); break;
        case 25: _t->setVideoFramerate(*reinterpret_cast< int*>(_v)); break;
        case 27: _t->setVideoDefinition(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 28: _t->setVideoEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 30: _t->setShowVideoCodecs(*reinterpret_cast< bool*>(_v)); break;
        case 31: _t->setGridCameraMode(*reinterpret_cast< CameraMode*>(_v)); break;
        case 32: _t->setActiveSpeakerCameraMode(*reinterpret_cast< CameraMode*>(_v)); break;
        case 33: _t->setCallCameraMode(*reinterpret_cast< CameraMode*>(_v)); break;
        case 34: _t->setVideoConferenceLayout(*reinterpret_cast< LinphoneEnums::ConferenceLayout*>(_v)); break;
        case 35: _t->setAutoAnswerStatus(*reinterpret_cast< bool*>(_v)); break;
        case 36: _t->setAutoAnswerVideoStatus(*reinterpret_cast< bool*>(_v)); break;
        case 37: _t->setAutoAnswerDelay(*reinterpret_cast< int*>(_v)); break;
        case 38: _t->setShowTelKeypadAutomatically(*reinterpret_cast< bool*>(_v)); break;
        case 39: _t->setKeepCallsWindowInBackground(*reinterpret_cast< bool*>(_v)); break;
        case 40: _t->setOutgoingCallsEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 41: _t->setCallRecorderEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 42: _t->setAutomaticallyRecordCalls(*reinterpret_cast< bool*>(_v)); break;
        case 43: _t->setAutoDownloadMaxSize(*reinterpret_cast< int*>(_v)); break;
        case 44: _t->setCallPauseEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 45: _t->setMuteMicrophoneEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 46: _t->setStandardChatEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 47: _t->setSecureChatEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 49: _t->setHideEmptyChatRooms(*reinterpret_cast< bool*>(_v)); break;
        case 50: _t->setWaitRegistrationForCall(*reinterpret_cast< bool*>(_v)); break;
        case 51: _t->setIncallScreenshotEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 52: _t->setConferenceEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 54: _t->setChatNotificationsEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 55: _t->setChatNotificationSoundEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 56: _t->setChatNotificationSoundPath(*reinterpret_cast< QString*>(_v)); break;
        case 57: _t->setFileTransferUrl(*reinterpret_cast< QString*>(_v)); break;
        case 60: _t->setMediaEncryption(*reinterpret_cast< MediaEncryption*>(_v)); break;
        case 61: _t->enableMandatoryMediaEncryption(*reinterpret_cast< bool*>(_v)); break;
        case 63: _t->setLimeState(*reinterpret_cast< bool*>(_v)); break;
        case 64: _t->setContactsEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 65: _t->setShowNetworkSettings(*reinterpret_cast< bool*>(_v)); break;
        case 66: _t->setUseSipInfoForDtmfs(*reinterpret_cast< bool*>(_v)); break;
        case 67: _t->setUseRfc2833ForDtmfs(*reinterpret_cast< bool*>(_v)); break;
        case 68: _t->setIpv6Enabled(*reinterpret_cast< bool*>(_v)); break;
        case 69: _t->setDownloadBandwidth(*reinterpret_cast< int*>(_v)); break;
        case 70: _t->setUploadBandwidth(*reinterpret_cast< int*>(_v)); break;
        case 71: _t->setAdaptiveRateControlEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 72: _t->setTcpPort(*reinterpret_cast< int*>(_v)); break;
        case 73: _t->setUdpPort(*reinterpret_cast< int*>(_v)); break;
        case 74: _t->setAudioPortRange(*reinterpret_cast< QList<int>*>(_v)); break;
        case 75: _t->setVideoPortRange(*reinterpret_cast< QList<int>*>(_v)); break;
        case 76: _t->setIceEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 77: _t->setTurnEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 78: _t->setStunServer(*reinterpret_cast< QString*>(_v)); break;
        case 79: _t->setTurnUser(*reinterpret_cast< QString*>(_v)); break;
        case 80: _t->setTurnPassword(*reinterpret_cast< QString*>(_v)); break;
        case 81: _t->setDscpSip(*reinterpret_cast< int*>(_v)); break;
        case 82: _t->setDscpAudio(*reinterpret_cast< int*>(_v)); break;
        case 83: _t->setDscpVideo(*reinterpret_cast< int*>(_v)); break;
        case 84: _t->setRlsUriEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 85: _t->setRlsUri(*reinterpret_cast< QString*>(_v)); break;
        case 86: _t->setTextMessageFont(*reinterpret_cast< QFont*>(_v)); break;
        case 87: _t->setTextMessageFontSize(*reinterpret_cast< int*>(_v)); break;
        case 88: _t->setEmojiFont(*reinterpret_cast< QFont*>(_v)); break;
        case 89: _t->setEmojiFontSize(*reinterpret_cast< int*>(_v)); break;
        case 90: _t->setRemoteProvisioning(*reinterpret_cast< QString*>(_v)); break;
        case 91: _t->setFlexiAPIUrl(*reinterpret_cast< QString*>(_v)); break;
        case 92: _t->setSavedScreenshotsFolder(*reinterpret_cast< QString*>(_v)); break;
        case 93: _t->setSavedCallsFolder(*reinterpret_cast< QString*>(_v)); break;
        case 94: _t->setMVVMFolder(*reinterpret_cast< QString*>(_v)); break;
        case 95: _t->setDownloadFolder(*reinterpret_cast< QString*>(_v)); break;
        case 96: _t->setExitOnClose(*reinterpret_cast< bool*>(_v)); break;
        case 97: _t->setCheckForUpdateEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 98: _t->setVersionCheckUrl(*reinterpret_cast< QString*>(_v)); break;
        case 99: _t->setVersionCheckType(*reinterpret_cast< VersionCheckType*>(_v)); break;
        case 103: _t->setMipmapEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 104: _t->setUseMinimalTimelineFilter(*reinterpret_cast< bool*>(_v)); break;
        case 105: _t->setSipDisplayMode(*reinterpret_cast< Utils::SipDisplayMode*>(_v)); break;
        case 106: _t->setMagicSearchMaxResults(*reinterpret_cast< int*>(_v)); break;
        case 107: _t->setDontAskAgainInfoEncryption(*reinterpret_cast< bool*>(_v)); break;
        case 109: _t->setLogsFolder(*reinterpret_cast< QString*>(_v)); break;
        case 110: _t->setLogsUploadUrl(*reinterpret_cast< QString*>(_v)); break;
        case 111: _t->setLogsEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 112: _t->setFullLogsEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 113: _t->setLogsEmail(*reinterpret_cast< QString*>(_v)); break;
        case 115: _t->setDeveloperSettingsEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_SettingsModel[] = {
        &Utils::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject SettingsModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SettingsModel.data,
    qt_meta_data_SettingsModel,
    qt_static_metacall,
    qt_meta_extradata_SettingsModel,
    nullptr
} };


const QMetaObject *SettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 143)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 143;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 143)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 143;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 117;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 117;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 117;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 117;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 117;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 117;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SettingsModel::createAppSipAccountEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SettingsModel::fetchRemoteConfigurationEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SettingsModel::useAppSipAccountEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SettingsModel::useOtherSipAccountEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SettingsModel::autoApplyProvisioningConfigUriHandlerEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SettingsModel::assistantSupportsPhoneNumbersChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SettingsModel::assistantRegistrationUrlChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SettingsModel::assistantLoginUrlChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SettingsModel::assistantLogoutUrlChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SettingsModel::cguAcceptedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SettingsModel::deviceNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void SettingsModel::captureGraphRunningChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void SettingsModel::playbackGainChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void SettingsModel::captureGainChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void SettingsModel::captureDevicesChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void SettingsModel::playbackDevicesChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void SettingsModel::captureDeviceChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void SettingsModel::playbackDeviceChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void SettingsModel::ringerDeviceChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void SettingsModel::ringPathChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void SettingsModel::echoCancellationEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void SettingsModel::echoCancellationStatus(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void SettingsModel::showAudioCodecsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void SettingsModel::videoEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void SettingsModel::videoAvailableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void SettingsModel::videoDevicesChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void SettingsModel::videoDeviceChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void SettingsModel::videoPresetChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void SettingsModel::videoFramerateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void SettingsModel::videoDefinitionChanged(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void SettingsModel::showVideoCodecsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void SettingsModel::cameraModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void SettingsModel::gridCameraModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void SettingsModel::activeSpeakerCameraModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void SettingsModel::callCameraModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void SettingsModel::videoConferenceLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void SettingsModel::haveAtLeastOneVideoCodecChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void SettingsModel::autoAnswerStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void SettingsModel::autoAnswerVideoStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void SettingsModel::autoAnswerDelayChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void SettingsModel::showTelKeypadAutomaticallyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void SettingsModel::keepCallsWindowInBackgroundChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void SettingsModel::outgoingCallsEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void SettingsModel::callRecorderEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void SettingsModel::automaticallyRecordCallsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void SettingsModel::autoDownloadMaxSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void SettingsModel::callPauseEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void SettingsModel::muteMicrophoneEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void SettingsModel::standardChatEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void SettingsModel::secureChatEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 49, nullptr);
}

// SIGNAL 50
void SettingsModel::groupChatEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 50, nullptr);
}

// SIGNAL 51
void SettingsModel::hideEmptyChatRoomsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void SettingsModel::waitRegistrationForCallChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void SettingsModel::incallScreenshotEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void SettingsModel::conferenceEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void SettingsModel::videoConferenceEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 55, nullptr);
}

// SIGNAL 56
void SettingsModel::chatNotificationsEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void SettingsModel::chatNotificationSoundEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void SettingsModel::chatNotificationSoundPathChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void SettingsModel::fileTransferUrlChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void SettingsModel::mediaEncryptionChanged(MediaEncryption _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void SettingsModel::limeStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void SettingsModel::contactsEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void SettingsModel::createEphemeralsChatRoomsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 63, nullptr);
}

// SIGNAL 64
void SettingsModel::showNetworkSettingsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void SettingsModel::dtmfsProtocolChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 65, nullptr);
}

// SIGNAL 66
void SettingsModel::ipv6EnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void SettingsModel::downloadBandWidthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void SettingsModel::uploadBandWidthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
bool SettingsModel::adaptiveRateControlEnabledChanged(bool _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
    return _t0;
}

// SIGNAL 70
void SettingsModel::tcpPortChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void SettingsModel::udpPortChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void SettingsModel::audioPortRangeChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void SettingsModel::videoPortRangeChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void SettingsModel::iceEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void SettingsModel::turnEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void SettingsModel::stunServerChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void SettingsModel::turnUserChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void SettingsModel::turnPasswordChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void SettingsModel::dscpSipChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void SettingsModel::dscpAudioChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void SettingsModel::dscpVideoChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void SettingsModel::rlsUriEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void SettingsModel::rlsUriChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 83, nullptr);
}

// SIGNAL 84
void SettingsModel::textMessageFontChanged(const QFont & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void SettingsModel::textMessageFontSizeChanged(const int & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void SettingsModel::emojiFontChanged(const QFont & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void SettingsModel::emojiFontSizeChanged(const int & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void SettingsModel::savedScreenshotsFolderChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void SettingsModel::savedCallsFolderChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void SettingsModel::savedMVVMChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void SettingsModel::downloadFolderChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void SettingsModel::remoteProvisioningChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void SettingsModel::remoteProvisioningNotChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void SettingsModel::flexiAPIUrlChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void SettingsModel::exitOnCloseChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void SettingsModel::mipmapEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 96, nullptr);
}

// SIGNAL 97
void SettingsModel::useMinimalTimelineFilterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 97, nullptr);
}

// SIGNAL 98
void SettingsModel::sipDisplayModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 98, nullptr);
}

// SIGNAL 99
void SettingsModel::checkForUpdateEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 99, nullptr);
}

// SIGNAL 100
void SettingsModel::versionCheckUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 100, nullptr);
}

// SIGNAL 101
void SettingsModel::versionCheckTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 101, nullptr);
}

// SIGNAL 102
void SettingsModel::magicSearchMaxResultsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 102, nullptr);
}

// SIGNAL 103
void SettingsModel::dontAskAgainInfoEncryptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 103, nullptr);
}

// SIGNAL 104
void SettingsModel::haveDontAskAgainChoicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 104, nullptr);
}

// SIGNAL 105
void SettingsModel::logsFolderChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 105, _a);
}

// SIGNAL 106
void SettingsModel::logsUploadUrlChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void SettingsModel::logsEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void SettingsModel::fullLogsEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 108, nullptr);
}

// SIGNAL 109
void SettingsModel::logsEmailChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void SettingsModel::vfsEncryptedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 110, nullptr);
}

// SIGNAL 111
void SettingsModel::contactImporterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 111, nullptr);
}

// SIGNAL 112
bool SettingsModel::developerSettingsEnabledChanged(bool _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 112, _a);
    return _t0;
}

// SIGNAL 113
bool SettingsModel::isInCallChanged(bool _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 113, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
