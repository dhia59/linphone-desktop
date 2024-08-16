/****************************************************************************
** Meta object code from reading C++ file 'ChatNoticeModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/chat-events/ChatNoticeModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatNoticeModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatNoticeModel_t {
    QByteArrayData data[17];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatNoticeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatNoticeModel_t qt_meta_stringdata_ChatNoticeModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ChatNoticeModel"
QT_MOC_LITERAL(1, 16, 11), // "nameChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "statusChanged"
QT_MOC_LITERAL(4, 43, 19), // "eventLogTypeChanged"
QT_MOC_LITERAL(5, 63, 4), // "type"
QT_MOC_LITERAL(6, 68, 24), // "ChatRoomModel::EntryType"
QT_MOC_LITERAL(7, 93, 9), // "timestamp"
QT_MOC_LITERAL(8, 103, 17), // "receivedTimestamp"
QT_MOC_LITERAL(9, 121, 4), // "name"
QT_MOC_LITERAL(10, 126, 6), // "status"
QT_MOC_LITERAL(11, 133, 10), // "NoticeType"
QT_MOC_LITERAL(12, 144, 12), // "eventLogType"
QT_MOC_LITERAL(13, 157, 27), // "LinphoneEnums::EventLogType"
QT_MOC_LITERAL(14, 185, 13), // "NoticeMessage"
QT_MOC_LITERAL(15, 199, 11), // "NoticeError"
QT_MOC_LITERAL(16, 211, 20) // "NoticeUnreadMessages"

    },
    "ChatNoticeModel\0nameChanged\0\0statusChanged\0"
    "eventLogTypeChanged\0type\0"
    "ChatRoomModel::EntryType\0timestamp\0"
    "receivedTimestamp\0name\0status\0NoticeType\0"
    "eventLogType\0LinphoneEnums::EventLogType\0"
    "NoticeMessage\0NoticeError\0"
    "NoticeUnreadMessages"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatNoticeModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   32, // properties
       1,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x00095409,
       7, QMetaType::QDateTime, 0x00095401,
       8, QMetaType::QDateTime, 0x00095401,
       9, QMetaType::QString, 0x00495103,
      10, 0x80000000 | 11, 0x0049510b,
      12, 0x80000000 | 13, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       1,
       2,

 // enums: name, alias, flags, count, data
      11,   11, 0x0,    3,   61,

 // enum data: key, value
      14, uint(ChatNoticeModel::NoticeMessage),
      15, uint(ChatNoticeModel::NoticeError),
      16, uint(ChatNoticeModel::NoticeUnreadMessages),

       0        // eod
};

void ChatNoticeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatNoticeModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->statusChanged(); break;
        case 2: _t->eventLogTypeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatNoticeModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatNoticeModel::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatNoticeModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatNoticeModel::statusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChatNoticeModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatNoticeModel::eventLogTypeChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinphoneEnums::EventLogType >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ChatNoticeModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ChatRoomModel::EntryType*>(_v) = _t->mType; break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = _t->mTimestamp; break;
        case 2: *reinterpret_cast< QDateTime*>(_v) = _t->mReceivedTimestamp; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->mName; break;
        case 4: *reinterpret_cast< NoticeType*>(_v) = _t->mStatus; break;
        case 5: *reinterpret_cast< LinphoneEnums::EventLogType*>(_v) = _t->mEventLogType; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ChatNoticeModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setStatus(*reinterpret_cast< NoticeType*>(_v)); break;
        case 5: _t->setEventLogType(*reinterpret_cast< LinphoneEnums::EventLogType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_ChatNoticeModel[] = {
        &ChatRoomModel::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject ChatNoticeModel::staticMetaObject = { {
    &ChatEvent::staticMetaObject,
    qt_meta_stringdata_ChatNoticeModel.data,
    qt_meta_data_ChatNoticeModel,
    qt_static_metacall,
    qt_meta_extradata_ChatNoticeModel,
    nullptr
} };


const QMetaObject *ChatNoticeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatNoticeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatNoticeModel.stringdata0))
        return static_cast<void*>(this);
    return ChatEvent::qt_metacast(_clname);
}

int ChatNoticeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChatEvent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ChatNoticeModel::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ChatNoticeModel::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ChatNoticeModel::eventLogTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
