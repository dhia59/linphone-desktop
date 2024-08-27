/****************************************************************************
** Meta object code from reading C++ file 'ContactsEnreachListModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/contacts/ContactsEnreachListModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactsEnreachListModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactsEnreachListModel_t {
    QByteArrayData data[32];
    char stringdata0[539];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactsEnreachListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactsEnreachListModel_t qt_meta_stringdata_ContactsEnreachListModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ContactsEnreachListModel"
QT_MOC_LITERAL(1, 25, 12), // "contactAdded"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 35), // "QSharedPointer<ContactEnreach..."
QT_MOC_LITERAL(4, 75, 14), // "contactRemoved"
QT_MOC_LITERAL(5, 90, 14), // "contactUpdated"
QT_MOC_LITERAL(6, 105, 15), // "sipAddressAdded"
QT_MOC_LITERAL(7, 121, 10), // "sipAddress"
QT_MOC_LITERAL(8, 132, 17), // "sipAddressRemoved"
QT_MOC_LITERAL(9, 150, 16), // "onContactCreated"
QT_MOC_LITERAL(10, 167, 33), // "std::shared_ptr<linphone::Fri..."
QT_MOC_LITERAL(11, 201, 14), // "linphoneFriend"
QT_MOC_LITERAL(12, 216, 16), // "onContactDeleted"
QT_MOC_LITERAL(13, 233, 16), // "onContactUpdated"
QT_MOC_LITERAL(14, 250, 9), // "newFriend"
QT_MOC_LITERAL(15, 260, 9), // "oldFriend"
QT_MOC_LITERAL(16, 270, 19), // "onSyncStatusChanged"
QT_MOC_LITERAL(17, 290, 32), // "linphone::FriendList::SyncStatus"
QT_MOC_LITERAL(18, 323, 6), // "status"
QT_MOC_LITERAL(19, 330, 11), // "std::string"
QT_MOC_LITERAL(20, 342, 7), // "message"
QT_MOC_LITERAL(21, 350, 18), // "onPresenceReceived"
QT_MOC_LITERAL(22, 369, 45), // "std::list<std::shared_ptr<lin..."
QT_MOC_LITERAL(23, 415, 7), // "friends"
QT_MOC_LITERAL(24, 423, 33), // "getContactEnreachModelFromAdd..."
QT_MOC_LITERAL(25, 457, 20), // "ContactEnreachModel*"
QT_MOC_LITERAL(26, 478, 7), // "address"
QT_MOC_LITERAL(27, 486, 10), // "addContact"
QT_MOC_LITERAL(28, 497, 7), // "contact"
QT_MOC_LITERAL(29, 505, 13), // "removeContact"
QT_MOC_LITERAL(30, 519, 12), // "cleanAvatars"
QT_MOC_LITERAL(31, 532, 6) // "update"

    },
    "ContactsEnreachListModel\0contactAdded\0"
    "\0QSharedPointer<ContactEnreachModel>\0"
    "contactRemoved\0contactUpdated\0"
    "sipAddressAdded\0sipAddress\0sipAddressRemoved\0"
    "onContactCreated\0std::shared_ptr<linphone::Friend>\0"
    "linphoneFriend\0onContactDeleted\0"
    "onContactUpdated\0newFriend\0oldFriend\0"
    "onSyncStatusChanged\0"
    "linphone::FriendList::SyncStatus\0"
    "status\0std::string\0message\0"
    "onPresenceReceived\0"
    "std::list<std::shared_ptr<linphone::Friend> >\0"
    "friends\0getContactEnreachModelFromAddress\0"
    "ContactEnreachModel*\0address\0addContact\0"
    "contact\0removeContact\0cleanAvatars\0"
    "update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactsEnreachListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       5,    1,   95,    2, 0x06 /* Public */,
       6,    2,   98,    2, 0x06 /* Public */,
       8,    2,  103,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  108,    2, 0x0a /* Public */,
      12,    1,  111,    2, 0x0a /* Public */,
      13,    2,  114,    2, 0x0a /* Public */,
      16,    2,  119,    2, 0x0a /* Public */,
      21,    1,  124,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      24,    1,  127,    2, 0x02 /* Public */,
      27,    1,  130,    2, 0x02 /* Public */,
      29,    1,  133,    2, 0x02 /* Public */,
      30,    0,  136,    2, 0x02 /* Public */,
      31,    0,  137,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   14,   15,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 19,   18,   20,
    QMetaType::Void, 0x80000000 | 22,   23,

 // methods: parameters
    0x80000000 | 25, QMetaType::QString,   26,
    0x80000000 | 25, 0x80000000 | 25,   28,
    QMetaType::Void, 0x80000000 | 25,   28,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ContactsEnreachListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContactsEnreachListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contactAdded((*reinterpret_cast< QSharedPointer<ContactEnreachModel>(*)>(_a[1]))); break;
        case 1: _t->contactRemoved((*reinterpret_cast< QSharedPointer<ContactEnreachModel>(*)>(_a[1]))); break;
        case 2: _t->contactUpdated((*reinterpret_cast< QSharedPointer<ContactEnreachModel>(*)>(_a[1]))); break;
        case 3: _t->sipAddressAdded((*reinterpret_cast< QSharedPointer<ContactEnreachModel>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->sipAddressRemoved((*reinterpret_cast< QSharedPointer<ContactEnreachModel>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->onContactCreated((*reinterpret_cast< const std::shared_ptr<linphone::Friend>(*)>(_a[1]))); break;
        case 6: _t->onContactDeleted((*reinterpret_cast< const std::shared_ptr<linphone::Friend>(*)>(_a[1]))); break;
        case 7: _t->onContactUpdated((*reinterpret_cast< const std::shared_ptr<linphone::Friend>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<linphone::Friend>(*)>(_a[2]))); break;
        case 8: _t->onSyncStatusChanged((*reinterpret_cast< linphone::FriendList::SyncStatus(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 9: _t->onPresenceReceived((*reinterpret_cast< const std::list<std::shared_ptr<linphone::Friend> >(*)>(_a[1]))); break;
        case 10: { ContactEnreachModel* _r = _t->getContactEnreachModelFromAddress((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ContactEnreachModel**>(_a[0]) = std::move(_r); }  break;
        case 11: { ContactEnreachModel* _r = _t->addContact((*reinterpret_cast< ContactEnreachModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ContactEnreachModel**>(_a[0]) = std::move(_r); }  break;
        case 12: _t->removeContact((*reinterpret_cast< ContactEnreachModel*(*)>(_a[1]))); break;
        case 13: _t->cleanAvatars(); break;
        case 14: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContactsEnreachListModel::*)(QSharedPointer<ContactEnreachModel> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsEnreachListModel::contactAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ContactsEnreachListModel::*)(QSharedPointer<ContactEnreachModel> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsEnreachListModel::contactRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ContactsEnreachListModel::*)(QSharedPointer<ContactEnreachModel> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsEnreachListModel::contactUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ContactsEnreachListModel::*)(QSharedPointer<ContactEnreachModel> , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsEnreachListModel::sipAddressAdded)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ContactsEnreachListModel::*)(QSharedPointer<ContactEnreachModel> , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsEnreachListModel::sipAddressRemoved)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ContactsEnreachListModel::staticMetaObject = { {
    &ProxyListModel::staticMetaObject,
    qt_meta_stringdata_ContactsEnreachListModel.data,
    qt_meta_data_ContactsEnreachListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ContactsEnreachListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactsEnreachListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactsEnreachListModel.stringdata0))
        return static_cast<void*>(this);
    return ProxyListModel::qt_metacast(_clname);
}

int ContactsEnreachListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProxyListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void ContactsEnreachListModel::contactAdded(QSharedPointer<ContactEnreachModel> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ContactsEnreachListModel::contactRemoved(QSharedPointer<ContactEnreachModel> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ContactsEnreachListModel::contactUpdated(QSharedPointer<ContactEnreachModel> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ContactsEnreachListModel::sipAddressAdded(QSharedPointer<ContactEnreachModel> _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ContactsEnreachListModel::sipAddressRemoved(QSharedPointer<ContactEnreachModel> _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
