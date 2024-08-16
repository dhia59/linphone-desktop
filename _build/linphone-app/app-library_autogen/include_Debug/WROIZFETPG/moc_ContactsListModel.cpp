/****************************************************************************
** Meta object code from reading C++ file 'ContactsListModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/contacts/ContactsListModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactsListModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactsListModel_t {
    QByteArrayData data[34];
    char stringdata0[534];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactsListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactsListModel_t qt_meta_stringdata_ContactsListModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ContactsListModel"
QT_MOC_LITERAL(1, 18, 12), // "contactAdded"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 28), // "QSharedPointer<ContactModel>"
QT_MOC_LITERAL(4, 61, 14), // "contactRemoved"
QT_MOC_LITERAL(5, 76, 14), // "contactUpdated"
QT_MOC_LITERAL(6, 91, 15), // "sipAddressAdded"
QT_MOC_LITERAL(7, 107, 10), // "sipAddress"
QT_MOC_LITERAL(8, 118, 17), // "sipAddressRemoved"
QT_MOC_LITERAL(9, 136, 16), // "onContactCreated"
QT_MOC_LITERAL(10, 153, 33), // "std::shared_ptr<linphone::Fri..."
QT_MOC_LITERAL(11, 187, 14), // "linphoneFriend"
QT_MOC_LITERAL(12, 202, 16), // "onContactDeleted"
QT_MOC_LITERAL(13, 219, 16), // "onContactUpdated"
QT_MOC_LITERAL(14, 236, 9), // "newFriend"
QT_MOC_LITERAL(15, 246, 9), // "oldFriend"
QT_MOC_LITERAL(16, 256, 19), // "onSyncStatusChanged"
QT_MOC_LITERAL(17, 276, 32), // "linphone::FriendList::SyncStatus"
QT_MOC_LITERAL(18, 309, 6), // "status"
QT_MOC_LITERAL(19, 316, 11), // "std::string"
QT_MOC_LITERAL(20, 328, 7), // "message"
QT_MOC_LITERAL(21, 336, 18), // "onPresenceReceived"
QT_MOC_LITERAL(22, 355, 45), // "std::list<std::shared_ptr<lin..."
QT_MOC_LITERAL(23, 401, 7), // "friends"
QT_MOC_LITERAL(24, 409, 26), // "getContactModelFromAddress"
QT_MOC_LITERAL(25, 436, 13), // "ContactModel*"
QT_MOC_LITERAL(26, 450, 7), // "address"
QT_MOC_LITERAL(27, 458, 10), // "addContact"
QT_MOC_LITERAL(28, 469, 11), // "VcardModel*"
QT_MOC_LITERAL(29, 481, 10), // "vcardModel"
QT_MOC_LITERAL(30, 492, 13), // "removeContact"
QT_MOC_LITERAL(31, 506, 7), // "contact"
QT_MOC_LITERAL(32, 514, 12), // "cleanAvatars"
QT_MOC_LITERAL(33, 527, 6) // "update"

    },
    "ContactsListModel\0contactAdded\0\0"
    "QSharedPointer<ContactModel>\0"
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
    "friends\0getContactModelFromAddress\0"
    "ContactModel*\0address\0addContact\0"
    "VcardModel*\0vcardModel\0removeContact\0"
    "contact\0cleanAvatars\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactsListModel[] = {

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
      30,    1,  133,    2, 0x02 /* Public */,
      32,    0,  136,    2, 0x02 /* Public */,
      33,    0,  137,    2, 0x02 /* Public */,

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
    0x80000000 | 25, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 25,   31,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ContactsListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContactsListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contactAdded((*reinterpret_cast< QSharedPointer<ContactModel>(*)>(_a[1]))); break;
        case 1: _t->contactRemoved((*reinterpret_cast< QSharedPointer<ContactModel>(*)>(_a[1]))); break;
        case 2: _t->contactUpdated((*reinterpret_cast< QSharedPointer<ContactModel>(*)>(_a[1]))); break;
        case 3: _t->sipAddressAdded((*reinterpret_cast< QSharedPointer<ContactModel>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->sipAddressRemoved((*reinterpret_cast< QSharedPointer<ContactModel>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->onContactCreated((*reinterpret_cast< const std::shared_ptr<linphone::Friend>(*)>(_a[1]))); break;
        case 6: _t->onContactDeleted((*reinterpret_cast< const std::shared_ptr<linphone::Friend>(*)>(_a[1]))); break;
        case 7: _t->onContactUpdated((*reinterpret_cast< const std::shared_ptr<linphone::Friend>(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<linphone::Friend>(*)>(_a[2]))); break;
        case 8: _t->onSyncStatusChanged((*reinterpret_cast< linphone::FriendList::SyncStatus(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 9: _t->onPresenceReceived((*reinterpret_cast< const std::list<std::shared_ptr<linphone::Friend> >(*)>(_a[1]))); break;
        case 10: { ContactModel* _r = _t->getContactModelFromAddress((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ContactModel**>(_a[0]) = std::move(_r); }  break;
        case 11: { ContactModel* _r = _t->addContact((*reinterpret_cast< VcardModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ContactModel**>(_a[0]) = std::move(_r); }  break;
        case 12: _t->removeContact((*reinterpret_cast< ContactModel*(*)>(_a[1]))); break;
        case 13: _t->cleanAvatars(); break;
        case 14: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContactsListModel::*)(QSharedPointer<ContactModel> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsListModel::contactAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ContactsListModel::*)(QSharedPointer<ContactModel> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsListModel::contactRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ContactsListModel::*)(QSharedPointer<ContactModel> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsListModel::contactUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ContactsListModel::*)(QSharedPointer<ContactModel> , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsListModel::sipAddressAdded)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ContactsListModel::*)(QSharedPointer<ContactModel> , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsListModel::sipAddressRemoved)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ContactsListModel::staticMetaObject = { {
    &ProxyListModel::staticMetaObject,
    qt_meta_stringdata_ContactsListModel.data,
    qt_meta_data_ContactsListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ContactsListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactsListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactsListModel.stringdata0))
        return static_cast<void*>(this);
    return ProxyListModel::qt_metacast(_clname);
}

int ContactsListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ContactsListModel::contactAdded(QSharedPointer<ContactModel> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ContactsListModel::contactRemoved(QSharedPointer<ContactModel> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ContactsListModel::contactUpdated(QSharedPointer<ContactModel> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ContactsListModel::sipAddressAdded(QSharedPointer<ContactModel> _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ContactsListModel::sipAddressRemoved(QSharedPointer<ContactModel> _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
