/****************************************************************************
** Meta object code from reading C++ file 'ChatMessageModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/chat-events/ChatMessageModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatMessageModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatMessageModel_t {
    QByteArrayData data[41];
    char stringdata0[663];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatMessageModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatMessageModel_t qt_meta_stringdata_ChatMessageModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ChatMessageModel"
QT_MOC_LITERAL(1, 17, 18), // "isEphemeralChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 26), // "ephemeralExpireTimeChanged"
QT_MOC_LITERAL(4, 64, 12), // "stateChanged"
QT_MOC_LITERAL(5, 77, 20), // "wasDownloadedChanged"
QT_MOC_LITERAL(6, 98, 14), // "contentChanged"
QT_MOC_LITERAL(7, 113, 17), // "isOutgoingChanged"
QT_MOC_LITERAL(8, 131, 18), // "fileContentChanged"
QT_MOC_LITERAL(9, 150, 6), // "remove"
QT_MOC_LITERAL(10, 157, 17), // "ChatMessageModel*"
QT_MOC_LITERAL(11, 175, 5), // "model"
QT_MOC_LITERAL(12, 181, 22), // "getEphemeralExpireTime"
QT_MOC_LITERAL(13, 204, 20), // "getEphemeralLifetime"
QT_MOC_LITERAL(14, 225, 18), // "getProxyImdnStates"
QT_MOC_LITERAL(15, 244, 31), // "ParticipantImdnStateProxyModel*"
QT_MOC_LITERAL(16, 276, 13), // "resendMessage"
QT_MOC_LITERAL(17, 290, 15), // "fromDisplayName"
QT_MOC_LITERAL(18, 306, 27), // "fromDisplayNameReplyMessage"
QT_MOC_LITERAL(19, 334, 14), // "fromSipAddress"
QT_MOC_LITERAL(20, 349, 13), // "toDisplayName"
QT_MOC_LITERAL(21, 363, 12), // "toSipAddress"
QT_MOC_LITERAL(22, 376, 12), // "contactModel"
QT_MOC_LITERAL(23, 389, 13), // "ContactModel*"
QT_MOC_LITERAL(24, 403, 11), // "isEphemeral"
QT_MOC_LITERAL(25, 415, 19), // "ephemeralExpireTime"
QT_MOC_LITERAL(26, 435, 17), // "ephemeralLifetime"
QT_MOC_LITERAL(27, 453, 5), // "state"
QT_MOC_LITERAL(28, 459, 31), // "LinphoneEnums::ChatMessageState"
QT_MOC_LITERAL(29, 491, 10), // "isOutgoing"
QT_MOC_LITERAL(30, 502, 13), // "wasDownloaded"
QT_MOC_LITERAL(31, 516, 4), // "type"
QT_MOC_LITERAL(32, 521, 24), // "ChatRoomModel::EntryType"
QT_MOC_LITERAL(33, 546, 9), // "timestamp"
QT_MOC_LITERAL(34, 556, 17), // "receivedTimestamp"
QT_MOC_LITERAL(35, 574, 7), // "content"
QT_MOC_LITERAL(36, 582, 7), // "isReply"
QT_MOC_LITERAL(37, 590, 21), // "replyChatMessageModel"
QT_MOC_LITERAL(38, 612, 9), // "isForward"
QT_MOC_LITERAL(39, 622, 14), // "getForwardInfo"
QT_MOC_LITERAL(40, 637, 25) // "getForwardInfoDisplayName"

    },
    "ChatMessageModel\0isEphemeralChanged\0"
    "\0ephemeralExpireTimeChanged\0stateChanged\0"
    "wasDownloadedChanged\0contentChanged\0"
    "isOutgoingChanged\0fileContentChanged\0"
    "remove\0ChatMessageModel*\0model\0"
    "getEphemeralExpireTime\0getEphemeralLifetime\0"
    "getProxyImdnStates\0ParticipantImdnStateProxyModel*\0"
    "resendMessage\0fromDisplayName\0"
    "fromDisplayNameReplyMessage\0fromSipAddress\0"
    "toDisplayName\0toSipAddress\0contactModel\0"
    "ContactModel*\0isEphemeral\0ephemeralExpireTime\0"
    "ephemeralLifetime\0state\0"
    "LinphoneEnums::ChatMessageState\0"
    "isOutgoing\0wasDownloaded\0type\0"
    "ChatRoomModel::EntryType\0timestamp\0"
    "receivedTimestamp\0content\0isReply\0"
    "replyChatMessageModel\0isForward\0"
    "getForwardInfo\0getForwardInfoDisplayName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatMessageModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      21,   88, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,
       8,    0,   80,    2, 0x06 /* Public */,
       9,    1,   81,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    0,   84,    2, 0x02 /* Public */,
      13,    0,   85,    2, 0x02 /* Public */,
      14,    0,   86,    2, 0x02 /* Public */,
      16,    0,   87,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

 // methods: parameters
    QMetaType::LongLong,
    QMetaType::Long,
    0x80000000 | 15,
    QMetaType::Void,

 // properties: name, type, flags
      17, QMetaType::QString, 0x00095401,
      18, QMetaType::QString, 0x00095401,
      19, QMetaType::QString, 0x00095401,
      20, QMetaType::QString, 0x00095401,
      21, QMetaType::QString, 0x00095401,
      22, 0x80000000 | 23, 0x00095409,
      24, QMetaType::Bool, 0x00495001,
      25, QMetaType::LongLong, 0x00495001,
      26, QMetaType::Long, 0x00095401,
      27, 0x80000000 | 28, 0x00495009,
      29, QMetaType::Bool, 0x00495001,
      30, QMetaType::Bool, 0x00495103,
      31, 0x80000000 | 32, 0x00095409,
      33, QMetaType::QDateTime, 0x00095401,
      34, QMetaType::QDateTime, 0x00095401,
      35, QMetaType::QString, 0x00495003,
      36, QMetaType::Bool, 0x00095401,
      37, 0x80000000 | 10, 0x00095409,
      38, QMetaType::Bool, 0x00095401,
      39, QMetaType::QString, 0x00095401,
      40, QMetaType::QString, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       0,
       2,
       5,
       3,
       0,
       0,
       0,
       4,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void ChatMessageModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatMessageModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isEphemeralChanged(); break;
        case 1: _t->ephemeralExpireTimeChanged(); break;
        case 2: _t->stateChanged(); break;
        case 3: _t->wasDownloadedChanged(); break;
        case 4: _t->contentChanged(); break;
        case 5: _t->isOutgoingChanged(); break;
        case 6: _t->fileContentChanged(); break;
        case 7: _t->remove((*reinterpret_cast< ChatMessageModel*(*)>(_a[1]))); break;
        case 8: { qint64 _r = _t->getEphemeralExpireTime();
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 9: { long _r = _t->getEphemeralLifetime();
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = std::move(_r); }  break;
        case 10: { ParticipantImdnStateProxyModel* _r = _t->getProxyImdnStates();
            if (_a[0]) *reinterpret_cast< ParticipantImdnStateProxyModel**>(_a[0]) = std::move(_r); }  break;
        case 11: _t->resendMessage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChatMessageModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatMessageModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMessageModel::isEphemeralChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatMessageModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMessageModel::ephemeralExpireTimeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChatMessageModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMessageModel::stateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChatMessageModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMessageModel::wasDownloadedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ChatMessageModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMessageModel::contentChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ChatMessageModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMessageModel::isOutgoingChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ChatMessageModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMessageModel::fileContentChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ChatMessageModel::*)(ChatMessageModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMessageModel::remove)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChatMessageModel* >(); break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinphoneEnums::ChatMessageState >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ChatMessageModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getFromDisplayName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getFromDisplayNameReplyMessage(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getFromSipAddress(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getToDisplayName(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getToSipAddress(); break;
        case 5: *reinterpret_cast< ContactModel**>(_v) = _t->getContactModel(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isEphemeral(); break;
        case 7: *reinterpret_cast< qint64*>(_v) = _t->getEphemeralExpireTime(); break;
        case 8: *reinterpret_cast< long*>(_v) = _t->getEphemeralLifetime(); break;
        case 9: *reinterpret_cast< LinphoneEnums::ChatMessageState*>(_v) = _t->getState(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isOutgoing(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->mWasDownloaded; break;
        case 12: *reinterpret_cast< ChatRoomModel::EntryType*>(_v) = _t->mType; break;
        case 13: *reinterpret_cast< QDateTime*>(_v) = _t->mTimestamp; break;
        case 14: *reinterpret_cast< QDateTime*>(_v) = _t->mReceivedTimestamp; break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->mContent; break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->isReply(); break;
        case 17: *reinterpret_cast< ChatMessageModel**>(_v) = _t->getReplyChatMessageModel(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->isForward(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->getForwardInfo(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->getForwardInfoDisplayName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ChatMessageModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 11: _t->setWasDownloaded(*reinterpret_cast< bool*>(_v)); break;
        case 15:
            if (_t->mContent != *reinterpret_cast< QString*>(_v)) {
                _t->mContent = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->contentChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_ChatMessageModel[] = {
        &ChatRoomModel::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject ChatMessageModel::staticMetaObject = { {
    &ChatEvent::staticMetaObject,
    qt_meta_stringdata_ChatMessageModel.data,
    qt_meta_data_ChatMessageModel,
    qt_static_metacall,
    qt_meta_extradata_ChatMessageModel,
    nullptr
} };


const QMetaObject *ChatMessageModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatMessageModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatMessageModel.stringdata0))
        return static_cast<void*>(this);
    return ChatEvent::qt_metacast(_clname);
}

int ChatMessageModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChatEvent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 21;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ChatMessageModel::isEphemeralChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ChatMessageModel::ephemeralExpireTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ChatMessageModel::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ChatMessageModel::wasDownloadedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ChatMessageModel::contentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ChatMessageModel::isOutgoingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ChatMessageModel::fileContentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ChatMessageModel::remove(ChatMessageModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
