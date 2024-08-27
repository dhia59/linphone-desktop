/****************************************************************************
** Meta object code from reading C++ file 'ChatRoomModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/chat-room/ChatRoomModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatRoomModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatRoomModel_t {
    QByteArrayData data[148];
    char stringdata0[2850];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatRoomModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatRoomModel_t qt_meta_stringdata_ChatRoomModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ChatRoomModel"
QT_MOC_LITERAL(1, 14, 24), // "isRemoteComposingChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 21), // "entriesLoadingChanged"
QT_MOC_LITERAL(4, 62, 7), // "loading"
QT_MOC_LITERAL(5, 70, 17), // "moreEntriesLoaded"
QT_MOC_LITERAL(6, 88, 5), // "count"
QT_MOC_LITERAL(7, 94, 17), // "allEntriesRemoved"
QT_MOC_LITERAL(8, 112, 29), // "QSharedPointer<ChatRoomModel>"
QT_MOC_LITERAL(9, 142, 5), // "model"
QT_MOC_LITERAL(10, 148, 16), // "lastEntryRemoved"
QT_MOC_LITERAL(11, 165, 11), // "messageSent"
QT_MOC_LITERAL(12, 177, 38), // "std::shared_ptr<linphone::Cha..."
QT_MOC_LITERAL(13, 216, 7), // "message"
QT_MOC_LITERAL(14, 224, 15), // "messageReceived"
QT_MOC_LITERAL(15, 240, 17), // "messageCountReset"
QT_MOC_LITERAL(16, 258, 7), // "focused"
QT_MOC_LITERAL(17, 266, 22), // "fullPeerAddressChanged"
QT_MOC_LITERAL(18, 289, 19), // "participantsChanged"
QT_MOC_LITERAL(19, 309, 14), // "subjectChanged"
QT_MOC_LITERAL(20, 324, 7), // "subject"
QT_MOC_LITERAL(21, 332, 15), // "usernameChanged"
QT_MOC_LITERAL(22, 348, 13), // "avatarChanged"
QT_MOC_LITERAL(23, 362, 21), // "presenceStatusChanged"
QT_MOC_LITERAL(24, 384, 21), // "lastUpdateTimeChanged"
QT_MOC_LITERAL(25, 406, 26), // "unreadMessagesCountChanged"
QT_MOC_LITERAL(26, 433, 23), // "missedCallsCountChanged"
QT_MOC_LITERAL(27, 457, 20), // "securityLevelChanged"
QT_MOC_LITERAL(28, 478, 13), // "securityLevel"
QT_MOC_LITERAL(29, 492, 19), // "groupEnabledChanged"
QT_MOC_LITERAL(30, 512, 12), // "groupEnabled"
QT_MOC_LITERAL(31, 525, 16), // "isMeAdminChanged"
QT_MOC_LITERAL(32, 542, 12), // "stateChanged"
QT_MOC_LITERAL(33, 555, 5), // "state"
QT_MOC_LITERAL(34, 561, 17), // "isReadOnlyChanged"
QT_MOC_LITERAL(35, 579, 23), // "ephemeralEnabledChanged"
QT_MOC_LITERAL(36, 603, 24), // "ephemeralLifetimeChanged"
QT_MOC_LITERAL(37, 628, 21), // "canBeEphemeralChanged"
QT_MOC_LITERAL(38, 650, 24), // "markAsReadEnabledChanged"
QT_MOC_LITERAL(39, 675, 15), // "chatRoomDeleted"
QT_MOC_LITERAL(40, 691, 12), // "replyChanged"
QT_MOC_LITERAL(41, 704, 15), // "updatingChanged"
QT_MOC_LITERAL(42, 720, 27), // "notificationsEnabledChanged"
QT_MOC_LITERAL(43, 748, 13), // "securityEvent"
QT_MOC_LITERAL(44, 762, 41), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(45, 804, 8), // "eventLog"
QT_MOC_LITERAL(46, 813, 16), // "participantAdded"
QT_MOC_LITERAL(47, 830, 18), // "participantRemoved"
QT_MOC_LITERAL(48, 849, 22), // "participantDeviceAdded"
QT_MOC_LITERAL(49, 872, 24), // "participantDeviceRemoved"
QT_MOC_LITERAL(50, 897, 29), // "participantAdminStatusChanged"
QT_MOC_LITERAL(51, 927, 44), // "participantRegistrationSubscr..."
QT_MOC_LITERAL(52, 972, 40), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(53, 1013, 18), // "participantAddress"
QT_MOC_LITERAL(54, 1032, 46), // "participantRegistrationUnsubs..."
QT_MOC_LITERAL(55, 1079, 16), // "conferenceJoined"
QT_MOC_LITERAL(56, 1096, 14), // "conferenceLeft"
QT_MOC_LITERAL(57, 1111, 21), // "onIsComposingReceived"
QT_MOC_LITERAL(58, 1133, 35), // "std::shared_ptr<linphone::Cha..."
QT_MOC_LITERAL(59, 1169, 8), // "chatRoom"
QT_MOC_LITERAL(60, 1178, 13), // "remoteAddress"
QT_MOC_LITERAL(61, 1192, 11), // "isComposing"
QT_MOC_LITERAL(62, 1204, 17), // "onMessageReceived"
QT_MOC_LITERAL(63, 1222, 18), // "onMessagesReceived"
QT_MOC_LITERAL(64, 1241, 50), // "std::list<std::shared_ptr<lin..."
QT_MOC_LITERAL(65, 1292, 8), // "messages"
QT_MOC_LITERAL(66, 1301, 10), // "onNewEvent"
QT_MOC_LITERAL(67, 1312, 11), // "onNewEvents"
QT_MOC_LITERAL(68, 1324, 47), // "std::list<std::shared_ptr<lin..."
QT_MOC_LITERAL(69, 1372, 9), // "eventLogs"
QT_MOC_LITERAL(70, 1382, 21), // "onChatMessageReceived"
QT_MOC_LITERAL(71, 1404, 22), // "onChatMessagesReceived"
QT_MOC_LITERAL(72, 1427, 20), // "onChatMessageSending"
QT_MOC_LITERAL(73, 1448, 17), // "onChatMessageSent"
QT_MOC_LITERAL(74, 1466, 18), // "onParticipantAdded"
QT_MOC_LITERAL(75, 1485, 20), // "onParticipantRemoved"
QT_MOC_LITERAL(76, 1506, 31), // "onParticipantAdminStatusChanged"
QT_MOC_LITERAL(77, 1538, 14), // "onStateChanged"
QT_MOC_LITERAL(78, 1553, 25), // "linphone::ChatRoom::State"
QT_MOC_LITERAL(79, 1579, 8), // "newState"
QT_MOC_LITERAL(80, 1588, 15), // "onSecurityEvent"
QT_MOC_LITERAL(81, 1604, 16), // "onSubjectChanged"
QT_MOC_LITERAL(82, 1621, 30), // "onUndecryptableMessageReceived"
QT_MOC_LITERAL(83, 1652, 24), // "onParticipantDeviceAdded"
QT_MOC_LITERAL(84, 1677, 26), // "onParticipantDeviceRemoved"
QT_MOC_LITERAL(85, 1704, 18), // "onConferenceJoined"
QT_MOC_LITERAL(86, 1723, 16), // "onConferenceLeft"
QT_MOC_LITERAL(87, 1740, 16), // "onEphemeralEvent"
QT_MOC_LITERAL(88, 1757, 30), // "onEphemeralMessageTimerStarted"
QT_MOC_LITERAL(89, 1788, 25), // "onEphemeralMessageDeleted"
QT_MOC_LITERAL(90, 1814, 29), // "onConferenceAddressGeneration"
QT_MOC_LITERAL(91, 1844, 46), // "onParticipantRegistrationSubs..."
QT_MOC_LITERAL(92, 1891, 48), // "onParticipantRegistrationUnsu..."
QT_MOC_LITERAL(93, 1940, 27), // "onChatMessageShouldBeStored"
QT_MOC_LITERAL(94, 1968, 40), // "onChatMessageParticipantImdnS..."
QT_MOC_LITERAL(95, 2009, 53), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(96, 2063, 11), // "removeEntry"
QT_MOC_LITERAL(97, 2075, 10), // "ChatEvent*"
QT_MOC_LITERAL(98, 2086, 5), // "entry"
QT_MOC_LITERAL(99, 2092, 26), // "emitFullPeerAddressChanged"
QT_MOC_LITERAL(100, 2119, 14), // "getPeerAddress"
QT_MOC_LITERAL(101, 2134, 15), // "getLocalAddress"
QT_MOC_LITERAL(102, 2150, 18), // "getFullPeerAddress"
QT_MOC_LITERAL(103, 2169, 19), // "getFullLocalAddress"
QT_MOC_LITERAL(104, 2189, 20), // "getConferenceAddress"
QT_MOC_LITERAL(105, 2210, 21), // "getParticipantAddress"
QT_MOC_LITERAL(106, 2232, 8), // "isSecure"
QT_MOC_LITERAL(107, 2241, 14), // "deleteChatRoom"
QT_MOC_LITERAL(108, 2256, 13), // "leaveChatRoom"
QT_MOC_LITERAL(109, 2270, 18), // "updateParticipants"
QT_MOC_LITERAL(110, 2289, 12), // "participants"
QT_MOC_LITERAL(111, 2302, 14), // "forwardMessage"
QT_MOC_LITERAL(112, 2317, 17), // "ChatMessageModel*"
QT_MOC_LITERAL(113, 2335, 17), // "resetMessageCount"
QT_MOC_LITERAL(114, 2353, 15), // "loadMoreEntries"
QT_MOC_LITERAL(115, 2369, 15), // "loadTillMessage"
QT_MOC_LITERAL(116, 2385, 14), // "lastUpdateTime"
QT_MOC_LITERAL(117, 2400, 19), // "unreadMessagesCount"
QT_MOC_LITERAL(118, 2420, 16), // "missedCallsCount"
QT_MOC_LITERAL(119, 2437, 12), // "isConference"
QT_MOC_LITERAL(120, 2450, 10), // "isOneToOne"
QT_MOC_LITERAL(121, 2461, 14), // "haveEncryption"
QT_MOC_LITERAL(122, 2476, 9), // "isMeAdmin"
QT_MOC_LITERAL(123, 2486, 21), // "canHandleParticipants"
QT_MOC_LITERAL(124, 2508, 9), // "composers"
QT_MOC_LITERAL(125, 2518, 14), // "QList<QString>"
QT_MOC_LITERAL(126, 2533, 10), // "isReadOnly"
QT_MOC_LITERAL(127, 2544, 8), // "updating"
QT_MOC_LITERAL(128, 2553, 10), // "sipAddress"
QT_MOC_LITERAL(129, 2564, 17), // "sipAddressUriOnly"
QT_MOC_LITERAL(130, 2582, 8), // "username"
QT_MOC_LITERAL(131, 2591, 6), // "avatar"
QT_MOC_LITERAL(132, 2598, 14), // "presenceStatus"
QT_MOC_LITERAL(133, 2613, 17), // "presenceTimestamp"
QT_MOC_LITERAL(134, 2631, 28), // "LinphoneEnums::ChatRoomState"
QT_MOC_LITERAL(135, 2660, 17), // "ephemeralLifetime"
QT_MOC_LITERAL(136, 2678, 16), // "ephemeralEnabled"
QT_MOC_LITERAL(137, 2695, 14), // "canBeEphemeral"
QT_MOC_LITERAL(138, 2710, 17), // "markAsReadEnabled"
QT_MOC_LITERAL(139, 2728, 20), // "notificationsEnabled"
QT_MOC_LITERAL(140, 2749, 21), // "ParticipantListModel*"
QT_MOC_LITERAL(141, 2771, 5), // "reply"
QT_MOC_LITERAL(142, 2777, 14), // "entriesLoading"
QT_MOC_LITERAL(143, 2792, 9), // "EntryType"
QT_MOC_LITERAL(144, 2802, 12), // "GenericEntry"
QT_MOC_LITERAL(145, 2815, 12), // "MessageEntry"
QT_MOC_LITERAL(146, 2828, 9), // "CallEntry"
QT_MOC_LITERAL(147, 2838, 11) // "NoticeEntry"

    },
    "ChatRoomModel\0isRemoteComposingChanged\0"
    "\0entriesLoadingChanged\0loading\0"
    "moreEntriesLoaded\0count\0allEntriesRemoved\0"
    "QSharedPointer<ChatRoomModel>\0model\0"
    "lastEntryRemoved\0messageSent\0"
    "std::shared_ptr<linphone::ChatMessage>\0"
    "message\0messageReceived\0messageCountReset\0"
    "focused\0fullPeerAddressChanged\0"
    "participantsChanged\0subjectChanged\0"
    "subject\0usernameChanged\0avatarChanged\0"
    "presenceStatusChanged\0lastUpdateTimeChanged\0"
    "unreadMessagesCountChanged\0"
    "missedCallsCountChanged\0securityLevelChanged\0"
    "securityLevel\0groupEnabledChanged\0"
    "groupEnabled\0isMeAdminChanged\0"
    "stateChanged\0state\0isReadOnlyChanged\0"
    "ephemeralEnabledChanged\0"
    "ephemeralLifetimeChanged\0canBeEphemeralChanged\0"
    "markAsReadEnabledChanged\0chatRoomDeleted\0"
    "replyChanged\0updatingChanged\0"
    "notificationsEnabledChanged\0securityEvent\0"
    "std::shared_ptr<const linphone::EventLog>\0"
    "eventLog\0participantAdded\0participantRemoved\0"
    "participantDeviceAdded\0participantDeviceRemoved\0"
    "participantAdminStatusChanged\0"
    "participantRegistrationSubscriptionRequested\0"
    "std::shared_ptr<const linphone::Address>\0"
    "participantAddress\0"
    "participantRegistrationUnsubscriptionRequested\0"
    "conferenceJoined\0conferenceLeft\0"
    "onIsComposingReceived\0"
    "std::shared_ptr<linphone::ChatRoom>\0"
    "chatRoom\0remoteAddress\0isComposing\0"
    "onMessageReceived\0onMessagesReceived\0"
    "std::list<std::shared_ptr<linphone::ChatMessage> >\0"
    "messages\0onNewEvent\0onNewEvents\0"
    "std::list<std::shared_ptr<linphone::EventLog> >\0"
    "eventLogs\0onChatMessageReceived\0"
    "onChatMessagesReceived\0onChatMessageSending\0"
    "onChatMessageSent\0onParticipantAdded\0"
    "onParticipantRemoved\0"
    "onParticipantAdminStatusChanged\0"
    "onStateChanged\0linphone::ChatRoom::State\0"
    "newState\0onSecurityEvent\0onSubjectChanged\0"
    "onUndecryptableMessageReceived\0"
    "onParticipantDeviceAdded\0"
    "onParticipantDeviceRemoved\0"
    "onConferenceJoined\0onConferenceLeft\0"
    "onEphemeralEvent\0onEphemeralMessageTimerStarted\0"
    "onEphemeralMessageDeleted\0"
    "onConferenceAddressGeneration\0"
    "onParticipantRegistrationSubscriptionRequested\0"
    "onParticipantRegistrationUnsubscriptionRequested\0"
    "onChatMessageShouldBeStored\0"
    "onChatMessageParticipantImdnStateChanged\0"
    "std::shared_ptr<const linphone::ParticipantImdnState>\0"
    "removeEntry\0ChatEvent*\0entry\0"
    "emitFullPeerAddressChanged\0getPeerAddress\0"
    "getLocalAddress\0getFullPeerAddress\0"
    "getFullLocalAddress\0getConferenceAddress\0"
    "getParticipantAddress\0isSecure\0"
    "deleteChatRoom\0leaveChatRoom\0"
    "updateParticipants\0participants\0"
    "forwardMessage\0ChatMessageModel*\0"
    "resetMessageCount\0loadMoreEntries\0"
    "loadTillMessage\0lastUpdateTime\0"
    "unreadMessagesCount\0missedCallsCount\0"
    "isConference\0isOneToOne\0haveEncryption\0"
    "isMeAdmin\0canHandleParticipants\0"
    "composers\0QList<QString>\0isReadOnly\0"
    "updating\0sipAddress\0sipAddressUriOnly\0"
    "username\0avatar\0presenceStatus\0"
    "presenceTimestamp\0LinphoneEnums::ChatRoomState\0"
    "ephemeralLifetime\0ephemeralEnabled\0"
    "canBeEphemeral\0markAsReadEnabled\0"
    "notificationsEnabled\0ParticipantListModel*\0"
    "reply\0entriesLoading\0EntryType\0"
    "GenericEntry\0MessageEntry\0CallEntry\0"
    "NoticeEntry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatRoomModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      85,   14, // methods
      30,  684, // properties
       1,  804, // enums/sets
       0,    0, // constructors
       0,       // flags
      41,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  439,    2, 0x06 /* Public */,
       3,    1,  440,    2, 0x06 /* Public */,
       5,    1,  443,    2, 0x06 /* Public */,
       7,    1,  446,    2, 0x06 /* Public */,
      10,    0,  449,    2, 0x06 /* Public */,
      11,    1,  450,    2, 0x06 /* Public */,
      14,    1,  453,    2, 0x06 /* Public */,
      15,    0,  456,    2, 0x06 /* Public */,
      16,    0,  457,    2, 0x06 /* Public */,
      17,    0,  458,    2, 0x06 /* Public */,
      18,    0,  459,    2, 0x06 /* Public */,
      19,    1,  460,    2, 0x06 /* Public */,
      21,    0,  463,    2, 0x06 /* Public */,
      22,    0,  464,    2, 0x06 /* Public */,
      23,    0,  465,    2, 0x06 /* Public */,
      24,    0,  466,    2, 0x06 /* Public */,
      25,    0,  467,    2, 0x06 /* Public */,
      26,    0,  468,    2, 0x06 /* Public */,
      27,    1,  469,    2, 0x06 /* Public */,
      29,    1,  472,    2, 0x06 /* Public */,
      31,    0,  475,    2, 0x06 /* Public */,
      32,    1,  476,    2, 0x06 /* Public */,
      34,    0,  479,    2, 0x06 /* Public */,
      35,    0,  480,    2, 0x06 /* Public */,
      36,    0,  481,    2, 0x06 /* Public */,
      37,    0,  482,    2, 0x06 /* Public */,
      38,    0,  483,    2, 0x06 /* Public */,
      39,    0,  484,    2, 0x06 /* Public */,
      40,    0,  485,    2, 0x06 /* Public */,
      41,    0,  486,    2, 0x06 /* Public */,
      42,    0,  487,    2, 0x06 /* Public */,
      43,    1,  488,    2, 0x06 /* Public */,
      46,    1,  491,    2, 0x06 /* Public */,
      47,    1,  494,    2, 0x06 /* Public */,
      48,    1,  497,    2, 0x06 /* Public */,
      49,    1,  500,    2, 0x06 /* Public */,
      50,    1,  503,    2, 0x06 /* Public */,
      51,    1,  506,    2, 0x06 /* Public */,
      54,    1,  509,    2, 0x06 /* Public */,
      55,    1,  512,    2, 0x06 /* Public */,
      56,    1,  515,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      57,    3,  518,    2, 0x0a /* Public */,
      62,    2,  525,    2, 0x0a /* Public */,
      63,    2,  530,    2, 0x0a /* Public */,
      66,    2,  535,    2, 0x0a /* Public */,
      67,    2,  540,    2, 0x0a /* Public */,
      70,    2,  545,    2, 0x0a /* Public */,
      71,    2,  550,    2, 0x0a /* Public */,
      72,    2,  555,    2, 0x0a /* Public */,
      73,    2,  560,    2, 0x0a /* Public */,
      74,    2,  565,    2, 0x0a /* Public */,
      75,    2,  570,    2, 0x0a /* Public */,
      76,    2,  575,    2, 0x0a /* Public */,
      77,    2,  580,    2, 0x0a /* Public */,
      80,    2,  585,    2, 0x0a /* Public */,
      81,    2,  590,    2, 0x0a /* Public */,
      82,    2,  595,    2, 0x0a /* Public */,
      83,    2,  600,    2, 0x0a /* Public */,
      84,    2,  605,    2, 0x0a /* Public */,
      85,    2,  610,    2, 0x0a /* Public */,
      86,    2,  615,    2, 0x0a /* Public */,
      87,    2,  620,    2, 0x0a /* Public */,
      88,    2,  625,    2, 0x0a /* Public */,
      89,    2,  630,    2, 0x0a /* Public */,
      90,    1,  635,    2, 0x0a /* Public */,
      91,    2,  638,    2, 0x0a /* Public */,
      92,    2,  643,    2, 0x0a /* Public */,
      93,    2,  648,    2, 0x0a /* Public */,
      94,    3,  653,    2, 0x0a /* Public */,
      96,    1,  660,    2, 0x0a /* Public */,
      99,    0,  663,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
     100,    0,  664,    2, 0x02 /* Public */,
     101,    0,  665,    2, 0x02 /* Public */,
     102,    0,  666,    2, 0x02 /* Public */,
     103,    0,  667,    2, 0x02 /* Public */,
     104,    0,  668,    2, 0x02 /* Public */,
     105,    0,  669,    2, 0x02 /* Public */,
     106,    0,  670,    2, 0x02 /* Public */,
     107,    0,  671,    2, 0x02 /* Public */,
     108,    0,  672,    2, 0x02 /* Public */,
     109,    1,  673,    2, 0x02 /* Public */,
     111,    1,  676,    2, 0x02 /* Public */,
     113,    0,  679,    2, 0x02 /* Public */,
     114,    0,  680,    2, 0x02 /* Public */,
     115,    1,  681,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, 0x80000000 | 52,   53,
    QMetaType::Void, 0x80000000 | 52,   53,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, 0x80000000 | 44,   45,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 52, QMetaType::Bool,   59,   60,   61,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 12,   59,   13,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 64,   59,   65,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 44,   59,   45,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 68,   59,   69,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 44,   59,   45,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 68,   59,   69,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 44,   59,   45,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 44,   59,   45,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 44,   59,   45,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 44,   59,   45,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 44,   59,   45,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 78,   59,   79,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 44,   59,   45,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 44,   59,   45,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 12,   59,   13,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 44,   59,   45,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 44,   59,   45,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 44,   59,   45,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 44,   59,   45,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 44,   59,   45,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 44,   59,   45,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 44,   59,   45,
    QMetaType::Void, 0x80000000 | 58,   59,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 52,   59,   53,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 52,   59,   53,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 12,   59,   13,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 12, 0x80000000 | 95,   59,   13,   33,
    QMetaType::Void, 0x80000000 | 97,   98,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantList,  110,
    QMetaType::Void, 0x80000000 | 112,    9,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int, 0x80000000 | 112,   13,

 // properties: name, type, flags
      20, QMetaType::QString, 0x00495103,
     116, QMetaType::QDateTime, 0x00495103,
     117, QMetaType::Int, 0x00495103,
     118, QMetaType::Int, 0x00495103,
      28, QMetaType::Int, 0x00495103,
      30, QMetaType::Bool, 0x00495001,
     119, QMetaType::Bool, 0x00095401,
     120, QMetaType::Bool, 0x00095401,
     121, QMetaType::Bool, 0x00095401,
     122, QMetaType::Bool, 0x00495001,
     123, QMetaType::Bool, 0x00095401,
      61, QMetaType::Bool, 0x00495001,
     124, 0x80000000 | 125, 0x00495009,
     126, QMetaType::Bool, 0x00495001,
     127, QMetaType::Bool, 0x00495001,
     128, QMetaType::QString, 0x00495001,
     129, QMetaType::QString, 0x00495001,
     130, QMetaType::QString, 0x00495001,
     131, QMetaType::QString, 0x00495001,
     132, QMetaType::Int, 0x00495001,
     133, QMetaType::QDateTime, 0x00495001,
      33, 0x80000000 | 134, 0x00495009,
     135, QMetaType::Long, 0x00495103,
     136, QMetaType::Bool, 0x00495103,
     137, QMetaType::Bool, 0x00495001,
     138, QMetaType::Bool, 0x00495003,
     139, QMetaType::Bool, 0x00495003,
     110, 0x80000000 | 140, 0x00095409,
     141, 0x80000000 | 112, 0x0049510b,
     142, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
      11,
      15,
      16,
      17,
      18,
      19,
       0,
       0,
       0,
      20,
       0,
       0,
       0,
      22,
      29,
       9,
       9,
      12,
      13,
      14,
      14,
      21,
      24,
      23,
      25,
      26,
      30,
       0,
      28,
       1,

 // enums: name, alias, flags, count, data
     143,  143, 0x0,    4,  809,

 // enum data: key, value
     144, uint(ChatRoomModel::GenericEntry),
     145, uint(ChatRoomModel::MessageEntry),
     146, uint(ChatRoomModel::CallEntry),
     147, uint(ChatRoomModel::NoticeEntry),

       0        // eod
};

void ChatRoomModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatRoomModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->isRemoteComposingChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->entriesLoadingChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->moreEntriesLoaded((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->allEntriesRemoved((*reinterpret_cast< QSharedPointer<ChatRoomModel>(*)>(_a[1]))); break;
        case 4: _t->lastEntryRemoved(); break;
        case 5: _t->messageSent((*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[1]))); break;
        case 6: _t->messageReceived((*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[1]))); break;
        case 7: _t->messageCountReset(); break;
        case 8: _t->focused(); break;
        case 9: _t->fullPeerAddressChanged(); break;
        case 10: _t->participantsChanged(); break;
        case 11: _t->subjectChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->usernameChanged(); break;
        case 13: _t->avatarChanged(); break;
        case 14: _t->presenceStatusChanged(); break;
        case 15: _t->lastUpdateTimeChanged(); break;
        case 16: _t->unreadMessagesCountChanged(); break;
        case 17: _t->missedCallsCountChanged(); break;
        case 18: _t->securityLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->groupEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->isMeAdminChanged(); break;
        case 21: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->isReadOnlyChanged(); break;
        case 23: _t->ephemeralEnabledChanged(); break;
        case 24: _t->ephemeralLifetimeChanged(); break;
        case 25: _t->canBeEphemeralChanged(); break;
        case 26: _t->markAsReadEnabledChanged(); break;
        case 27: _t->chatRoomDeleted(); break;
        case 28: _t->replyChanged(); break;
        case 29: _t->updatingChanged(); break;
        case 30: _t->notificationsEnabledChanged(); break;
        case 31: _t->securityEvent((*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[1]))); break;
        case 32: _t->participantAdded((*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[1]))); break;
        case 33: _t->participantRemoved((*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[1]))); break;
        case 34: _t->participantDeviceAdded((*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[1]))); break;
        case 35: _t->participantDeviceRemoved((*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[1]))); break;
        case 36: _t->participantAdminStatusChanged((*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[1]))); break;
        case 37: _t->participantRegistrationSubscriptionRequested((*reinterpret_cast< const std::shared_ptr<const linphone::Address>(*)>(_a[1]))); break;
        case 38: _t->participantRegistrationUnsubscriptionRequested((*reinterpret_cast< const std::shared_ptr<const linphone::Address>(*)>(_a[1]))); break;
        case 39: _t->conferenceJoined((*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[1]))); break;
        case 40: _t->conferenceLeft((*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[1]))); break;
        case 41: _t->onIsComposingReceived((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::Address>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 42: _t->onMessageReceived((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[2]))); break;
        case 43: _t->onMessagesReceived((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::list<std::shared_ptr<linphone::ChatMessage> >(*)>(_a[2]))); break;
        case 44: _t->onNewEvent((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 45: _t->onNewEvents((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::list<std::shared_ptr<linphone::EventLog> >(*)>(_a[2]))); break;
        case 46: _t->onChatMessageReceived((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 47: _t->onChatMessagesReceived((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::list<std::shared_ptr<linphone::EventLog> >(*)>(_a[2]))); break;
        case 48: _t->onChatMessageSending((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 49: _t->onChatMessageSent((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 50: _t->onParticipantAdded((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 51: _t->onParticipantRemoved((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 52: _t->onParticipantAdminStatusChanged((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 53: _t->onStateChanged((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< linphone::ChatRoom::State(*)>(_a[2]))); break;
        case 54: _t->onSecurityEvent((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 55: _t->onSubjectChanged((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 56: _t->onUndecryptableMessageReceived((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[2]))); break;
        case 57: _t->onParticipantDeviceAdded((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 58: _t->onParticipantDeviceRemoved((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 59: _t->onConferenceJoined((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 60: _t->onConferenceLeft((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 61: _t->onEphemeralEvent((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 62: _t->onEphemeralMessageTimerStarted((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 63: _t->onEphemeralMessageDeleted((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 64: _t->onConferenceAddressGeneration((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1]))); break;
        case 65: _t->onParticipantRegistrationSubscriptionRequested((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::Address>(*)>(_a[2]))); break;
        case 66: _t->onParticipantRegistrationUnsubscriptionRequested((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::Address>(*)>(_a[2]))); break;
        case 67: _t->onChatMessageShouldBeStored((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[2]))); break;
        case 68: _t->onChatMessageParticipantImdnStateChanged((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[2])),(*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantImdnState>(*)>(_a[3]))); break;
        case 69: _t->removeEntry((*reinterpret_cast< ChatEvent*(*)>(_a[1]))); break;
        case 70: _t->emitFullPeerAddressChanged(); break;
        case 71: { QString _r = _t->getPeerAddress();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 72: { QString _r = _t->getLocalAddress();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 73: { QString _r = _t->getFullPeerAddress();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 74: { QString _r = _t->getFullLocalAddress();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 75: { QString _r = _t->getConferenceAddress();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 76: { QString _r = _t->getParticipantAddress();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 77: { bool _r = _t->isSecure();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 78: _t->deleteChatRoom(); break;
        case 79: _t->leaveChatRoom(); break;
        case 80: _t->updateParticipants((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 81: _t->forwardMessage((*reinterpret_cast< ChatMessageModel*(*)>(_a[1]))); break;
        case 82: _t->resetMessageCount(); break;
        case 83: { int _r = _t->loadMoreEntries();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 84: { int _r = _t->loadTillMessage((*reinterpret_cast< ChatMessageModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ChatRoomModel> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatMessage> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatMessage> >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatMessage> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< linphone::ChatRoom::State >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatMessage> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 59:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 61:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 64:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 65:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatMessage> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        case 68:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatMessage> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ChatRoom> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = bool (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::isRemoteComposingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(const bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::entriesLoadingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(const int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::moreEntriesLoaded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(QSharedPointer<ChatRoomModel> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::allEntriesRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::lastEntryRemoved)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(const std::shared_ptr<linphone::ChatMessage> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::messageSent)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(const std::shared_ptr<linphone::ChatMessage> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::messageReceived)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::messageCountReset)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::focused)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::fullPeerAddressChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::participantsChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::subjectChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::usernameChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::avatarChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::presenceStatusChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::lastUpdateTimeChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::unreadMessagesCountChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::missedCallsCountChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::securityLevelChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::groupEnabledChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::isMeAdminChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::stateChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::isReadOnlyChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::ephemeralEnabledChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::ephemeralLifetimeChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::canBeEphemeralChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::markAsReadEnabledChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::chatRoomDeleted)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::replyChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::updatingChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::notificationsEnabledChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::securityEvent)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::participantAdded)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::participantRemoved)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::participantDeviceAdded)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::participantDeviceRemoved)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::participantAdminStatusChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(const std::shared_ptr<const linphone::Address> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::participantRegistrationSubscriptionRequested)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(const std::shared_ptr<const linphone::Address> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::participantRegistrationUnsubscriptionRequested)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::conferenceJoined)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (ChatRoomModel::*)(const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomModel::conferenceLeft)) {
                *result = 40;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 21:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinphoneEnums::ChatRoomState >(); break;
        case 12:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ChatRoomModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getSubject(); break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = _t->mLastUpdateTime; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->mUnreadMessagesCount; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->mMissedCallsCount; break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getSecurityLevel(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isGroupEnabled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isConference(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isOneToOne(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->haveEncryption(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isMeAdmin(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->canHandleParticipants(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getIsRemoteComposing(); break;
        case 12: *reinterpret_cast< QList<QString>*>(_v) = _t->getComposers(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->isReadOnly(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->isUpdating(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->getFullPeerAddress(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->getPeerAddress(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->getUsername(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->getAvatar(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->getPresenceStatus(); break;
        case 20: *reinterpret_cast< QDateTime*>(_v) = _t->getPresenceTimestamp(); break;
        case 21: *reinterpret_cast< LinphoneEnums::ChatRoomState*>(_v) = _t->getState(); break;
        case 22: *reinterpret_cast< long*>(_v) = _t->getEphemeralLifetime(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->isEphemeralEnabled(); break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->canBeEphemeral(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->markAsReadEnabled(); break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->isNotificationsEnabled(); break;
        case 27: *reinterpret_cast< ParticipantListModel**>(_v) = _t->getParticipantListModel(); break;
        case 28: *reinterpret_cast< ChatMessageModel**>(_v) = _t->getReply(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->isEntriesLoading(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ChatRoomModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSubject(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setLastUpdateTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 2: _t->setUnreadMessagesCount(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setMissedCallsCount(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setSecurityLevel(*reinterpret_cast< int*>(_v)); break;
        case 22: _t->setEphemeralLifetime(*reinterpret_cast< long*>(_v)); break;
        case 23: _t->setEphemeralEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 25: _t->enableMarkAsRead(*reinterpret_cast< bool*>(_v)); break;
        case 26: _t->enableNotifications(*reinterpret_cast< bool*>(_v)); break;
        case 28: _t->setReply(*reinterpret_cast< ChatMessageModel**>(_v)); break;
        case 29: _t->setEntriesLoading(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ChatRoomModel::staticMetaObject = { {
    &ProxyListModel::staticMetaObject,
    qt_meta_stringdata_ChatRoomModel.data,
    qt_meta_data_ChatRoomModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChatRoomModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatRoomModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatRoomModel.stringdata0))
        return static_cast<void*>(this);
    return ProxyListModel::qt_metacast(_clname);
}

int ChatRoomModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProxyListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 85)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 85;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 85)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 85;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 30;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
bool ChatRoomModel::isRemoteComposingChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
void ChatRoomModel::entriesLoadingChanged(const bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChatRoomModel::moreEntriesLoaded(const int & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChatRoomModel::allEntriesRemoved(QSharedPointer<ChatRoomModel> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ChatRoomModel::lastEntryRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ChatRoomModel::messageSent(const std::shared_ptr<linphone::ChatMessage> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ChatRoomModel::messageReceived(const std::shared_ptr<linphone::ChatMessage> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ChatRoomModel::messageCountReset()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ChatRoomModel::focused()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ChatRoomModel::fullPeerAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ChatRoomModel::participantsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ChatRoomModel::subjectChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ChatRoomModel::usernameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void ChatRoomModel::avatarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void ChatRoomModel::presenceStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void ChatRoomModel::lastUpdateTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void ChatRoomModel::unreadMessagesCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void ChatRoomModel::missedCallsCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void ChatRoomModel::securityLevelChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void ChatRoomModel::groupEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void ChatRoomModel::isMeAdminChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void ChatRoomModel::stateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void ChatRoomModel::isReadOnlyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void ChatRoomModel::ephemeralEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void ChatRoomModel::ephemeralLifetimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void ChatRoomModel::canBeEphemeralChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void ChatRoomModel::markAsReadEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void ChatRoomModel::chatRoomDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void ChatRoomModel::replyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void ChatRoomModel::updatingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void ChatRoomModel::notificationsEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void ChatRoomModel::securityEvent(const std::shared_ptr<const linphone::EventLog> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void ChatRoomModel::participantAdded(const std::shared_ptr<const linphone::EventLog> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void ChatRoomModel::participantRemoved(const std::shared_ptr<const linphone::EventLog> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void ChatRoomModel::participantDeviceAdded(const std::shared_ptr<const linphone::EventLog> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void ChatRoomModel::participantDeviceRemoved(const std::shared_ptr<const linphone::EventLog> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void ChatRoomModel::participantAdminStatusChanged(const std::shared_ptr<const linphone::EventLog> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void ChatRoomModel::participantRegistrationSubscriptionRequested(const std::shared_ptr<const linphone::Address> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void ChatRoomModel::participantRegistrationUnsubscriptionRequested(const std::shared_ptr<const linphone::Address> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void ChatRoomModel::conferenceJoined(const std::shared_ptr<const linphone::EventLog> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void ChatRoomModel::conferenceLeft(const std::shared_ptr<const linphone::EventLog> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
