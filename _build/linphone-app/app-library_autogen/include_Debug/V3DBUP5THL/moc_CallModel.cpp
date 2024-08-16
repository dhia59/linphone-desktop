/****************************************************************************
** Meta object code from reading C++ file 'CallModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/call/CallModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CallModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CallModel_t {
    QByteArrayData data[128];
    char stringdata0[2034];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CallModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CallModel_t qt_meta_stringdata_CallModel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CallModel"
QT_MOC_LITERAL(1, 10, 14), // "meAdminChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "callErrorChanged"
QT_MOC_LITERAL(4, 43, 9), // "callError"
QT_MOC_LITERAL(5, 53, 13), // "callIdChanged"
QT_MOC_LITERAL(6, 67, 21), // "isInConferenceChanged"
QT_MOC_LITERAL(7, 89, 6), // "status"
QT_MOC_LITERAL(8, 96, 22), // "conferenceModelChanged"
QT_MOC_LITERAL(9, 119, 26), // "conferenceInfoModelChanged"
QT_MOC_LITERAL(10, 146, 20), // "chatRoomModelChanged"
QT_MOC_LITERAL(11, 167, 19), // "speakerMutedChanged"
QT_MOC_LITERAL(12, 187, 17), // "microMutedChanged"
QT_MOC_LITERAL(13, 205, 20), // "cameraEnabledChanged"
QT_MOC_LITERAL(14, 226, 16), // "recordingChanged"
QT_MOC_LITERAL(15, 243, 22), // "remoteRecordingChanged"
QT_MOC_LITERAL(16, 266, 22), // "snapshotEnabledChanged"
QT_MOC_LITERAL(17, 289, 12), // "statsUpdated"
QT_MOC_LITERAL(18, 302, 13), // "statusChanged"
QT_MOC_LITERAL(19, 316, 10), // "CallStatus"
QT_MOC_LITERAL(20, 327, 14), // "videoRequested"
QT_MOC_LITERAL(21, 342, 15), // "securityUpdated"
QT_MOC_LITERAL(22, 358, 17), // "encryptionChanged"
QT_MOC_LITERAL(23, 376, 15), // "isPQZrtpChanged"
QT_MOC_LITERAL(24, 392, 24), // "speakerVolumeGainChanged"
QT_MOC_LITERAL(25, 417, 6), // "volume"
QT_MOC_LITERAL(26, 424, 22), // "microVolumeGainChanged"
QT_MOC_LITERAL(27, 447, 21), // "pausedByRemoteChanged"
QT_MOC_LITERAL(28, 469, 24), // "cameraFirstFrameReceived"
QT_MOC_LITERAL(29, 494, 5), // "width"
QT_MOC_LITERAL(30, 500, 6), // "height"
QT_MOC_LITERAL(31, 507, 22), // "fullPeerAddressChanged"
QT_MOC_LITERAL(32, 530, 22), // "transferAddressChanged"
QT_MOC_LITERAL(33, 553, 15), // "transferAddress"
QT_MOC_LITERAL(34, 569, 28), // "conferenceVideoLayoutChanged"
QT_MOC_LITERAL(35, 598, 14), // "searchReceived"
QT_MOC_LITERAL(36, 613, 51), // "std::list<std::shared_ptr<lin..."
QT_MOC_LITERAL(37, 665, 7), // "results"
QT_MOC_LITERAL(38, 673, 7), // "endCall"
QT_MOC_LITERAL(39, 681, 17), // "onRemoteRecording"
QT_MOC_LITERAL(40, 699, 31), // "std::shared_ptr<linphone::Call>"
QT_MOC_LITERAL(41, 731, 4), // "call"
QT_MOC_LITERAL(42, 736, 9), // "recording"
QT_MOC_LITERAL(43, 746, 21), // "onChatRoomInitialized"
QT_MOC_LITERAL(44, 768, 5), // "state"
QT_MOC_LITERAL(45, 774, 31), // "onParticipantAdminStatusChanged"
QT_MOC_LITERAL(46, 806, 44), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(47, 851, 11), // "participant"
QT_MOC_LITERAL(48, 863, 17), // "onSecurityUpdated"
QT_MOC_LITERAL(49, 881, 6), // "accept"
QT_MOC_LITERAL(50, 888, 15), // "acceptWithVideo"
QT_MOC_LITERAL(51, 904, 9), // "terminate"
QT_MOC_LITERAL(52, 914, 14), // "askForTransfer"
QT_MOC_LITERAL(53, 929, 22), // "askForAttendedTransfer"
QT_MOC_LITERAL(54, 952, 10), // "transferTo"
QT_MOC_LITERAL(55, 963, 10), // "sipAddress"
QT_MOC_LITERAL(56, 974, 17), // "transferToAnother"
QT_MOC_LITERAL(57, 992, 11), // "peerAddress"
QT_MOC_LITERAL(58, 1004, 21), // "getRemoteVideoEnabled"
QT_MOC_LITERAL(59, 1026, 18), // "acceptVideoRequest"
QT_MOC_LITERAL(60, 1045, 18), // "rejectVideoRequest"
QT_MOC_LITERAL(61, 1064, 12), // "takeSnapshot"
QT_MOC_LITERAL(62, 1077, 14), // "startRecording"
QT_MOC_LITERAL(63, 1092, 13), // "stopRecording"
QT_MOC_LITERAL(64, 1106, 8), // "sendDtmf"
QT_MOC_LITERAL(65, 1115, 4), // "dtmf"
QT_MOC_LITERAL(66, 1120, 25), // "verifyAuthenticationToken"
QT_MOC_LITERAL(67, 1146, 6), // "verify"
QT_MOC_LITERAL(68, 1153, 13), // "updateStreams"
QT_MOC_LITERAL(69, 1167, 17), // "toggleSpeakerMute"
QT_MOC_LITERAL(70, 1185, 12), // "localAddress"
QT_MOC_LITERAL(71, 1198, 15), // "fullPeerAddress"
QT_MOC_LITERAL(72, 1214, 16), // "fullLocalAddress"
QT_MOC_LITERAL(73, 1231, 12), // "contactModel"
QT_MOC_LITERAL(74, 1244, 13), // "ContactModel*"
QT_MOC_LITERAL(75, 1258, 13), // "chatRoomModel"
QT_MOC_LITERAL(76, 1272, 14), // "ChatRoomModel*"
QT_MOC_LITERAL(77, 1287, 15), // "conferenceModel"
QT_MOC_LITERAL(78, 1303, 16), // "ConferenceModel*"
QT_MOC_LITERAL(79, 1320, 19), // "conferenceInfoModel"
QT_MOC_LITERAL(80, 1340, 20), // "ConferenceInfoModel*"
QT_MOC_LITERAL(81, 1361, 6), // "callId"
QT_MOC_LITERAL(82, 1368, 10), // "isOutgoing"
QT_MOC_LITERAL(83, 1379, 14), // "isInConference"
QT_MOC_LITERAL(84, 1394, 12), // "isConference"
QT_MOC_LITERAL(85, 1407, 10), // "isOneToOne"
QT_MOC_LITERAL(86, 1418, 8), // "duration"
QT_MOC_LITERAL(87, 1427, 7), // "quality"
QT_MOC_LITERAL(88, 1435, 9), // "speakerVu"
QT_MOC_LITERAL(89, 1445, 7), // "microVu"
QT_MOC_LITERAL(90, 1453, 12), // "speakerMuted"
QT_MOC_LITERAL(91, 1466, 10), // "microMuted"
QT_MOC_LITERAL(92, 1477, 17), // "speakerVolumeGain"
QT_MOC_LITERAL(93, 1495, 15), // "microVolumeGain"
QT_MOC_LITERAL(94, 1511, 12), // "pausedByUser"
QT_MOC_LITERAL(95, 1524, 14), // "pausedByRemote"
QT_MOC_LITERAL(96, 1539, 12), // "videoEnabled"
QT_MOC_LITERAL(97, 1552, 17), // "localVideoEnabled"
QT_MOC_LITERAL(98, 1570, 13), // "cameraEnabled"
QT_MOC_LITERAL(99, 1584, 8), // "updating"
QT_MOC_LITERAL(100, 1593, 15), // "remoteRecording"
QT_MOC_LITERAL(101, 1609, 15), // "snapshotEnabled"
QT_MOC_LITERAL(102, 1625, 10), // "audioStats"
QT_MOC_LITERAL(103, 1636, 10), // "videoStats"
QT_MOC_LITERAL(104, 1647, 15), // "encryptionStats"
QT_MOC_LITERAL(105, 1663, 10), // "encryption"
QT_MOC_LITERAL(106, 1674, 14), // "CallEncryption"
QT_MOC_LITERAL(107, 1689, 9), // "isSecured"
QT_MOC_LITERAL(108, 1699, 8), // "localSas"
QT_MOC_LITERAL(109, 1708, 9), // "remoteSas"
QT_MOC_LITERAL(110, 1718, 13), // "securedString"
QT_MOC_LITERAL(111, 1732, 8), // "isPQZrtp"
QT_MOC_LITERAL(112, 1741, 11), // "CallPQState"
QT_MOC_LITERAL(113, 1753, 21), // "conferenceVideoLayout"
QT_MOC_LITERAL(114, 1775, 31), // "LinphoneEnums::ConferenceLayout"
QT_MOC_LITERAL(115, 1807, 19), // "CallStatusConnected"
QT_MOC_LITERAL(116, 1827, 15), // "CallStatusEnded"
QT_MOC_LITERAL(117, 1843, 14), // "CallStatusIdle"
QT_MOC_LITERAL(118, 1858, 18), // "CallStatusIncoming"
QT_MOC_LITERAL(119, 1877, 18), // "CallStatusOutgoing"
QT_MOC_LITERAL(120, 1896, 16), // "CallStatusPaused"
QT_MOC_LITERAL(121, 1913, 18), // "CallEncryptionNone"
QT_MOC_LITERAL(122, 1932, 18), // "CallEncryptionDtls"
QT_MOC_LITERAL(123, 1951, 18), // "CallEncryptionSrtp"
QT_MOC_LITERAL(124, 1970, 18), // "CallEncryptionZrtp"
QT_MOC_LITERAL(125, 1989, 15), // "CallPQStateNone"
QT_MOC_LITERAL(126, 2005, 13), // "CallPQStateOn"
QT_MOC_LITERAL(127, 2019, 14) // "CallPQStateOff"

    },
    "CallModel\0meAdminChanged\0\0callErrorChanged\0"
    "callError\0callIdChanged\0isInConferenceChanged\0"
    "status\0conferenceModelChanged\0"
    "conferenceInfoModelChanged\0"
    "chatRoomModelChanged\0speakerMutedChanged\0"
    "microMutedChanged\0cameraEnabledChanged\0"
    "recordingChanged\0remoteRecordingChanged\0"
    "snapshotEnabledChanged\0statsUpdated\0"
    "statusChanged\0CallStatus\0videoRequested\0"
    "securityUpdated\0encryptionChanged\0"
    "isPQZrtpChanged\0speakerVolumeGainChanged\0"
    "volume\0microVolumeGainChanged\0"
    "pausedByRemoteChanged\0cameraFirstFrameReceived\0"
    "width\0height\0fullPeerAddressChanged\0"
    "transferAddressChanged\0transferAddress\0"
    "conferenceVideoLayoutChanged\0"
    "searchReceived\0"
    "std::list<std::shared_ptr<linphone::SearchResult> >\0"
    "results\0endCall\0onRemoteRecording\0"
    "std::shared_ptr<linphone::Call>\0call\0"
    "recording\0onChatRoomInitialized\0state\0"
    "onParticipantAdminStatusChanged\0"
    "std::shared_ptr<const linphone::Participant>\0"
    "participant\0onSecurityUpdated\0accept\0"
    "acceptWithVideo\0terminate\0askForTransfer\0"
    "askForAttendedTransfer\0transferTo\0"
    "sipAddress\0transferToAnother\0peerAddress\0"
    "getRemoteVideoEnabled\0acceptVideoRequest\0"
    "rejectVideoRequest\0takeSnapshot\0"
    "startRecording\0stopRecording\0sendDtmf\0"
    "dtmf\0verifyAuthenticationToken\0verify\0"
    "updateStreams\0toggleSpeakerMute\0"
    "localAddress\0fullPeerAddress\0"
    "fullLocalAddress\0contactModel\0"
    "ContactModel*\0chatRoomModel\0ChatRoomModel*\0"
    "conferenceModel\0ConferenceModel*\0"
    "conferenceInfoModel\0ConferenceInfoModel*\0"
    "callId\0isOutgoing\0isInConference\0"
    "isConference\0isOneToOne\0duration\0"
    "quality\0speakerVu\0microVu\0speakerMuted\0"
    "microMuted\0speakerVolumeGain\0"
    "microVolumeGain\0pausedByUser\0"
    "pausedByRemote\0videoEnabled\0"
    "localVideoEnabled\0cameraEnabled\0"
    "updating\0remoteRecording\0snapshotEnabled\0"
    "audioStats\0videoStats\0encryptionStats\0"
    "encryption\0CallEncryption\0isSecured\0"
    "localSas\0remoteSas\0securedString\0"
    "isPQZrtp\0CallPQState\0conferenceVideoLayout\0"
    "LinphoneEnums::ConferenceLayout\0"
    "CallStatusConnected\0CallStatusEnded\0"
    "CallStatusIdle\0CallStatusIncoming\0"
    "CallStatusOutgoing\0CallStatusPaused\0"
    "CallEncryptionNone\0CallEncryptionDtls\0"
    "CallEncryptionSrtp\0CallEncryptionZrtp\0"
    "CallPQStateNone\0CallPQStateOn\0"
    "CallPQStateOff"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CallModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
      43,  350, // properties
       3,  522, // enums/sets
       0,    0, // constructors
       0,       // flags
      26,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  259,    2, 0x06 /* Public */,
       3,    1,  260,    2, 0x06 /* Public */,
       5,    0,  263,    2, 0x06 /* Public */,
       6,    1,  264,    2, 0x06 /* Public */,
       8,    0,  267,    2, 0x06 /* Public */,
       9,    0,  268,    2, 0x06 /* Public */,
      10,    0,  269,    2, 0x06 /* Public */,
      11,    1,  270,    2, 0x06 /* Public */,
      12,    1,  273,    2, 0x06 /* Public */,
      13,    0,  276,    2, 0x06 /* Public */,
      14,    1,  277,    2, 0x06 /* Public */,
      15,    1,  280,    2, 0x06 /* Public */,
      16,    0,  283,    2, 0x06 /* Public */,
      17,    0,  284,    2, 0x06 /* Public */,
      18,    1,  285,    2, 0x06 /* Public */,
      20,    0,  288,    2, 0x06 /* Public */,
      21,    0,  289,    2, 0x06 /* Public */,
      22,    0,  290,    2, 0x06 /* Public */,
      23,    0,  291,    2, 0x06 /* Public */,
      24,    1,  292,    2, 0x06 /* Public */,
      26,    1,  295,    2, 0x06 /* Public */,
      27,    0,  298,    2, 0x06 /* Public */,
      28,    2,  299,    2, 0x06 /* Public */,
      31,    0,  304,    2, 0x06 /* Public */,
      32,    1,  305,    2, 0x06 /* Public */,
      34,    0,  308,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      35,    1,  309,    2, 0x0a /* Public */,
      38,    0,  312,    2, 0x0a /* Public */,
      39,    2,  313,    2, 0x0a /* Public */,
      43,    1,  318,    2, 0x0a /* Public */,
      45,    1,  321,    2, 0x0a /* Public */,
      48,    0,  324,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      49,    0,  325,    2, 0x02 /* Public */,
      50,    0,  326,    2, 0x02 /* Public */,
      51,    0,  327,    2, 0x02 /* Public */,
      52,    0,  328,    2, 0x02 /* Public */,
      53,    0,  329,    2, 0x02 /* Public */,
      54,    1,  330,    2, 0x02 /* Public */,
      56,    1,  333,    2, 0x02 /* Public */,
      58,    0,  336,    2, 0x02 /* Public */,
      59,    0,  337,    2, 0x02 /* Public */,
      60,    0,  338,    2, 0x02 /* Public */,
      61,    0,  339,    2, 0x02 /* Public */,
      62,    0,  340,    2, 0x02 /* Public */,
      63,    0,  341,    2, 0x02 /* Public */,
      64,    1,  342,    2, 0x02 /* Public */,
      66,    1,  345,    2, 0x02 /* Public */,
      68,    0,  348,    2, 0x02 /* Public */,
      69,    0,  349,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   25,
    QMetaType::Void, QMetaType::Float,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   29,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 36,   37,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40, QMetaType::Bool,   41,   42,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   55,
    QMetaType::Bool, QMetaType::QString,   57,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   65,
    QMetaType::Void, QMetaType::Bool,   67,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      57, QMetaType::QString, 0x00095401,
      70, QMetaType::QString, 0x00095401,
      71, QMetaType::QString, 0x00495001,
      72, QMetaType::QString, 0x00095401,
      73, 0x80000000 | 74, 0x00095409,
      75, 0x80000000 | 76, 0x00495009,
      77, 0x80000000 | 78, 0x00495009,
      79, 0x80000000 | 80, 0x00495009,
       7, 0x80000000 | 19, 0x00495009,
       4, QMetaType::QString, 0x00495001,
      81, QMetaType::QString, 0x00495103,
      82, QMetaType::Bool, 0x00095401,
      83, QMetaType::Bool, 0x00495001,
      84, QMetaType::Bool, 0x00495001,
      85, QMetaType::Bool, 0x00495001,
      86, QMetaType::Int, 0x00095401,
      87, QMetaType::Float, 0x00095401,
      88, QMetaType::Float, 0x00095401,
      89, QMetaType::Float, 0x00095401,
      90, QMetaType::Bool, 0x00495103,
      91, QMetaType::Bool, 0x00495103,
      92, QMetaType::Float, 0x00495103,
      93, QMetaType::Float, 0x00495103,
      94, QMetaType::Bool, 0x00495103,
      95, QMetaType::Bool, 0x00495103,
      96, QMetaType::Bool, 0x00495103,
      97, QMetaType::Bool, 0x00495003,
      98, QMetaType::Bool, 0x00495103,
      99, QMetaType::Bool, 0x00495001,
      42, QMetaType::Bool, 0x00495001,
     100, QMetaType::Bool, 0x00495001,
     101, QMetaType::Bool, 0x00495001,
     102, QMetaType::QVariantList, 0x00495001,
     103, QMetaType::QVariantList, 0x00495001,
     104, QMetaType::QVariantList, 0x00495001,
     105, 0x80000000 | 106, 0x0049510b,
     107, QMetaType::Bool, 0x00495001,
     108, QMetaType::QString, 0x00495001,
     109, QMetaType::QString, 0x00495001,
     110, QMetaType::QString, 0x00495001,
     111, 0x80000000 | 112, 0x0049500b,
      33, QMetaType::QString, 0x00495103,
     113, 0x80000000 | 114, 0x0049500b,

 // properties: notify_signal_id
       0,
       0,
      23,
       0,
       0,
       6,
       4,
       5,
      14,
       1,
       2,
       0,
       3,
       5,
       5,
       0,
       0,
       0,
       0,
       7,
       8,
      19,
      20,
      14,
      21,
      14,
      14,
      14,
      14,
      10,
      11,
      12,
      13,
      13,
      13,
      17,
      16,
      16,
      16,
      16,
      18,
      24,
      25,

 // enums: name, alias, flags, count, data
      19,   19, 0x0,    6,  537,
     106,  106, 0x0,    4,  549,
     112,  112, 0x0,    3,  557,

 // enum data: key, value
     115, uint(CallModel::CallStatusConnected),
     116, uint(CallModel::CallStatusEnded),
     117, uint(CallModel::CallStatusIdle),
     118, uint(CallModel::CallStatusIncoming),
     119, uint(CallModel::CallStatusOutgoing),
     120, uint(CallModel::CallStatusPaused),
     121, uint(CallModel::CallEncryptionNone),
     122, uint(CallModel::CallEncryptionDtls),
     123, uint(CallModel::CallEncryptionSrtp),
     124, uint(CallModel::CallEncryptionZrtp),
     125, uint(CallModel::CallPQStateNone),
     126, uint(CallModel::CallPQStateOn),
     127, uint(CallModel::CallPQStateOff),

       0        // eod
};

void CallModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CallModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->meAdminChanged(); break;
        case 1: _t->callErrorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->callIdChanged(); break;
        case 3: _t->isInConferenceChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->conferenceModelChanged(); break;
        case 5: _t->conferenceInfoModelChanged(); break;
        case 6: _t->chatRoomModelChanged(); break;
        case 7: _t->speakerMutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->microMutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->cameraEnabledChanged(); break;
        case 10: _t->recordingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->remoteRecordingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->snapshotEnabledChanged(); break;
        case 13: _t->statsUpdated(); break;
        case 14: _t->statusChanged((*reinterpret_cast< CallStatus(*)>(_a[1]))); break;
        case 15: _t->videoRequested(); break;
        case 16: _t->securityUpdated(); break;
        case 17: _t->encryptionChanged(); break;
        case 18: _t->isPQZrtpChanged(); break;
        case 19: _t->speakerVolumeGainChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->microVolumeGainChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 21: _t->pausedByRemoteChanged(); break;
        case 22: _t->cameraFirstFrameReceived((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 23: _t->fullPeerAddressChanged(); break;
        case 24: _t->transferAddressChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->conferenceVideoLayoutChanged(); break;
        case 26: _t->searchReceived((*reinterpret_cast< std::list<std::shared_ptr<linphone::SearchResult> >(*)>(_a[1]))); break;
        case 27: _t->endCall(); break;
        case 28: _t->onRemoteRecording((*reinterpret_cast< const std::shared_ptr<linphone::Call>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 29: _t->onChatRoomInitialized((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->onParticipantAdminStatusChanged((*reinterpret_cast< const std::shared_ptr<const linphone::Participant>(*)>(_a[1]))); break;
        case 31: _t->onSecurityUpdated(); break;
        case 32: _t->accept(); break;
        case 33: _t->acceptWithVideo(); break;
        case 34: _t->terminate(); break;
        case 35: _t->askForTransfer(); break;
        case 36: _t->askForAttendedTransfer(); break;
        case 37: { bool _r = _t->transferTo((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: { bool _r = _t->transferToAnother((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 39: { bool _r = _t->getRemoteVideoEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->acceptVideoRequest(); break;
        case 41: _t->rejectVideoRequest(); break;
        case 42: _t->takeSnapshot(); break;
        case 43: _t->startRecording(); break;
        case 44: _t->stopRecording(); break;
        case 45: _t->sendDtmf((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 46: _t->verifyAuthenticationToken((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->updateStreams(); break;
        case 48: _t->toggleSpeakerMute(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::Call> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CallModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::meAdminChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CallModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::callErrorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CallModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::callIdChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CallModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::isInConferenceChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CallModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::conferenceModelChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CallModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::conferenceInfoModelChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CallModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::chatRoomModelChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CallModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::speakerMutedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CallModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::microMutedChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CallModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::cameraEnabledChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (CallModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::recordingChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (CallModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::remoteRecordingChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (CallModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::snapshotEnabledChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (CallModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::statsUpdated)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (CallModel::*)(CallStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::statusChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (CallModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::videoRequested)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (CallModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::securityUpdated)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (CallModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::encryptionChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (CallModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::isPQZrtpChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (CallModel::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::speakerVolumeGainChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (CallModel::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::microVolumeGainChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (CallModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::pausedByRemoteChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (CallModel::*)(unsigned int , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::cameraFirstFrameReceived)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (CallModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::fullPeerAddressChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (CallModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::transferAddressChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (CallModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallModel::conferenceVideoLayoutChanged)) {
                *result = 25;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 42:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinphoneEnums::ConferenceLayout >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CallModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPeerAddress(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getLocalAddress(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getFullPeerAddress(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getFullLocalAddress(); break;
        case 4: *reinterpret_cast< ContactModel**>(_v) = _t->getContactModel(); break;
        case 5: *reinterpret_cast< ChatRoomModel**>(_v) = _t->getChatRoomModel(); break;
        case 6: *reinterpret_cast< ConferenceModel**>(_v) = _t->getConferenceModel(); break;
        case 7: *reinterpret_cast< ConferenceInfoModel**>(_v) = _t->getConferenceInfoModel(); break;
        case 8: *reinterpret_cast< CallStatus*>(_v) = _t->getStatus(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getCallError(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->mCallId; break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->isOutgoing(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->isInConference(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->isConference(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->isOneToOne(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->getDuration(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getQuality(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getSpeakerVu(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getMicroVu(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->getSpeakerMuted(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->getMicroMuted(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getSpeakerVolumeGain(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->getMicroVolumeGain(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->getPausedByUser(); break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->getPausedByRemote(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->getVideoEnabled(); break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->getLocalVideoEnabled(); break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->getCameraEnabled(); break;
        case 28: *reinterpret_cast< bool*>(_v) = _t->getUpdating(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->getRecording(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->getRemoteRecording(); break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->getSnapshotEnabled(); break;
        case 32: *reinterpret_cast< QVariantList*>(_v) = _t->getAudioStats(); break;
        case 33: *reinterpret_cast< QVariantList*>(_v) = _t->getVideoStats(); break;
        case 34: *reinterpret_cast< QVariantList*>(_v) = _t->getEncryptionStats(); break;
        case 35: *reinterpret_cast< CallEncryption*>(_v) = _t->getEncryption(); break;
        case 36: *reinterpret_cast< bool*>(_v) = _t->isSecured(); break;
        case 37: *reinterpret_cast< QString*>(_v) = _t->getLocalSas(); break;
        case 38: *reinterpret_cast< QString*>(_v) = _t->getRemoteSas(); break;
        case 39: *reinterpret_cast< QString*>(_v) = _t->getSecuredString(); break;
        case 40: *reinterpret_cast< CallPQState*>(_v) = _t->mIsPQZrtp; break;
        case 41: *reinterpret_cast< QString*>(_v) = _t->getTransferAddress(); break;
        case 42: *reinterpret_cast< LinphoneEnums::ConferenceLayout*>(_v) = _t->getConferenceVideoLayout(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CallModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 10: _t->setCallId(*reinterpret_cast< QString*>(_v)); break;
        case 19: _t->setSpeakerMuted(*reinterpret_cast< bool*>(_v)); break;
        case 20: _t->setMicroMuted(*reinterpret_cast< bool*>(_v)); break;
        case 21: _t->setSpeakerVolumeGain(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setMicroVolumeGain(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setPausedByUser(*reinterpret_cast< bool*>(_v)); break;
        case 24: _t->setPausedByRemote(*reinterpret_cast< bool*>(_v)); break;
        case 25: _t->setVideoEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 26: _t->setVideoEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 27: _t->setCameraEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 35: _t->setEncryption(*reinterpret_cast< CallEncryption*>(_v)); break;
        case 40: _t->isPQZrtp(*reinterpret_cast< CallPQState*>(_v)); break;
        case 41: _t->setTransferAddress(*reinterpret_cast< QString*>(_v)); break;
        case 42: _t->changeConferenceVideoLayout(*reinterpret_cast< LinphoneEnums::ConferenceLayout*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject CallModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CallModel.data,
    qt_meta_data_CallModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CallModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CallModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CallModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CallModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 43;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 43;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 43;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 43;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 43;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CallModel::meAdminChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CallModel::callErrorChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CallModel::callIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CallModel::isInConferenceChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CallModel::conferenceModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void CallModel::conferenceInfoModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void CallModel::chatRoomModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void CallModel::speakerMutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CallModel::microMutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CallModel::cameraEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void CallModel::recordingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void CallModel::remoteRecordingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CallModel::snapshotEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void CallModel::statsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void CallModel::statusChanged(CallStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void CallModel::videoRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void CallModel::securityUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void CallModel::encryptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void CallModel::isPQZrtpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void CallModel::speakerVolumeGainChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void CallModel::microVolumeGainChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void CallModel::pausedByRemoteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void CallModel::cameraFirstFrameReceived(unsigned int _t1, unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void CallModel::fullPeerAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void CallModel::transferAddressChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void CallModel::conferenceVideoLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
