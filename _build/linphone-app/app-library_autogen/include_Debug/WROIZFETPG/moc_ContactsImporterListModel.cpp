/****************************************************************************
** Meta object code from reading C++ file 'ContactsImporterListModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/contacts/ContactsImporterListModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactsImporterListModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactsImporterListModel_t {
    QByteArrayData data[14];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactsImporterListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactsImporterListModel_t qt_meta_stringdata_ContactsImporterListModel = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ContactsImporterListModel"
QT_MOC_LITERAL(1, 26, 21), // "contactsImporterAdded"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 37), // "QSharedPointer<ContactsImport..."
QT_MOC_LITERAL(4, 87, 23), // "contactsImporterRemoved"
QT_MOC_LITERAL(5, 111, 23), // "contactsImporterUpdated"
QT_MOC_LITERAL(6, 135, 22), // "createContactsImporter"
QT_MOC_LITERAL(7, 158, 22), // "ContactsImporterModel*"
QT_MOC_LITERAL(8, 181, 4), // "data"
QT_MOC_LITERAL(9, 186, 19), // "addContactsImporter"
QT_MOC_LITERAL(10, 206, 2), // "id"
QT_MOC_LITERAL(11, 209, 22), // "removeContactsImporter"
QT_MOC_LITERAL(12, 232, 8), // "importer"
QT_MOC_LITERAL(13, 241, 14) // "importContacts"

    },
    "ContactsImporterListModel\0"
    "contactsImporterAdded\0\0"
    "QSharedPointer<ContactsImporterModel>\0"
    "contactsImporterRemoved\0contactsImporterUpdated\0"
    "createContactsImporter\0ContactsImporterModel*\0"
    "data\0addContactsImporter\0id\0"
    "removeContactsImporter\0importer\0"
    "importContacts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactsImporterListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       5,    1,   65,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   68,    2, 0x02 /* Public */,
       9,    2,   71,    2, 0x02 /* Public */,
       9,    1,   76,    2, 0x22 /* Public | MethodCloned */,
      11,    1,   79,    2, 0x02 /* Public */,
      13,    1,   82,    2, 0x02 /* Public */,
      13,    0,   85,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // methods: parameters
    0x80000000 | 7, QMetaType::QVariantMap,    8,
    0x80000000 | 7, QMetaType::QVariantMap, QMetaType::Int,    8,   10,
    0x80000000 | 7, QMetaType::QVariantMap,    8,
    QMetaType::Void, 0x80000000 | 7,   12,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,

       0        // eod
};

void ContactsImporterListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContactsImporterListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contactsImporterAdded((*reinterpret_cast< QSharedPointer<ContactsImporterModel>(*)>(_a[1]))); break;
        case 1: _t->contactsImporterRemoved((*reinterpret_cast< QSharedPointer<ContactsImporterModel>(*)>(_a[1]))); break;
        case 2: _t->contactsImporterUpdated((*reinterpret_cast< QSharedPointer<ContactsImporterModel>(*)>(_a[1]))); break;
        case 3: { ContactsImporterModel* _r = _t->createContactsImporter((*reinterpret_cast< QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ContactsImporterModel**>(_a[0]) = std::move(_r); }  break;
        case 4: { ContactsImporterModel* _r = _t->addContactsImporter((*reinterpret_cast< QVariantMap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ContactsImporterModel**>(_a[0]) = std::move(_r); }  break;
        case 5: { ContactsImporterModel* _r = _t->addContactsImporter((*reinterpret_cast< QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ContactsImporterModel**>(_a[0]) = std::move(_r); }  break;
        case 6: _t->removeContactsImporter((*reinterpret_cast< ContactsImporterModel*(*)>(_a[1]))); break;
        case 7: _t->importContacts((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 8: _t->importContacts(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContactsImporterListModel::*)(QSharedPointer<ContactsImporterModel> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsImporterListModel::contactsImporterAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ContactsImporterListModel::*)(QSharedPointer<ContactsImporterModel> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsImporterListModel::contactsImporterRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ContactsImporterListModel::*)(QSharedPointer<ContactsImporterModel> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsImporterListModel::contactsImporterUpdated)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ContactsImporterListModel::staticMetaObject = { {
    &ProxyListModel::staticMetaObject,
    qt_meta_stringdata_ContactsImporterListModel.data,
    qt_meta_data_ContactsImporterListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ContactsImporterListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactsImporterListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactsImporterListModel.stringdata0))
        return static_cast<void*>(this);
    return ProxyListModel::qt_metacast(_clname);
}

int ContactsImporterListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProxyListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ContactsImporterListModel::contactsImporterAdded(QSharedPointer<ContactsImporterModel> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ContactsImporterListModel::contactsImporterRemoved(QSharedPointer<ContactsImporterModel> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ContactsImporterListModel::contactsImporterUpdated(QSharedPointer<ContactsImporterModel> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
