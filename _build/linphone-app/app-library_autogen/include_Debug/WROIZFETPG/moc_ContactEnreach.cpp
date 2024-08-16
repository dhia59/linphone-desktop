/****************************************************************************
** Meta object code from reading C++ file 'ContactEnreach.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/contacts/ContactEnreach.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactEnreach.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactEnreach_t {
    QByteArrayData data[16];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactEnreach_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactEnreach_t qt_meta_stringdata_ContactEnreach = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ContactEnreach"
QT_MOC_LITERAL(1, 15, 18), // "contactTypeChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "firstNameChanged"
QT_MOC_LITERAL(4, 52, 15), // "lastNameChanged"
QT_MOC_LITERAL(5, 68, 10), // "telChanged"
QT_MOC_LITERAL(6, 79, 10), // "extChanged"
QT_MOC_LITERAL(7, 90, 19), // "sipAddressesChanged"
QT_MOC_LITERAL(8, 110, 15), // "fullNameChanged"
QT_MOC_LITERAL(9, 126, 11), // "contactType"
QT_MOC_LITERAL(10, 138, 9), // "firstName"
QT_MOC_LITERAL(11, 148, 8), // "lastName"
QT_MOC_LITERAL(12, 157, 3), // "tel"
QT_MOC_LITERAL(13, 161, 3), // "ext"
QT_MOC_LITERAL(14, 165, 8), // "fullName"
QT_MOC_LITERAL(15, 174, 12) // "sipAddresses"

    },
    "ContactEnreach\0contactTypeChanged\0\0"
    "firstNameChanged\0lastNameChanged\0"
    "telChanged\0extChanged\0sipAddressesChanged\0"
    "fullNameChanged\0contactType\0firstName\0"
    "lastName\0tel\0ext\0fullName\0sipAddresses"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactEnreach[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,
       8,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::QString, 0x00495103,
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::QString, 0x00495103,
      14, QMetaType::QString, 0x00495103,
      15, QMetaType::QVariantList, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       6,
       5,

       0        // eod
};

void ContactEnreach::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContactEnreach *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contactTypeChanged(); break;
        case 1: _t->firstNameChanged(); break;
        case 2: _t->lastNameChanged(); break;
        case 3: _t->telChanged(); break;
        case 4: _t->extChanged(); break;
        case 5: _t->sipAddressesChanged(); break;
        case 6: _t->fullNameChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContactEnreach::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactEnreach::contactTypeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ContactEnreach::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactEnreach::firstNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ContactEnreach::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactEnreach::lastNameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ContactEnreach::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactEnreach::telChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ContactEnreach::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactEnreach::extChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ContactEnreach::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactEnreach::sipAddressesChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ContactEnreach::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactEnreach::fullNameChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ContactEnreach *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getContactType(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getFirstName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getLastName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getTel(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getExt(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getFullName(); break;
        case 6: *reinterpret_cast< QVariantList*>(_v) = _t->getSipAddresses(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ContactEnreach *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setContactType(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFirstName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setLastName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setTel(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setExt(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setFullName(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setSipAddresses(*reinterpret_cast< QVariantList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ContactEnreach::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ContactEnreach.data,
    qt_meta_data_ContactEnreach,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ContactEnreach::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactEnreach::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactEnreach.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ContactEnreach::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ContactEnreach::contactTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ContactEnreach::firstNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ContactEnreach::lastNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ContactEnreach::telChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ContactEnreach::extChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ContactEnreach::sipAddressesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ContactEnreach::fullNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
