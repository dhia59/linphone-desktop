/****************************************************************************
** Meta object code from reading C++ file 'LinphoneEnums.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/utils/LinphoneEnums.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinphoneEnums.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LinphoneEnums_t {
    QByteArrayData data[96];
    char stringdata0[2622];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinphoneEnums_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinphoneEnums_t qt_meta_stringdata_LinphoneEnums = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LinphoneEnums"
QT_MOC_LITERAL(1, 14, 15), // "MediaEncryption"
QT_MOC_LITERAL(2, 30, 19), // "MediaEncryptionNone"
QT_MOC_LITERAL(3, 50, 19), // "MediaEncryptionDtls"
QT_MOC_LITERAL(4, 70, 19), // "MediaEncryptionSrtp"
QT_MOC_LITERAL(5, 90, 19), // "MediaEncryptionZrtp"
QT_MOC_LITERAL(6, 110, 16), // "FriendCapability"
QT_MOC_LITERAL(7, 127, 20), // "FriendCapabilityNone"
QT_MOC_LITERAL(8, 148, 25), // "FriendCapabilityGroupChat"
QT_MOC_LITERAL(9, 174, 24), // "FriendCapabilityLimeX3Dh"
QT_MOC_LITERAL(10, 199, 33), // "FriendCapabilityEphemeralMess..."
QT_MOC_LITERAL(11, 233, 12), // "EventLogType"
QT_MOC_LITERAL(12, 246, 16), // "EventLogTypeNone"
QT_MOC_LITERAL(13, 263, 29), // "EventLogTypeConferenceCreated"
QT_MOC_LITERAL(14, 293, 32), // "EventLogTypeConferenceTerminated"
QT_MOC_LITERAL(15, 326, 33), // "EventLogTypeConferenceCallSta..."
QT_MOC_LITERAL(16, 360, 31), // "EventLogTypeConferenceCallEnded"
QT_MOC_LITERAL(17, 392, 33), // "EventLogTypeConferenceChatMes..."
QT_MOC_LITERAL(18, 426, 38), // "EventLogTypeConferencePartici..."
QT_MOC_LITERAL(19, 465, 40), // "EventLogTypeConferencePartici..."
QT_MOC_LITERAL(20, 506, 41), // "EventLogTypeConferencePartici..."
QT_MOC_LITERAL(21, 548, 43), // "EventLogTypeConferencePartici..."
QT_MOC_LITERAL(22, 592, 44), // "EventLogTypeConferencePartici..."
QT_MOC_LITERAL(23, 637, 46), // "EventLogTypeConferencePartici..."
QT_MOC_LITERAL(24, 684, 63), // "EventLogTypeConferencePartici..."
QT_MOC_LITERAL(25, 748, 36), // "EventLogTypeConferenceSubject..."
QT_MOC_LITERAL(26, 785, 43), // "EventLogTypeConferenceAvailab..."
QT_MOC_LITERAL(27, 829, 35), // "EventLogTypeConferenceSecurit..."
QT_MOC_LITERAL(28, 865, 53), // "EventLogTypeConferenceEphemer..."
QT_MOC_LITERAL(29, 919, 45), // "EventLogTypeConferenceEphemer..."
QT_MOC_LITERAL(30, 965, 46), // "EventLogTypeConferenceEphemer..."
QT_MOC_LITERAL(31, 1012, 16), // "ChatMessageState"
QT_MOC_LITERAL(32, 1029, 20), // "ChatMessageStateIdle"
QT_MOC_LITERAL(33, 1050, 26), // "ChatMessageStateInProgress"
QT_MOC_LITERAL(34, 1077, 25), // "ChatMessageStateDelivered"
QT_MOC_LITERAL(35, 1103, 28), // "ChatMessageStateNotDelivered"
QT_MOC_LITERAL(36, 1132, 33), // "ChatMessageStateFileTransferE..."
QT_MOC_LITERAL(37, 1166, 32), // "ChatMessageStateFileTransferDone"
QT_MOC_LITERAL(38, 1199, 31), // "ChatMessageStateDeliveredToUser"
QT_MOC_LITERAL(39, 1231, 25), // "ChatMessageStateDisplayed"
QT_MOC_LITERAL(40, 1257, 38), // "ChatMessageStateFileTransferI..."
QT_MOC_LITERAL(41, 1296, 13), // "ChatRoomState"
QT_MOC_LITERAL(42, 1310, 17), // "ChatRoomStateNone"
QT_MOC_LITERAL(43, 1328, 25), // "ChatRoomStateInstantiated"
QT_MOC_LITERAL(44, 1354, 28), // "ChatRoomStateCreationPending"
QT_MOC_LITERAL(45, 1383, 20), // "ChatRoomStateCreated"
QT_MOC_LITERAL(46, 1404, 27), // "ChatRoomStateCreationFailed"
QT_MOC_LITERAL(47, 1432, 31), // "ChatRoomStateTerminationPending"
QT_MOC_LITERAL(48, 1464, 23), // "ChatRoomStateTerminated"
QT_MOC_LITERAL(49, 1488, 30), // "ChatRoomStateTerminationFailed"
QT_MOC_LITERAL(50, 1519, 20), // "ChatRoomStateDeleted"
QT_MOC_LITERAL(51, 1540, 10), // "CallStatus"
QT_MOC_LITERAL(52, 1551, 18), // "CallStatusDeclined"
QT_MOC_LITERAL(53, 1570, 16), // "CallStatusMissed"
QT_MOC_LITERAL(54, 1587, 17), // "CallStatusSuccess"
QT_MOC_LITERAL(55, 1605, 17), // "CallStatusAborted"
QT_MOC_LITERAL(56, 1623, 22), // "CallStatusEarlyAborted"
QT_MOC_LITERAL(57, 1646, 27), // "CallStatusAcceptedElsewhere"
QT_MOC_LITERAL(58, 1674, 27), // "CallStatusDeclinedElsewhere"
QT_MOC_LITERAL(59, 1702, 16), // "ConferenceLayout"
QT_MOC_LITERAL(60, 1719, 20), // "ConferenceLayoutGrid"
QT_MOC_LITERAL(61, 1740, 29), // "ConferenceLayoutActiveSpeaker"
QT_MOC_LITERAL(62, 1770, 25), // "ConferenceLayoutAudioOnly"
QT_MOC_LITERAL(63, 1796, 19), // "ConferenceInfoState"
QT_MOC_LITERAL(64, 1816, 22), // "ConferenceInfoStateNew"
QT_MOC_LITERAL(65, 1839, 26), // "ConferenceInfoStateUpdated"
QT_MOC_LITERAL(66, 1866, 28), // "ConferenceInfoStateCancelled"
QT_MOC_LITERAL(67, 1895, 24), // "ConferenceSchedulerState"
QT_MOC_LITERAL(68, 1920, 41), // "ConferenceSchedulerStateAlloc..."
QT_MOC_LITERAL(69, 1962, 29), // "ConferenceSchedulerStateError"
QT_MOC_LITERAL(70, 1992, 28), // "ConferenceSchedulerStateIdle"
QT_MOC_LITERAL(71, 2021, 29), // "ConferenceSchedulerStateReady"
QT_MOC_LITERAL(72, 2051, 32), // "ConferenceSchedulerStateUpdating"
QT_MOC_LITERAL(73, 2084, 22), // "ParticipantDeviceState"
QT_MOC_LITERAL(74, 2107, 29), // "ParticipantDeviceStateJoining"
QT_MOC_LITERAL(75, 2137, 29), // "ParticipantDeviceStatePresent"
QT_MOC_LITERAL(76, 2167, 29), // "ParticipantDeviceStateLeaving"
QT_MOC_LITERAL(77, 2197, 26), // "ParticipantDeviceStateLeft"
QT_MOC_LITERAL(78, 2224, 41), // "ParticipantDeviceStateSchedul..."
QT_MOC_LITERAL(79, 2266, 41), // "ParticipantDeviceStateSchedul..."
QT_MOC_LITERAL(80, 2308, 28), // "ParticipantDeviceStateOnHold"
QT_MOC_LITERAL(81, 2337, 30), // "ParticipantDeviceStateAlerting"
QT_MOC_LITERAL(82, 2368, 34), // "ParticipantDeviceStateMutedBy..."
QT_MOC_LITERAL(83, 2403, 10), // "TunnelMode"
QT_MOC_LITERAL(84, 2414, 17), // "TunnelModeDisable"
QT_MOC_LITERAL(85, 2432, 16), // "TunnelModeEnable"
QT_MOC_LITERAL(86, 2449, 14), // "TunnelModeAuto"
QT_MOC_LITERAL(87, 2464, 13), // "RecorderState"
QT_MOC_LITERAL(88, 2478, 19), // "RecorderStateClosed"
QT_MOC_LITERAL(89, 2498, 19), // "RecorderStatePaused"
QT_MOC_LITERAL(90, 2518, 20), // "RecorderStateRunning"
QT_MOC_LITERAL(91, 2539, 13), // "TransportType"
QT_MOC_LITERAL(92, 2553, 17), // "TransportTypeDtls"
QT_MOC_LITERAL(93, 2571, 16), // "TransportTypeTcp"
QT_MOC_LITERAL(94, 2588, 16), // "TransportTypeTls"
QT_MOC_LITERAL(95, 2605, 16) // "TransportTypeUdp"

    },
    "LinphoneEnums\0MediaEncryption\0"
    "MediaEncryptionNone\0MediaEncryptionDtls\0"
    "MediaEncryptionSrtp\0MediaEncryptionZrtp\0"
    "FriendCapability\0FriendCapabilityNone\0"
    "FriendCapabilityGroupChat\0"
    "FriendCapabilityLimeX3Dh\0"
    "FriendCapabilityEphemeralMessages\0"
    "EventLogType\0EventLogTypeNone\0"
    "EventLogTypeConferenceCreated\0"
    "EventLogTypeConferenceTerminated\0"
    "EventLogTypeConferenceCallStarted\0"
    "EventLogTypeConferenceCallEnded\0"
    "EventLogTypeConferenceChatMessage\0"
    "EventLogTypeConferenceParticipantAdded\0"
    "EventLogTypeConferenceParticipantRemoved\0"
    "EventLogTypeConferenceParticipantSetAdmin\0"
    "EventLogTypeConferenceParticipantUnsetAdmin\0"
    "EventLogTypeConferenceParticipantDeviceAdded\0"
    "EventLogTypeConferenceParticipantDeviceRemoved\0"
    "EventLogTypeConferenceParticipantDeviceMediaAvailabilityChanged\0"
    "EventLogTypeConferenceSubjectChanged\0"
    "EventLogTypeConferenceAvailableMediaChanged\0"
    "EventLogTypeConferenceSecurityEvent\0"
    "EventLogTypeConferenceEphemeralMessageLifetimeChanged\0"
    "EventLogTypeConferenceEphemeralMessageEnabled\0"
    "EventLogTypeConferenceEphemeralMessageDisabled\0"
    "ChatMessageState\0ChatMessageStateIdle\0"
    "ChatMessageStateInProgress\0"
    "ChatMessageStateDelivered\0"
    "ChatMessageStateNotDelivered\0"
    "ChatMessageStateFileTransferError\0"
    "ChatMessageStateFileTransferDone\0"
    "ChatMessageStateDeliveredToUser\0"
    "ChatMessageStateDisplayed\0"
    "ChatMessageStateFileTransferInProgress\0"
    "ChatRoomState\0ChatRoomStateNone\0"
    "ChatRoomStateInstantiated\0"
    "ChatRoomStateCreationPending\0"
    "ChatRoomStateCreated\0ChatRoomStateCreationFailed\0"
    "ChatRoomStateTerminationPending\0"
    "ChatRoomStateTerminated\0"
    "ChatRoomStateTerminationFailed\0"
    "ChatRoomStateDeleted\0CallStatus\0"
    "CallStatusDeclined\0CallStatusMissed\0"
    "CallStatusSuccess\0CallStatusAborted\0"
    "CallStatusEarlyAborted\0"
    "CallStatusAcceptedElsewhere\0"
    "CallStatusDeclinedElsewhere\0"
    "ConferenceLayout\0ConferenceLayoutGrid\0"
    "ConferenceLayoutActiveSpeaker\0"
    "ConferenceLayoutAudioOnly\0ConferenceInfoState\0"
    "ConferenceInfoStateNew\0"
    "ConferenceInfoStateUpdated\0"
    "ConferenceInfoStateCancelled\0"
    "ConferenceSchedulerState\0"
    "ConferenceSchedulerStateAllocationPending\0"
    "ConferenceSchedulerStateError\0"
    "ConferenceSchedulerStateIdle\0"
    "ConferenceSchedulerStateReady\0"
    "ConferenceSchedulerStateUpdating\0"
    "ParticipantDeviceState\0"
    "ParticipantDeviceStateJoining\0"
    "ParticipantDeviceStatePresent\0"
    "ParticipantDeviceStateLeaving\0"
    "ParticipantDeviceStateLeft\0"
    "ParticipantDeviceStateScheduledForJoining\0"
    "ParticipantDeviceStateScheduledForLeaving\0"
    "ParticipantDeviceStateOnHold\0"
    "ParticipantDeviceStateAlerting\0"
    "ParticipantDeviceStateMutedByFocus\0"
    "TunnelMode\0TunnelModeDisable\0"
    "TunnelModeEnable\0TunnelModeAuto\0"
    "RecorderState\0RecorderStateClosed\0"
    "RecorderStatePaused\0RecorderStateRunning\0"
    "TransportType\0TransportTypeDtls\0"
    "TransportTypeTcp\0TransportTypeTls\0"
    "TransportTypeUdp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinphoneEnums[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
      13,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    4,   79,
       6,    6, 0x0,    4,   87,
      11,   11, 0x0,   19,   95,
      31,   31, 0x0,    9,  133,
      41,   41, 0x0,    9,  151,
      51,   51, 0x0,    7,  169,
      59,   59, 0x0,    3,  183,
      63,   63, 0x0,    3,  189,
      67,   67, 0x0,    5,  195,
      73,   73, 0x0,    9,  205,
      83,   83, 0x0,    3,  223,
      87,   87, 0x0,    3,  229,
      91,   91, 0x0,    4,  235,

 // enum data: key, value
       2, uint(LinphoneEnums::MediaEncryptionNone),
       3, uint(LinphoneEnums::MediaEncryptionDtls),
       4, uint(LinphoneEnums::MediaEncryptionSrtp),
       5, uint(LinphoneEnums::MediaEncryptionZrtp),
       7, uint(LinphoneEnums::FriendCapabilityNone),
       8, uint(LinphoneEnums::FriendCapabilityGroupChat),
       9, uint(LinphoneEnums::FriendCapabilityLimeX3Dh),
      10, uint(LinphoneEnums::FriendCapabilityEphemeralMessages),
      12, uint(LinphoneEnums::EventLogTypeNone),
      13, uint(LinphoneEnums::EventLogTypeConferenceCreated),
      14, uint(LinphoneEnums::EventLogTypeConferenceTerminated),
      15, uint(LinphoneEnums::EventLogTypeConferenceCallStarted),
      16, uint(LinphoneEnums::EventLogTypeConferenceCallEnded),
      17, uint(LinphoneEnums::EventLogTypeConferenceChatMessage),
      18, uint(LinphoneEnums::EventLogTypeConferenceParticipantAdded),
      19, uint(LinphoneEnums::EventLogTypeConferenceParticipantRemoved),
      20, uint(LinphoneEnums::EventLogTypeConferenceParticipantSetAdmin),
      21, uint(LinphoneEnums::EventLogTypeConferenceParticipantUnsetAdmin),
      22, uint(LinphoneEnums::EventLogTypeConferenceParticipantDeviceAdded),
      23, uint(LinphoneEnums::EventLogTypeConferenceParticipantDeviceRemoved),
      24, uint(LinphoneEnums::EventLogTypeConferenceParticipantDeviceMediaAvailabilityChanged),
      25, uint(LinphoneEnums::EventLogTypeConferenceSubjectChanged),
      26, uint(LinphoneEnums::EventLogTypeConferenceAvailableMediaChanged),
      27, uint(LinphoneEnums::EventLogTypeConferenceSecurityEvent),
      28, uint(LinphoneEnums::EventLogTypeConferenceEphemeralMessageLifetimeChanged),
      29, uint(LinphoneEnums::EventLogTypeConferenceEphemeralMessageEnabled),
      30, uint(LinphoneEnums::EventLogTypeConferenceEphemeralMessageDisabled),
      32, uint(LinphoneEnums::ChatMessageStateIdle),
      33, uint(LinphoneEnums::ChatMessageStateInProgress),
      34, uint(LinphoneEnums::ChatMessageStateDelivered),
      35, uint(LinphoneEnums::ChatMessageStateNotDelivered),
      36, uint(LinphoneEnums::ChatMessageStateFileTransferError),
      37, uint(LinphoneEnums::ChatMessageStateFileTransferDone),
      38, uint(LinphoneEnums::ChatMessageStateDeliveredToUser),
      39, uint(LinphoneEnums::ChatMessageStateDisplayed),
      40, uint(LinphoneEnums::ChatMessageStateFileTransferInProgress),
      42, uint(LinphoneEnums::ChatRoomStateNone),
      43, uint(LinphoneEnums::ChatRoomStateInstantiated),
      44, uint(LinphoneEnums::ChatRoomStateCreationPending),
      45, uint(LinphoneEnums::ChatRoomStateCreated),
      46, uint(LinphoneEnums::ChatRoomStateCreationFailed),
      47, uint(LinphoneEnums::ChatRoomStateTerminationPending),
      48, uint(LinphoneEnums::ChatRoomStateTerminated),
      49, uint(LinphoneEnums::ChatRoomStateTerminationFailed),
      50, uint(LinphoneEnums::ChatRoomStateDeleted),
      52, uint(LinphoneEnums::CallStatusDeclined),
      53, uint(LinphoneEnums::CallStatusMissed),
      54, uint(LinphoneEnums::CallStatusSuccess),
      55, uint(LinphoneEnums::CallStatusAborted),
      56, uint(LinphoneEnums::CallStatusEarlyAborted),
      57, uint(LinphoneEnums::CallStatusAcceptedElsewhere),
      58, uint(LinphoneEnums::CallStatusDeclinedElsewhere),
      60, uint(LinphoneEnums::ConferenceLayoutGrid),
      61, uint(LinphoneEnums::ConferenceLayoutActiveSpeaker),
      62, uint(LinphoneEnums::ConferenceLayoutAudioOnly),
      64, uint(LinphoneEnums::ConferenceInfoStateNew),
      65, uint(LinphoneEnums::ConferenceInfoStateUpdated),
      66, uint(LinphoneEnums::ConferenceInfoStateCancelled),
      68, uint(LinphoneEnums::ConferenceSchedulerStateAllocationPending),
      69, uint(LinphoneEnums::ConferenceSchedulerStateError),
      70, uint(LinphoneEnums::ConferenceSchedulerStateIdle),
      71, uint(LinphoneEnums::ConferenceSchedulerStateReady),
      72, uint(LinphoneEnums::ConferenceSchedulerStateUpdating),
      74, uint(LinphoneEnums::ParticipantDeviceStateJoining),
      75, uint(LinphoneEnums::ParticipantDeviceStatePresent),
      76, uint(LinphoneEnums::ParticipantDeviceStateLeaving),
      77, uint(LinphoneEnums::ParticipantDeviceStateLeft),
      78, uint(LinphoneEnums::ParticipantDeviceStateScheduledForJoining),
      79, uint(LinphoneEnums::ParticipantDeviceStateScheduledForLeaving),
      80, uint(LinphoneEnums::ParticipantDeviceStateOnHold),
      81, uint(LinphoneEnums::ParticipantDeviceStateAlerting),
      82, uint(LinphoneEnums::ParticipantDeviceStateMutedByFocus),
      84, uint(LinphoneEnums::TunnelModeDisable),
      85, uint(LinphoneEnums::TunnelModeEnable),
      86, uint(LinphoneEnums::TunnelModeAuto),
      88, uint(LinphoneEnums::RecorderStateClosed),
      89, uint(LinphoneEnums::RecorderStatePaused),
      90, uint(LinphoneEnums::RecorderStateRunning),
      92, uint(LinphoneEnums::TransportTypeDtls),
      93, uint(LinphoneEnums::TransportTypeTcp),
      94, uint(LinphoneEnums::TransportTypeTls),
      95, uint(LinphoneEnums::TransportTypeUdp),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject LinphoneEnums::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_LinphoneEnums.data,
    qt_meta_data_LinphoneEnums,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
