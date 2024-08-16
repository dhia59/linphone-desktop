/****************************************************************************
** Meta object code from reading C++ file 'CallsListModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/calls/CallsListModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CallsListModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CallsListModel_t {
    QByteArrayData data[42];
    char stringdata0[653];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CallsListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CallsListModel_t qt_meta_stringdata_CallsListModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CallsListModel"
QT_MOC_LITERAL(1, 15, 11), // "callRunning"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "index"
QT_MOC_LITERAL(4, 34, 10), // "CallModel*"
QT_MOC_LITERAL(5, 45, 9), // "callModel"
QT_MOC_LITERAL(6, 55, 17), // "callTransferAsked"
QT_MOC_LITERAL(7, 73, 25), // "callAttendedTransferAsked"
QT_MOC_LITERAL(8, 99, 19), // "callConferenceAsked"
QT_MOC_LITERAL(9, 119, 20), // "ConferenceInfoModel*"
QT_MOC_LITERAL(10, 140, 19), // "conferenceInfoModel"
QT_MOC_LITERAL(11, 160, 10), // "callMissed"
QT_MOC_LITERAL(12, 171, 20), // "canMergeCallsChanged"
QT_MOC_LITERAL(13, 192, 15), // "launchAudioCall"
QT_MOC_LITERAL(14, 208, 10), // "sipAddress"
QT_MOC_LITERAL(15, 219, 23), // "prepareTransfertAddress"
QT_MOC_LITERAL(16, 243, 22), // "QHash<QString,QString>"
QT_MOC_LITERAL(17, 266, 7), // "headers"
QT_MOC_LITERAL(18, 274, 21), // "launchSecureAudioCall"
QT_MOC_LITERAL(19, 296, 30), // "LinphoneEnums::MediaEncryption"
QT_MOC_LITERAL(20, 327, 10), // "encryption"
QT_MOC_LITERAL(21, 338, 15), // "launchVideoCall"
QT_MOC_LITERAL(22, 354, 23), // "autoSelectAfterCreation"
QT_MOC_LITERAL(23, 378, 7), // "options"
QT_MOC_LITERAL(24, 386, 10), // "launchChat"
QT_MOC_LITERAL(25, 397, 13), // "securityLevel"
QT_MOC_LITERAL(26, 411, 10), // "createChat"
QT_MOC_LITERAL(27, 422, 14), // "ChatRoomModel*"
QT_MOC_LITERAL(28, 437, 18), // "participantAddress"
QT_MOC_LITERAL(29, 456, 16), // "createSecureChat"
QT_MOC_LITERAL(30, 473, 7), // "subject"
QT_MOC_LITERAL(31, 481, 14), // "createChatRoom"
QT_MOC_LITERAL(32, 496, 12), // "participants"
QT_MOC_LITERAL(33, 509, 19), // "selectAfterCreation"
QT_MOC_LITERAL(34, 529, 21), // "prepareConferenceCall"
QT_MOC_LITERAL(35, 551, 5), // "model"
QT_MOC_LITERAL(36, 557, 18), // "addAllToConference"
QT_MOC_LITERAL(37, 576, 8), // "mergeAll"
QT_MOC_LITERAL(38, 585, 21), // "getRunningCallsNumber"
QT_MOC_LITERAL(39, 607, 17), // "terminateAllCalls"
QT_MOC_LITERAL(40, 625, 13), // "terminateCall"
QT_MOC_LITERAL(41, 639, 13) // "canMergeCalls"

    },
    "CallsListModel\0callRunning\0\0index\0"
    "CallModel*\0callModel\0callTransferAsked\0"
    "callAttendedTransferAsked\0callConferenceAsked\0"
    "ConferenceInfoModel*\0conferenceInfoModel\0"
    "callMissed\0canMergeCallsChanged\0"
    "launchAudioCall\0sipAddress\0"
    "prepareTransfertAddress\0QHash<QString,QString>\0"
    "headers\0launchSecureAudioCall\0"
    "LinphoneEnums::MediaEncryption\0"
    "encryption\0launchVideoCall\0"
    "autoSelectAfterCreation\0options\0"
    "launchChat\0securityLevel\0createChat\0"
    "ChatRoomModel*\0participantAddress\0"
    "createSecureChat\0subject\0createChatRoom\0"
    "participants\0selectAfterCreation\0"
    "prepareConferenceCall\0model\0"
    "addAllToConference\0mergeAll\0"
    "getRunningCallsNumber\0terminateAllCalls\0"
    "terminateCall\0canMergeCalls"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CallsListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       1,  262, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  149,    2, 0x06 /* Public */,
       6,    1,  154,    2, 0x06 /* Public */,
       7,    1,  157,    2, 0x06 /* Public */,
       8,    1,  160,    2, 0x06 /* Public */,
      11,    1,  163,    2, 0x06 /* Public */,
      12,    0,  166,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      13,    3,  167,    2, 0x02 /* Public */,
      13,    2,  174,    2, 0x22 /* Public | MethodCloned */,
      13,    1,  179,    2, 0x22 /* Public | MethodCloned */,
      18,    4,  182,    2, 0x02 /* Public */,
      18,    3,  191,    2, 0x22 /* Public | MethodCloned */,
      18,    2,  198,    2, 0x22 /* Public | MethodCloned */,
      21,    4,  203,    2, 0x02 /* Public */,
      21,    3,  212,    2, 0x22 /* Public | MethodCloned */,
      21,    2,  219,    2, 0x22 /* Public | MethodCloned */,
      21,    1,  224,    2, 0x22 /* Public | MethodCloned */,
      24,    2,  227,    2, 0x02 /* Public */,
      26,    1,  232,    2, 0x02 /* Public */,
      26,    1,  235,    2, 0x02 /* Public */,
      29,    2,  238,    2, 0x02 /* Public */,
      31,    4,  243,    2, 0x02 /* Public */,
      34,    1,  252,    2, 0x02 /* Public */,
      36,    0,  255,    2, 0x02 /* Public */,
      37,    0,  256,    2, 0x02 /* Public */,
      38,    0,  257,    2, 0x02 /* Public */,
      39,    0,  258,    2, 0x02 /* Public */,
      40,    1,  259,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 16,   14,   15,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 19, 0x80000000 | 16, QMetaType::QString,   14,   20,   17,   15,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 19, 0x80000000 | 16,   14,   20,   17,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 19,   14,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::QVariantMap,   14,   15,   22,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   14,   15,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::Int,   14,   25,
    0x80000000 | 27, QMetaType::QString,   28,
    0x80000000 | 27, 0x80000000 | 4,    2,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   30,   28,
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::Int, QMetaType::QVariantList, QMetaType::Bool,   30,   25,   32,   33,
    QMetaType::Void, 0x80000000 | 9,   35,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

 // properties: name, type, flags
      41, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       5,

       0        // eod
};

void CallsListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CallsListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->callRunning((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< CallModel*(*)>(_a[2]))); break;
        case 1: _t->callTransferAsked((*reinterpret_cast< CallModel*(*)>(_a[1]))); break;
        case 2: _t->callAttendedTransferAsked((*reinterpret_cast< CallModel*(*)>(_a[1]))); break;
        case 3: _t->callConferenceAsked((*reinterpret_cast< ConferenceInfoModel*(*)>(_a[1]))); break;
        case 4: _t->callMissed((*reinterpret_cast< CallModel*(*)>(_a[1]))); break;
        case 5: _t->canMergeCallsChanged(); break;
        case 6: _t->launchAudioCall((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QHash<QString,QString>(*)>(_a[3]))); break;
        case 7: _t->launchAudioCall((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->launchAudioCall((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->launchSecureAudioCall((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< LinphoneEnums::MediaEncryption(*)>(_a[2])),(*reinterpret_cast< const QHash<QString,QString>(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 10: _t->launchSecureAudioCall((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< LinphoneEnums::MediaEncryption(*)>(_a[2])),(*reinterpret_cast< const QHash<QString,QString>(*)>(_a[3]))); break;
        case 11: _t->launchSecureAudioCall((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< LinphoneEnums::MediaEncryption(*)>(_a[2]))); break;
        case 12: _t->launchVideoCall((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3])),(*reinterpret_cast< QVariantMap(*)>(_a[4]))); break;
        case 13: _t->launchVideoCall((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 14: _t->launchVideoCall((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: _t->launchVideoCall((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: { QVariantMap _r = _t->launchChat((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 17: { ChatRoomModel* _r = _t->createChat((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ChatRoomModel**>(_a[0]) = std::move(_r); }  break;
        case 18: { ChatRoomModel* _r = _t->createChat((*reinterpret_cast< CallModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ChatRoomModel**>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->createSecureChat((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { QVariantMap _r = _t->createChatRoom((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const QVariantList(*)>(_a[3])),(*reinterpret_cast< const bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->prepareConferenceCall((*reinterpret_cast< ConferenceInfoModel*(*)>(_a[1]))); break;
        case 22: { int _r = _t->addAllToConference();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->mergeAll(); break;
        case 24: { int _r = _t->getRunningCallsNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->terminateAllCalls(); break;
        case 26: _t->terminateCall((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CallModel* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CallModel* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CallModel* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CallModel* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinphoneEnums::MediaEncryption >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinphoneEnums::MediaEncryption >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinphoneEnums::MediaEncryption >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CallModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CallsListModel::*)(int , CallModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallsListModel::callRunning)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CallsListModel::*)(CallModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallsListModel::callTransferAsked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CallsListModel::*)(CallModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallsListModel::callAttendedTransferAsked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CallsListModel::*)(ConferenceInfoModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallsListModel::callConferenceAsked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CallsListModel::*)(CallModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallsListModel::callMissed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CallsListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallsListModel::canMergeCallsChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CallsListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->canMergeCalls(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject CallsListModel::staticMetaObject = { {
    &ProxyListModel::staticMetaObject,
    qt_meta_stringdata_CallsListModel.data,
    qt_meta_data_CallsListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CallsListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CallsListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CallsListModel.stringdata0))
        return static_cast<void*>(this);
    return ProxyListModel::qt_metacast(_clname);
}

int CallsListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProxyListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CallsListModel::callRunning(int _t1, CallModel * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CallsListModel::callTransferAsked(CallModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CallsListModel::callAttendedTransferAsked(CallModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CallsListModel::callConferenceAsked(ConferenceInfoModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CallsListModel::callMissed(CallModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CallsListModel::canMergeCallsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
