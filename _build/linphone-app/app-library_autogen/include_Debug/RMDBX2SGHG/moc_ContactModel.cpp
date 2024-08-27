/****************************************************************************
** Meta object code from reading C++ file 'ContactModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/contact/ContactModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactModel_t {
    QByteArrayData data[21];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactModel_t qt_meta_stringdata_ContactModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ContactModel"
QT_MOC_LITERAL(1, 13, 14), // "contactUpdated"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "presenceStatusChanged"
QT_MOC_LITERAL(4, 51, 24), // "Presence::PresenceStatus"
QT_MOC_LITERAL(5, 76, 6), // "status"
QT_MOC_LITERAL(6, 83, 20), // "presenceLevelChanged"
QT_MOC_LITERAL(7, 104, 23), // "Presence::PresenceLevel"
QT_MOC_LITERAL(8, 128, 5), // "level"
QT_MOC_LITERAL(9, 134, 15), // "sipAddressAdded"
QT_MOC_LITERAL(10, 150, 10), // "sipAddress"
QT_MOC_LITERAL(11, 161, 17), // "sipAddressRemoved"
QT_MOC_LITERAL(12, 179, 15), // "cloneVcardModel"
QT_MOC_LITERAL(13, 195, 11), // "VcardModel*"
QT_MOC_LITERAL(14, 207, 13), // "hasCapability"
QT_MOC_LITERAL(15, 221, 31), // "LinphoneEnums::FriendCapability"
QT_MOC_LITERAL(16, 253, 10), // "capability"
QT_MOC_LITERAL(17, 264, 14), // "presenceStatus"
QT_MOC_LITERAL(18, 279, 17), // "presenceTimestamp"
QT_MOC_LITERAL(19, 297, 13), // "presenceLevel"
QT_MOC_LITERAL(20, 311, 5) // "vcard"

    },
    "ContactModel\0contactUpdated\0\0"
    "presenceStatusChanged\0Presence::PresenceStatus\0"
    "status\0presenceLevelChanged\0"
    "Presence::PresenceLevel\0level\0"
    "sipAddressAdded\0sipAddress\0sipAddressRemoved\0"
    "cloneVcardModel\0VcardModel*\0hasCapability\0"
    "LinphoneEnums::FriendCapability\0"
    "capability\0presenceStatus\0presenceTimestamp\0"
    "presenceLevel\0vcard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,
       9,    1,   56,    2, 0x06 /* Public */,
      11,    1,   59,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    0,   62,    2, 0x02 /* Public */,
      14,    1,   63,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,

 // methods: parameters
    0x80000000 | 13,
    QMetaType::Bool, 0x80000000 | 15,   16,

 // properties: name, type, flags
      17, 0x80000000 | 4, 0x00495009,
      18, QMetaType::QDateTime, 0x00495001,
      19, 0x80000000 | 7, 0x00495009,
      20, 0x80000000 | 13, 0x0049500b,

 // properties: notify_signal_id
       1,
       1,
       2,
       0,

       0        // eod
};

void ContactModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContactModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contactUpdated(); break;
        case 1: _t->presenceStatusChanged((*reinterpret_cast< Presence::PresenceStatus(*)>(_a[1]))); break;
        case 2: _t->presenceLevelChanged((*reinterpret_cast< Presence::PresenceLevel(*)>(_a[1]))); break;
        case 3: _t->sipAddressAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->sipAddressRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: { VcardModel* _r = _t->cloneVcardModel();
            if (_a[0]) *reinterpret_cast< VcardModel**>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->hasCapability((*reinterpret_cast< const LinphoneEnums::FriendCapability(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinphoneEnums::FriendCapability >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContactModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactModel::contactUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ContactModel::*)(Presence::PresenceStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactModel::presenceStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ContactModel::*)(Presence::PresenceLevel );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactModel::presenceLevelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ContactModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactModel::sipAddressAdded)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ContactModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactModel::sipAddressRemoved)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ContactModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Presence::PresenceStatus*>(_v) = _t->getPresenceStatus(); break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = _t->getPresenceTimestamp(); break;
        case 2: *reinterpret_cast< Presence::PresenceLevel*>(_v) = _t->getPresenceLevel(); break;
        case 3: *reinterpret_cast< VcardModel**>(_v) = _t->getVcardModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ContactModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setVcardModel(*reinterpret_cast< VcardModel**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_ContactModel[] = {
        &Presence::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject ContactModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ContactModel.data,
    qt_meta_data_ContactModel,
    qt_static_metacall,
    qt_meta_extradata_ContactModel,
    nullptr
} };


const QMetaObject *ContactModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ContactModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ContactModel::contactUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ContactModel::presenceStatusChanged(Presence::PresenceStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ContactModel::presenceLevelChanged(Presence::PresenceLevel _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ContactModel::sipAddressAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ContactModel::sipAddressRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
