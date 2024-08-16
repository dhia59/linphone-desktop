/****************************************************************************
** Meta object code from reading C++ file 'TimelineModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/timeline/TimelineModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimelineModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TimelineModel_t {
    QByteArrayData data[24];
    char stringdata0[401];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimelineModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimelineModel_t qt_meta_stringdata_TimelineModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TimelineModel"
QT_MOC_LITERAL(1, 14, 22), // "fullPeerAddressChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 23), // "fullLocalAddressChanged"
QT_MOC_LITERAL(4, 62, 15), // "usernameChanged"
QT_MOC_LITERAL(5, 78, 13), // "avatarChanged"
QT_MOC_LITERAL(6, 92, 21), // "presenceStatusChanged"
QT_MOC_LITERAL(7, 114, 15), // "selectedChanged"
QT_MOC_LITERAL(8, 130, 8), // "selected"
QT_MOC_LITERAL(9, 139, 14), // "conferenceLeft"
QT_MOC_LITERAL(10, 154, 15), // "chatRoomDeleted"
QT_MOC_LITERAL(11, 170, 11), // "dataChanged"
QT_MOC_LITERAL(12, 182, 15), // "updatingChanged"
QT_MOC_LITERAL(13, 198, 17), // "updateUnreadCount"
QT_MOC_LITERAL(14, 216, 23), // "onDefaultAccountChanged"
QT_MOC_LITERAL(15, 240, 17), // "onChatRoomDeleted"
QT_MOC_LITERAL(16, 258, 22), // "onChatRoomStateChanged"
QT_MOC_LITERAL(17, 281, 31), // "onChatRoomLastUpdateTimeChanged"
QT_MOC_LITERAL(18, 313, 16), // "getChatRoomModel"
QT_MOC_LITERAL(19, 330, 14), // "ChatRoomModel*"
QT_MOC_LITERAL(20, 345, 15), // "fullPeerAddress"
QT_MOC_LITERAL(21, 361, 16), // "fullLocalAddress"
QT_MOC_LITERAL(22, 378, 13), // "chatRoomModel"
QT_MOC_LITERAL(23, 392, 8) // "updating"

    },
    "TimelineModel\0fullPeerAddressChanged\0"
    "\0fullLocalAddressChanged\0usernameChanged\0"
    "avatarChanged\0presenceStatusChanged\0"
    "selectedChanged\0selected\0conferenceLeft\0"
    "chatRoomDeleted\0dataChanged\0updatingChanged\0"
    "updateUnreadCount\0onDefaultAccountChanged\0"
    "onChatRoomDeleted\0onChatRoomStateChanged\0"
    "onChatRoomLastUpdateTimeChanged\0"
    "getChatRoomModel\0ChatRoomModel*\0"
    "fullPeerAddress\0fullLocalAddress\0"
    "chatRoomModel\0updating"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimelineModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       5,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,
       5,    0,   97,    2, 0x06 /* Public */,
       6,    0,   98,    2, 0x06 /* Public */,
       7,    1,   99,    2, 0x06 /* Public */,
       9,    0,  102,    2, 0x06 /* Public */,
      10,    0,  103,    2, 0x06 /* Public */,
      11,    0,  104,    2, 0x06 /* Public */,
      12,    0,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  106,    2, 0x0a /* Public */,
      14,    0,  107,    2, 0x0a /* Public */,
      15,    0,  108,    2, 0x0a /* Public */,
      16,    0,  109,    2, 0x0a /* Public */,
      17,    0,  110,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      18,    0,  111,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 19,

 // properties: name, type, flags
      20, QMetaType::QString, 0x00495001,
      21, QMetaType::QString, 0x00495001,
      22, 0x80000000 | 19, 0x00095409,
       8, QMetaType::Bool, 0x00495103,
      23, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       0,
       5,
       9,

       0        // eod
};

void TimelineModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TimelineModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fullPeerAddressChanged(); break;
        case 1: _t->fullLocalAddressChanged(); break;
        case 2: _t->usernameChanged(); break;
        case 3: _t->avatarChanged(); break;
        case 4: _t->presenceStatusChanged(); break;
        case 5: _t->selectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->conferenceLeft(); break;
        case 7: _t->chatRoomDeleted(); break;
        case 8: _t->dataChanged(); break;
        case 9: _t->updatingChanged(); break;
        case 10: _t->updateUnreadCount(); break;
        case 11: _t->onDefaultAccountChanged(); break;
        case 12: _t->onChatRoomDeleted(); break;
        case 13: _t->onChatRoomStateChanged(); break;
        case 14: _t->onChatRoomLastUpdateTimeChanged(); break;
        case 15: { ChatRoomModel* _r = _t->getChatRoomModel();
            if (_a[0]) *reinterpret_cast< ChatRoomModel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::fullPeerAddressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::fullLocalAddressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::usernameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::avatarChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::presenceStatusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::selectedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::conferenceLeft)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::chatRoomDeleted)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::dataChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::updatingChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TimelineModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getFullPeerAddress(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getFullLocalAddress(); break;
        case 2: *reinterpret_cast< ChatRoomModel**>(_v) = _t->getChatRoomModel(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->mSelected; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isUpdating(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TimelineModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TimelineModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TimelineModel.data,
    qt_meta_data_TimelineModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TimelineModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimelineModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TimelineModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TimelineModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TimelineModel::fullPeerAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TimelineModel::fullLocalAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TimelineModel::usernameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TimelineModel::avatarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TimelineModel::presenceStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TimelineModel::selectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TimelineModel::conferenceLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void TimelineModel::chatRoomDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void TimelineModel::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void TimelineModel::updatingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
