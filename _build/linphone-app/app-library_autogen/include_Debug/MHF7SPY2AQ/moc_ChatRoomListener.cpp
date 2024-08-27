/****************************************************************************
** Meta object code from reading C++ file 'ChatRoomListener.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/chat-room/ChatRoomListener.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatRoomListener.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatRoomListener_t {
    QByteArrayData data[48];
    char stringdata0[1078];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatRoomListener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatRoomListener_t qt_meta_stringdata_ChatRoomListener = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ChatRoomListener"
QT_MOC_LITERAL(1, 17, 19), // "isComposingReceived"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 35), // "std::shared_ptr<linphone::Cha..."
QT_MOC_LITERAL(4, 74, 8), // "chatRoom"
QT_MOC_LITERAL(5, 83, 40), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(6, 124, 13), // "remoteAddress"
QT_MOC_LITERAL(7, 138, 11), // "isComposing"
QT_MOC_LITERAL(8, 150, 15), // "messageReceived"
QT_MOC_LITERAL(9, 166, 38), // "std::shared_ptr<linphone::Cha..."
QT_MOC_LITERAL(10, 205, 7), // "message"
QT_MOC_LITERAL(11, 213, 16), // "messagesReceived"
QT_MOC_LITERAL(12, 230, 50), // "std::list<std::shared_ptr<lin..."
QT_MOC_LITERAL(13, 281, 8), // "messages"
QT_MOC_LITERAL(14, 290, 8), // "newEvent"
QT_MOC_LITERAL(15, 299, 41), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(16, 341, 8), // "eventLog"
QT_MOC_LITERAL(17, 350, 9), // "newEvents"
QT_MOC_LITERAL(18, 360, 47), // "std::list<std::shared_ptr<lin..."
QT_MOC_LITERAL(19, 408, 9), // "eventLogs"
QT_MOC_LITERAL(20, 418, 19), // "chatMessageReceived"
QT_MOC_LITERAL(21, 438, 20), // "chatMessagesReceived"
QT_MOC_LITERAL(22, 459, 18), // "chatMessageSending"
QT_MOC_LITERAL(23, 478, 15), // "chatMessageSent"
QT_MOC_LITERAL(24, 494, 16), // "participantAdded"
QT_MOC_LITERAL(25, 511, 18), // "participantRemoved"
QT_MOC_LITERAL(26, 530, 29), // "participantAdminStatusChanged"
QT_MOC_LITERAL(27, 560, 12), // "stateChanged"
QT_MOC_LITERAL(28, 573, 25), // "linphone::ChatRoom::State"
QT_MOC_LITERAL(29, 599, 8), // "newState"
QT_MOC_LITERAL(30, 608, 13), // "securityEvent"
QT_MOC_LITERAL(31, 622, 14), // "subjectChanged"
QT_MOC_LITERAL(32, 637, 28), // "undecryptableMessageReceived"
QT_MOC_LITERAL(33, 666, 22), // "participantDeviceAdded"
QT_MOC_LITERAL(34, 689, 24), // "participantDeviceRemoved"
QT_MOC_LITERAL(35, 714, 16), // "conferenceJoined"
QT_MOC_LITERAL(36, 731, 14), // "conferenceLeft"
QT_MOC_LITERAL(37, 746, 14), // "ephemeralEvent"
QT_MOC_LITERAL(38, 761, 28), // "ephemeralMessageTimerStarted"
QT_MOC_LITERAL(39, 790, 23), // "ephemeralMessageDeleted"
QT_MOC_LITERAL(40, 814, 27), // "conferenceAddressGeneration"
QT_MOC_LITERAL(41, 842, 44), // "participantRegistrationSubscr..."
QT_MOC_LITERAL(42, 887, 18), // "participantAddress"
QT_MOC_LITERAL(43, 906, 46), // "participantRegistrationUnsubs..."
QT_MOC_LITERAL(44, 953, 25), // "chatMessageShouldBeStored"
QT_MOC_LITERAL(45, 979, 38), // "chatMessageParticipantImdnSta..."
QT_MOC_LITERAL(46, 1018, 53), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(47, 1072, 5) // "state"

    },
    "ChatRoomListener\0isComposingReceived\0"
    "\0std::shared_ptr<linphone::ChatRoom>\0"
    "chatRoom\0std::shared_ptr<const linphone::Address>\0"
    "remoteAddress\0isComposing\0messageReceived\0"
    "std::shared_ptr<linphone::ChatMessage>\0"
    "message\0messagesReceived\0"
    "std::list<std::shared_ptr<linphone::ChatMessage> >\0"
    "messages\0newEvent\0"
    "std::shared_ptr<const linphone::EventLog>\0"
    "eventLog\0newEvents\0"
    "std::list<std::shared_ptr<linphone::EventLog> >\0"
    "eventLogs\0chatMessageReceived\0"
    "chatMessagesReceived\0chatMessageSending\0"
    "chatMessageSent\0participantAdded\0"
    "participantRemoved\0participantAdminStatusChanged\0"
    "stateChanged\0linphone::ChatRoom::State\0"
    "newState\0securityEvent\0subjectChanged\0"
    "undecryptableMessageReceived\0"
    "participantDeviceAdded\0participantDeviceRemoved\0"
    "conferenceJoined\0conferenceLeft\0"
    "ephemeralEvent\0ephemeralMessageTimerStarted\0"
    "ephemeralMessageDeleted\0"
    "conferenceAddressGeneration\0"
    "participantRegistrationSubscriptionRequested\0"
    "participantAddress\0"
    "participantRegistrationUnsubscriptionRequested\0"
    "chatMessageShouldBeStored\0"
    "chatMessageParticipantImdnStateChanged\0"
    "std::shared_ptr<const linphone::ParticipantImdnState>\0"
    "state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatRoomListener[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      28,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  154,    2, 0x06 /* Public */,
       8,    2,  161,    2, 0x06 /* Public */,
      11,    2,  166,    2, 0x06 /* Public */,
      14,    2,  171,    2, 0x06 /* Public */,
      17,    2,  176,    2, 0x06 /* Public */,
      20,    2,  181,    2, 0x06 /* Public */,
      21,    2,  186,    2, 0x06 /* Public */,
      22,    2,  191,    2, 0x06 /* Public */,
      23,    2,  196,    2, 0x06 /* Public */,
      24,    2,  201,    2, 0x06 /* Public */,
      25,    2,  206,    2, 0x06 /* Public */,
      26,    2,  211,    2, 0x06 /* Public */,
      27,    2,  216,    2, 0x06 /* Public */,
      30,    2,  221,    2, 0x06 /* Public */,
      31,    2,  226,    2, 0x06 /* Public */,
      32,    2,  231,    2, 0x06 /* Public */,
      33,    2,  236,    2, 0x06 /* Public */,
      34,    2,  241,    2, 0x06 /* Public */,
      35,    2,  246,    2, 0x06 /* Public */,
      36,    2,  251,    2, 0x06 /* Public */,
      37,    2,  256,    2, 0x06 /* Public */,
      38,    2,  261,    2, 0x06 /* Public */,
      39,    2,  266,    2, 0x06 /* Public */,
      40,    1,  271,    2, 0x06 /* Public */,
      41,    2,  274,    2, 0x06 /* Public */,
      43,    2,  279,    2, 0x06 /* Public */,
      44,    2,  284,    2, 0x06 /* Public */,
      45,    3,  289,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Bool,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9,    4,   10,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 12,    4,   13,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 18,    4,   19,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 18,    4,   19,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 28,    4,   29,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9,    4,   10,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    4,   16,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,   42,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,   42,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9,    4,   10,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9, 0x80000000 | 46,    4,   10,   47,

       0        // eod
};

void ChatRoomListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatRoomListener *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isComposingReceived((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::Address>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->messageReceived((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[2]))); break;
        case 2: _t->messagesReceived((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::list<std::shared_ptr<linphone::ChatMessage> >(*)>(_a[2]))); break;
        case 3: _t->newEvent((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 4: _t->newEvents((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::list<std::shared_ptr<linphone::EventLog> >(*)>(_a[2]))); break;
        case 5: _t->chatMessageReceived((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 6: _t->chatMessagesReceived((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::list<std::shared_ptr<linphone::EventLog> >(*)>(_a[2]))); break;
        case 7: _t->chatMessageSending((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 8: _t->chatMessageSent((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 9: _t->participantAdded((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 10: _t->participantRemoved((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 11: _t->participantAdminStatusChanged((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 12: _t->stateChanged((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< linphone::ChatRoom::State(*)>(_a[2]))); break;
        case 13: _t->securityEvent((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 14: _t->subjectChanged((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 15: _t->undecryptableMessageReceived((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[2]))); break;
        case 16: _t->participantDeviceAdded((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 17: _t->participantDeviceRemoved((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 18: _t->conferenceJoined((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 19: _t->conferenceLeft((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 20: _t->ephemeralEvent((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 21: _t->ephemeralMessageTimerStarted((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 22: _t->ephemeralMessageDeleted((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::EventLog>(*)>(_a[2]))); break;
        case 23: _t->conferenceAddressGeneration((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1]))); break;
        case 24: _t->participantRegistrationSubscriptionRequested((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::Address>(*)>(_a[2]))); break;
        case 25: _t->participantRegistrationUnsubscriptionRequested((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::Address>(*)>(_a[2]))); break;
        case 26: _t->chatMessageShouldBeStored((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[2]))); break;
        case 27: _t->chatMessageParticipantImdnStateChanged((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[2])),(*reinterpret_cast< const std::shared_ptr<const linphone::ParticipantImdnState>(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::Address> & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::isComposingReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<linphone::ChatMessage> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::messageReceived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::list<std::shared_ptr<linphone::ChatMessage>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::messagesReceived)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::newEvent)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::list<std::shared_ptr<linphone::EventLog>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::newEvents)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::chatMessageReceived)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::list<std::shared_ptr<linphone::EventLog>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::chatMessagesReceived)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::chatMessageSending)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::chatMessageSent)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::participantAdded)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::participantRemoved)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::participantAdminStatusChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , linphone::ChatRoom::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::stateChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::securityEvent)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::subjectChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<linphone::ChatMessage> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::undecryptableMessageReceived)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::participantDeviceAdded)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::participantDeviceRemoved)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::conferenceJoined)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::conferenceLeft)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::ephemeralEvent)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::ephemeralMessageTimerStarted)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::EventLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::ephemeralMessageDeleted)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::conferenceAddressGeneration)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::Address> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::participantRegistrationSubscriptionRequested)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<const linphone::Address> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::participantRegistrationUnsubscriptionRequested)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<linphone::ChatMessage> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::chatMessageShouldBeStored)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (ChatRoomListener::*)(const std::shared_ptr<linphone::ChatRoom> & , const std::shared_ptr<linphone::ChatMessage> & , const std::shared_ptr<const linphone::ParticipantImdnState> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoomListener::chatMessageParticipantImdnStateChanged)) {
                *result = 27;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChatRoomListener::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ChatRoomListener.data,
    qt_meta_data_ChatRoomListener,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChatRoomListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatRoomListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatRoomListener.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "linphone::ChatRoomListener"))
        return static_cast< linphone::ChatRoomListener*>(this);
    return QObject::qt_metacast(_clname);
}

int ChatRoomListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void ChatRoomListener::isComposingReceived(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::Address> & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChatRoomListener::messageReceived(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<linphone::ChatMessage> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChatRoomListener::messagesReceived(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::list<std::shared_ptr<linphone::ChatMessage>> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChatRoomListener::newEvent(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::EventLog> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ChatRoomListener::newEvents(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::list<std::shared_ptr<linphone::EventLog>> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ChatRoomListener::chatMessageReceived(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::EventLog> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ChatRoomListener::chatMessagesReceived(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::list<std::shared_ptr<linphone::EventLog>> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ChatRoomListener::chatMessageSending(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::EventLog> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ChatRoomListener::chatMessageSent(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::EventLog> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ChatRoomListener::participantAdded(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::EventLog> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ChatRoomListener::participantRemoved(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::EventLog> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ChatRoomListener::participantAdminStatusChanged(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::EventLog> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ChatRoomListener::stateChanged(const std::shared_ptr<linphone::ChatRoom> & _t1, linphone::ChatRoom::State _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void ChatRoomListener::securityEvent(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::EventLog> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void ChatRoomListener::subjectChanged(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::EventLog> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void ChatRoomListener::undecryptableMessageReceived(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<linphone::ChatMessage> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void ChatRoomListener::participantDeviceAdded(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::EventLog> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void ChatRoomListener::participantDeviceRemoved(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::EventLog> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void ChatRoomListener::conferenceJoined(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::EventLog> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void ChatRoomListener::conferenceLeft(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::EventLog> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void ChatRoomListener::ephemeralEvent(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::EventLog> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void ChatRoomListener::ephemeralMessageTimerStarted(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::EventLog> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void ChatRoomListener::ephemeralMessageDeleted(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::EventLog> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void ChatRoomListener::conferenceAddressGeneration(const std::shared_ptr<linphone::ChatRoom> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void ChatRoomListener::participantRegistrationSubscriptionRequested(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::Address> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void ChatRoomListener::participantRegistrationUnsubscriptionRequested(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<const linphone::Address> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void ChatRoomListener::chatMessageShouldBeStored(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<linphone::ChatMessage> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void ChatRoomListener::chatMessageParticipantImdnStateChanged(const std::shared_ptr<linphone::ChatRoom> & _t1, const std::shared_ptr<linphone::ChatMessage> & _t2, const std::shared_ptr<const linphone::ParticipantImdnState> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
