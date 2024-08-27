/****************************************************************************
** Meta object code from reading C++ file 'CoreHandlers.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/core/CoreHandlers.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CoreHandlers.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CoreHandlers_t {
    QByteArrayData data[58];
    char stringdata0[1147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoreHandlers_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoreHandlers_t qt_meta_stringdata_CoreHandlers = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CoreHandlers"
QT_MOC_LITERAL(1, 13, 23), // "authenticationRequested"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 35), // "std::shared_ptr<linphone::Aut..."
QT_MOC_LITERAL(4, 74, 8), // "authInfo"
QT_MOC_LITERAL(5, 83, 21), // "callEncryptionChanged"
QT_MOC_LITERAL(6, 105, 31), // "std::shared_ptr<linphone::Call>"
QT_MOC_LITERAL(7, 137, 4), // "call"
QT_MOC_LITERAL(8, 142, 14), // "callLogUpdated"
QT_MOC_LITERAL(9, 157, 34), // "std::shared_ptr<linphone::Cal..."
QT_MOC_LITERAL(10, 192, 16), // "callStateChanged"
QT_MOC_LITERAL(11, 209, 21), // "linphone::Call::State"
QT_MOC_LITERAL(12, 231, 5), // "state"
QT_MOC_LITERAL(13, 237, 18), // "callTransferFailed"
QT_MOC_LITERAL(14, 256, 21), // "callTransferSucceeded"
QT_MOC_LITERAL(15, 278, 11), // "callCreated"
QT_MOC_LITERAL(16, 290, 12), // "chatRoomRead"
QT_MOC_LITERAL(17, 303, 35), // "std::shared_ptr<linphone::Cha..."
QT_MOC_LITERAL(18, 339, 8), // "chatRoom"
QT_MOC_LITERAL(19, 348, 20), // "chatRoomStateChanged"
QT_MOC_LITERAL(20, 369, 25), // "linphone::ChatRoom::State"
QT_MOC_LITERAL(21, 395, 12), // "coreStarting"
QT_MOC_LITERAL(22, 408, 11), // "coreStarted"
QT_MOC_LITERAL(23, 420, 11), // "coreStopped"
QT_MOC_LITERAL(24, 432, 18), // "isComposingChanged"
QT_MOC_LITERAL(25, 451, 22), // "logsUploadStateChanged"
QT_MOC_LITERAL(26, 474, 40), // "linphone::Core::LogCollection..."
QT_MOC_LITERAL(27, 515, 11), // "std::string"
QT_MOC_LITERAL(28, 527, 4), // "info"
QT_MOC_LITERAL(29, 532, 16), // "messagesReceived"
QT_MOC_LITERAL(30, 549, 50), // "std::list<std::shared_ptr<lin..."
QT_MOC_LITERAL(31, 600, 8), // "messages"
QT_MOC_LITERAL(32, 609, 16), // "presenceReceived"
QT_MOC_LITERAL(33, 626, 10), // "sipAddress"
QT_MOC_LITERAL(34, 637, 46), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(35, 684, 13), // "presenceModel"
QT_MOC_LITERAL(36, 698, 22), // "presenceStatusReceived"
QT_MOC_LITERAL(37, 721, 33), // "std::shared_ptr<linphone::Fri..."
QT_MOC_LITERAL(38, 755, 7), // "contact"
QT_MOC_LITERAL(39, 763, 24), // "registrationStateChanged"
QT_MOC_LITERAL(40, 788, 34), // "std::shared_ptr<linphone::Acc..."
QT_MOC_LITERAL(41, 823, 7), // "account"
QT_MOC_LITERAL(42, 831, 27), // "linphone::RegistrationState"
QT_MOC_LITERAL(43, 859, 7), // "message"
QT_MOC_LITERAL(44, 867, 19), // "ecCalibrationResult"
QT_MOC_LITERAL(45, 887, 28), // "linphone::EcCalibratorStatus"
QT_MOC_LITERAL(46, 916, 6), // "status"
QT_MOC_LITERAL(47, 923, 7), // "delayMs"
QT_MOC_LITERAL(48, 931, 30), // "setLastRemoteProvisioningState"
QT_MOC_LITERAL(49, 962, 26), // "linphone::ConfiguringState"
QT_MOC_LITERAL(50, 989, 22), // "conferenceInfoReceived"
QT_MOC_LITERAL(51, 1012, 47), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(52, 1060, 14), // "conferenceInfo"
QT_MOC_LITERAL(53, 1075, 11), // "foundQRCode"
QT_MOC_LITERAL(54, 1087, 6), // "result"
QT_MOC_LITERAL(55, 1094, 17), // "accountFirstLogin"
QT_MOC_LITERAL(56, 1112, 13), // "tokenRecieved"
QT_MOC_LITERAL(57, 1126, 20) // "forwadingListUpdated"

    },
    "CoreHandlers\0authenticationRequested\0"
    "\0std::shared_ptr<linphone::AuthInfo>\0"
    "authInfo\0callEncryptionChanged\0"
    "std::shared_ptr<linphone::Call>\0call\0"
    "callLogUpdated\0std::shared_ptr<linphone::CallLog>\0"
    "callStateChanged\0linphone::Call::State\0"
    "state\0callTransferFailed\0callTransferSucceeded\0"
    "callCreated\0chatRoomRead\0"
    "std::shared_ptr<linphone::ChatRoom>\0"
    "chatRoom\0chatRoomStateChanged\0"
    "linphone::ChatRoom::State\0coreStarting\0"
    "coreStarted\0coreStopped\0isComposingChanged\0"
    "logsUploadStateChanged\0"
    "linphone::Core::LogCollectionUploadState\0"
    "std::string\0info\0messagesReceived\0"
    "std::list<std::shared_ptr<linphone::ChatMessage> >\0"
    "messages\0presenceReceived\0sipAddress\0"
    "std::shared_ptr<const linphone::PresenceModel>\0"
    "presenceModel\0presenceStatusReceived\0"
    "std::shared_ptr<linphone::Friend>\0"
    "contact\0registrationStateChanged\0"
    "std::shared_ptr<linphone::Account>\0"
    "account\0linphone::RegistrationState\0"
    "message\0ecCalibrationResult\0"
    "linphone::EcCalibratorStatus\0status\0"
    "delayMs\0setLastRemoteProvisioningState\0"
    "linphone::ConfiguringState\0"
    "conferenceInfoReceived\0"
    "std::shared_ptr<const linphone::ConferenceInfo>\0"
    "conferenceInfo\0foundQRCode\0result\0"
    "accountFirstLogin\0tokenRecieved\0"
    "forwadingListUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoreHandlers[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      25,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  139,    2, 0x06 /* Public */,
       5,    1,  142,    2, 0x06 /* Public */,
       8,    1,  145,    2, 0x06 /* Public */,
      10,    2,  148,    2, 0x06 /* Public */,
      13,    1,  153,    2, 0x06 /* Public */,
      14,    1,  156,    2, 0x06 /* Public */,
      15,    1,  159,    2, 0x06 /* Public */,
      16,    1,  162,    2, 0x06 /* Public */,
      19,    2,  165,    2, 0x06 /* Public */,
      21,    0,  170,    2, 0x06 /* Public */,
      22,    0,  171,    2, 0x06 /* Public */,
      23,    0,  172,    2, 0x06 /* Public */,
      24,    1,  173,    2, 0x06 /* Public */,
      25,    2,  176,    2, 0x06 /* Public */,
      29,    1,  181,    2, 0x06 /* Public */,
      32,    2,  184,    2, 0x06 /* Public */,
      36,    1,  189,    2, 0x06 /* Public */,
      39,    3,  192,    2, 0x06 /* Public */,
      44,    2,  199,    2, 0x06 /* Public */,
      48,    1,  204,    2, 0x06 /* Public */,
      50,    1,  207,    2, 0x06 /* Public */,
      53,    1,  210,    2, 0x06 /* Public */,
      55,    0,  213,    2, 0x06 /* Public */,
      56,    0,  214,    2, 0x06 /* Public */,
      57,    0,  215,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,    7,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 11,    7,   12,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 20,   18,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 27,   12,   28,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 34,   33,   35,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, 0x80000000 | 40, 0x80000000 | 42, 0x80000000 | 27,   41,   12,   43,
    QMetaType::Void, 0x80000000 | 45, QMetaType::Int,   46,   47,
    QMetaType::Void, 0x80000000 | 49,   12,
    QMetaType::Void, 0x80000000 | 51,   52,
    QMetaType::Void, 0x80000000 | 27,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CoreHandlers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CoreHandlers *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->authenticationRequested((*reinterpret_cast< const std::shared_ptr<linphone::AuthInfo>(*)>(_a[1]))); break;
        case 1: _t->callEncryptionChanged((*reinterpret_cast< const std::shared_ptr<linphone::Call>(*)>(_a[1]))); break;
        case 2: _t->callLogUpdated((*reinterpret_cast< const std::shared_ptr<linphone::CallLog>(*)>(_a[1]))); break;
        case 3: _t->callStateChanged((*reinterpret_cast< const std::shared_ptr<linphone::Call>(*)>(_a[1])),(*reinterpret_cast< linphone::Call::State(*)>(_a[2]))); break;
        case 4: _t->callTransferFailed((*reinterpret_cast< const std::shared_ptr<linphone::Call>(*)>(_a[1]))); break;
        case 5: _t->callTransferSucceeded((*reinterpret_cast< const std::shared_ptr<linphone::Call>(*)>(_a[1]))); break;
        case 6: _t->callCreated((*reinterpret_cast< const std::shared_ptr<linphone::Call>(*)>(_a[1]))); break;
        case 7: _t->chatRoomRead((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1]))); break;
        case 8: _t->chatRoomStateChanged((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1])),(*reinterpret_cast< linphone::ChatRoom::State(*)>(_a[2]))); break;
        case 9: _t->coreStarting(); break;
        case 10: _t->coreStarted(); break;
        case 11: _t->coreStopped(); break;
        case 12: _t->isComposingChanged((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1]))); break;
        case 13: _t->logsUploadStateChanged((*reinterpret_cast< linphone::Core::LogCollectionUploadState(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 14: _t->messagesReceived((*reinterpret_cast< const std::list<std::shared_ptr<linphone::ChatMessage> >(*)>(_a[1]))); break;
        case 15: _t->presenceReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::PresenceModel>(*)>(_a[2]))); break;
        case 16: _t->presenceStatusReceived((*reinterpret_cast< std::shared_ptr<linphone::Friend>(*)>(_a[1]))); break;
        case 17: _t->registrationStateChanged((*reinterpret_cast< const std::shared_ptr<linphone::Account>(*)>(_a[1])),(*reinterpret_cast< linphone::RegistrationState(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        case 18: _t->ecCalibrationResult((*reinterpret_cast< linphone::EcCalibratorStatus(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->setLastRemoteProvisioningState((*reinterpret_cast< const linphone::ConfiguringState(*)>(_a[1]))); break;
        case 20: _t->conferenceInfoReceived((*reinterpret_cast< const std::shared_ptr<const linphone::ConferenceInfo>(*)>(_a[1]))); break;
        case 21: _t->foundQRCode((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 22: _t->accountFirstLogin(); break;
        case 23: _t->tokenRecieved(); break;
        case 24: _t->forwadingListUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CoreHandlers::*)(const std::shared_ptr<linphone::AuthInfo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::authenticationRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(const std::shared_ptr<linphone::Call> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::callEncryptionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(const std::shared_ptr<linphone::CallLog> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::callLogUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(const std::shared_ptr<linphone::Call> & , linphone::Call::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::callStateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(const std::shared_ptr<linphone::Call> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::callTransferFailed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(const std::shared_ptr<linphone::Call> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::callTransferSucceeded)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(const std::shared_ptr<linphone::Call> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::callCreated)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(const std::shared_ptr<linphone::ChatRoom> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::chatRoomRead)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(const std::shared_ptr<linphone::ChatRoom> & , linphone::ChatRoom::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::chatRoomStateChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::coreStarting)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::coreStarted)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::coreStopped)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(const std::shared_ptr<linphone::ChatRoom> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::isComposingChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(linphone::Core::LogCollectionUploadState , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::logsUploadStateChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(const std::list<std::shared_ptr<linphone::ChatMessage>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::messagesReceived)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(const QString & , const std::shared_ptr<const linphone::PresenceModel> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::presenceReceived)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(std::shared_ptr<linphone::Friend> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::presenceStatusReceived)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(const std::shared_ptr<linphone::Account> & , linphone::RegistrationState , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::registrationStateChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(linphone::EcCalibratorStatus , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::ecCalibrationResult)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(const linphone::ConfiguringState & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::setLastRemoteProvisioningState)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(const std::shared_ptr<const linphone::ConferenceInfo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::conferenceInfoReceived)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::foundQRCode)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::accountFirstLogin)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::tokenRecieved)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (CoreHandlers::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreHandlers::forwadingListUpdated)) {
                *result = 24;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CoreHandlers::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CoreHandlers.data,
    qt_meta_data_CoreHandlers,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CoreHandlers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoreHandlers::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CoreHandlers.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "linphone::CoreListener"))
        return static_cast< linphone::CoreListener*>(this);
    return QObject::qt_metacast(_clname);
}

int CoreHandlers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void CoreHandlers::authenticationRequested(const std::shared_ptr<linphone::AuthInfo> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CoreHandlers::callEncryptionChanged(const std::shared_ptr<linphone::Call> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CoreHandlers::callLogUpdated(const std::shared_ptr<linphone::CallLog> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CoreHandlers::callStateChanged(const std::shared_ptr<linphone::Call> & _t1, linphone::Call::State _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CoreHandlers::callTransferFailed(const std::shared_ptr<linphone::Call> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CoreHandlers::callTransferSucceeded(const std::shared_ptr<linphone::Call> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CoreHandlers::callCreated(const std::shared_ptr<linphone::Call> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CoreHandlers::chatRoomRead(const std::shared_ptr<linphone::ChatRoom> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CoreHandlers::chatRoomStateChanged(const std::shared_ptr<linphone::ChatRoom> & _t1, linphone::ChatRoom::State _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CoreHandlers::coreStarting()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void CoreHandlers::coreStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void CoreHandlers::coreStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void CoreHandlers::isComposingChanged(const std::shared_ptr<linphone::ChatRoom> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void CoreHandlers::logsUploadStateChanged(linphone::Core::LogCollectionUploadState _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void CoreHandlers::messagesReceived(const std::list<std::shared_ptr<linphone::ChatMessage>> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void CoreHandlers::presenceReceived(const QString & _t1, const std::shared_ptr<const linphone::PresenceModel> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void CoreHandlers::presenceStatusReceived(std::shared_ptr<linphone::Friend> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void CoreHandlers::registrationStateChanged(const std::shared_ptr<linphone::Account> & _t1, linphone::RegistrationState _t2, const std::string & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void CoreHandlers::ecCalibrationResult(linphone::EcCalibratorStatus _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void CoreHandlers::setLastRemoteProvisioningState(const linphone::ConfiguringState & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void CoreHandlers::conferenceInfoReceived(const std::shared_ptr<const linphone::ConferenceInfo> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void CoreHandlers::foundQRCode(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void CoreHandlers::accountFirstLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void CoreHandlers::tokenRecieved()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void CoreHandlers::forwadingListUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
