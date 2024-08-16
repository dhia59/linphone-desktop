/****************************************************************************
** Meta object code from reading C++ file 'ContactsEnreachListProxyModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/contacts/ContactsEnreachListProxyModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactsEnreachListProxyModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactsEnreachListProxyModel_t {
    QByteArrayData data[14];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactsEnreachListProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactsEnreachListProxyModel_t qt_meta_stringdata_ContactsEnreachListProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "ContactsEnreachListProxyModel"
QT_MOC_LITERAL(1, 30, 14), // "loadedContacts"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "lastsipcontact"
QT_MOC_LITERAL(4, 61, 12), // "loadContacts"
QT_MOC_LITERAL(5, 74, 9), // "setFilter"
QT_MOC_LITERAL(6, 84, 7), // "pattern"
QT_MOC_LITERAL(7, 92, 17), // "getloadedContacts"
QT_MOC_LITERAL(8, 110, 18), // "useConnectedFilter"
QT_MOC_LITERAL(9, 129, 14), // "useLocalFilter"
QT_MOC_LITERAL(10, 144, 16), // "usePartageFilter"
QT_MOC_LITERAL(11, 161, 18), // "usePersonnelFilter"
QT_MOC_LITERAL(12, 180, 9), // "mcontacts"
QT_MOC_LITERAL(13, 190, 25) // "ContactsEnreachListModel*"

    },
    "ContactsEnreachListProxyModel\0"
    "loadedContacts\0\0lastsipcontact\0"
    "loadContacts\0setFilter\0pattern\0"
    "getloadedContacts\0useConnectedFilter\0"
    "useLocalFilter\0usePartageFilter\0"
    "usePersonnelFilter\0mcontacts\0"
    "ContactsEnreachListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactsEnreachListProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   38,    2, 0x02 /* Public */,
       7,    0,   41,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00095003,
       9, QMetaType::Bool, 0x00095003,
      10, QMetaType::Bool, 0x00095003,
      11, QMetaType::Bool, 0x00095003,
      12, 0x80000000 | 13, 0x0049500b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void ContactsEnreachListProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContactsEnreachListProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadedContacts((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->loadContacts(); break;
        case 2: _t->setFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->getloadedContacts(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContactsEnreachListProxyModel::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsEnreachListProxyModel::loadedContacts)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ContactsEnreachListProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isConnectedFilterUsed(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isLocalFilterUsed(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isPartageFilterUsed(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isPersonnelFilterUsed(); break;
        case 4: *reinterpret_cast< ContactsEnreachListModel**>(_v) = _t->contacts; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ContactsEnreachListProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setConnectedFilter(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setLocalFilter(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setPartgeFilter(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setPersonnelFilter(*reinterpret_cast< bool*>(_v)); break;
        case 4:
            if (_t->contacts != *reinterpret_cast< ContactsEnreachListModel**>(_v)) {
                _t->contacts = *reinterpret_cast< ContactsEnreachListModel**>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ContactsEnreachListProxyModel::staticMetaObject = { {
    &QSortFilterProxyModel::staticMetaObject,
    qt_meta_stringdata_ContactsEnreachListProxyModel.data,
    qt_meta_data_ContactsEnreachListProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ContactsEnreachListProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactsEnreachListProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactsEnreachListProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int ContactsEnreachListProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void ContactsEnreachListProxyModel::loadedContacts(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
