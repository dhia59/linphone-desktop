/****************************************************************************
** Meta object code from reading C++ file 'FriendListListener.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/friend/FriendListListener.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FriendListListener.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FriendListListener_t {
    QByteArrayData data[17];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FriendListListener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FriendListListener_t qt_meta_stringdata_FriendListListener = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FriendListListener"
QT_MOC_LITERAL(1, 19, 14), // "contactCreated"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 33), // "std::shared_ptr<linphone::Fri..."
QT_MOC_LITERAL(4, 69, 14), // "linphoneFriend"
QT_MOC_LITERAL(5, 84, 14), // "contactDeleted"
QT_MOC_LITERAL(6, 99, 14), // "contactUpdated"
QT_MOC_LITERAL(7, 114, 9), // "newFriend"
QT_MOC_LITERAL(8, 124, 9), // "oldFriend"
QT_MOC_LITERAL(9, 134, 17), // "syncStatusChanged"
QT_MOC_LITERAL(10, 152, 32), // "linphone::FriendList::SyncStatus"
QT_MOC_LITERAL(11, 185, 6), // "status"
QT_MOC_LITERAL(12, 192, 11), // "std::string"
QT_MOC_LITERAL(13, 204, 7), // "message"
QT_MOC_LITERAL(14, 212, 16), // "presenceReceived"
QT_MOC_LITERAL(15, 229, 45), // "std::list<std::shared_ptr<lin..."
QT_MOC_LITERAL(16, 275, 7) // "friends"

    },
    "FriendListListener\0contactCreated\0\0"
    "std::shared_ptr<linphone::Friend>\0"
    "linphoneFriend\0contactDeleted\0"
    "contactUpdated\0newFriend\0oldFriend\0"
    "syncStatusChanged\0linphone::FriendList::SyncStatus\0"
    "status\0std::string\0message\0presenceReceived\0"
    "std::list<std::shared_ptr<linphone::Friend> >\0"
    "friends"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FriendListListener[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       6,    2,   45,    2, 0x06 /* Public */,
       9,    2,   50,    2, 0x06 /* Public */,
      14,    1,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    7,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void FriendListListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FriendListListener *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contactCreated((*reinterpret_cast< const std::shared_ptr<linphone::Friend>(*)>(_a[1]))); break;
        case 1: _t->contactDeleted((*reinterpret_cast< const std::shared_ptr<linphone::Friend>(*)>(_a[1]))); break;
        case 2: _t->contactUpdated((*reinterpret_cast< const std::shared_ptr<linphone::Friend>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<linphone::Friend>(*)>(_a[2]))); break;
        case 3: _t->syncStatusChanged((*reinterpret_cast< linphone::FriendList::SyncStatus(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 4: _t->presenceReceived((*reinterpret_cast< const std::list<std::shared_ptr<linphone::Friend> >(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FriendListListener::*)(const std::shared_ptr<linphone::Friend> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendListListener::contactCreated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FriendListListener::*)(const std::shared_ptr<linphone::Friend> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendListListener::contactDeleted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FriendListListener::*)(const std::shared_ptr<linphone::Friend> & , const std::shared_ptr<linphone::Friend> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendListListener::contactUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FriendListListener::*)(linphone::FriendList::SyncStatus , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendListListener::syncStatusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FriendListListener::*)(const std::list<std::shared_ptr<linphone::Friend>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendListListener::presenceReceived)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FriendListListener::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FriendListListener.data,
    qt_meta_data_FriendListListener,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FriendListListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FriendListListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FriendListListener.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "linphone::FriendListListener"))
        return static_cast< linphone::FriendListListener*>(this);
    return QObject::qt_metacast(_clname);
}

int FriendListListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FriendListListener::contactCreated(const std::shared_ptr<linphone::Friend> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FriendListListener::contactDeleted(const std::shared_ptr<linphone::Friend> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FriendListListener::contactUpdated(const std::shared_ptr<linphone::Friend> & _t1, const std::shared_ptr<linphone::Friend> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FriendListListener::syncStatusChanged(linphone::FriendList::SyncStatus _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FriendListListener::presenceReceived(const std::list<std::shared_ptr<linphone::Friend>> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
