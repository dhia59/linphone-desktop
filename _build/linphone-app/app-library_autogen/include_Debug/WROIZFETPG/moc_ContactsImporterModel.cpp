/****************************************************************************
** Meta object code from reading C++ file 'ContactsImporterModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/contacts/ContactsImporterModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactsImporterModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactsImporterModel_t {
    QByteArrayData data[20];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactsImporterModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactsImporterModel_t qt_meta_stringdata_ContactsImporterModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ContactsImporterModel"
QT_MOC_LITERAL(1, 22, 13), // "fieldsChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 31), // "PluginDataAPI::PluginCapability"
QT_MOC_LITERAL(4, 69, 6), // "fields"
QT_MOC_LITERAL(5, 76, 15), // "identityChanged"
QT_MOC_LITERAL(6, 92, 8), // "identity"
QT_MOC_LITERAL(7, 101, 12), // "errorMessage"
QT_MOC_LITERAL(8, 114, 7), // "message"
QT_MOC_LITERAL(9, 122, 13), // "statusMessage"
QT_MOC_LITERAL(10, 136, 14), // "parsedContacts"
QT_MOC_LITERAL(11, 151, 10), // "actionType"
QT_MOC_LITERAL(12, 162, 36), // "QVector<QMultiMap<QString,QSt..."
QT_MOC_LITERAL(13, 199, 8), // "contacts"
QT_MOC_LITERAL(14, 208, 12), // "updateInputs"
QT_MOC_LITERAL(15, 221, 6), // "inputs"
QT_MOC_LITERAL(16, 228, 15), // "messageReceived"
QT_MOC_LITERAL(17, 244, 9), // "QtMsgType"
QT_MOC_LITERAL(18, 254, 4), // "type"
QT_MOC_LITERAL(19, 259, 14) // "importContacts"

    },
    "ContactsImporterModel\0fieldsChanged\0"
    "\0PluginDataAPI::PluginCapability\0"
    "fields\0identityChanged\0identity\0"
    "errorMessage\0message\0statusMessage\0"
    "parsedContacts\0actionType\0"
    "QVector<QMultiMap<QString,QString> >\0"
    "contacts\0updateInputs\0inputs\0"
    "messageReceived\0QtMsgType\0type\0"
    "importContacts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactsImporterModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    1,   59,    2, 0x06 /* Public */,
       7,    1,   62,    2, 0x06 /* Public */,
       9,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   68,    2, 0x0a /* Public */,
      14,    2,   73,    2, 0x0a /* Public */,
      16,    2,   78,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      19,    0,   83,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariantMap,    2,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariantMap,    2,   15,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QString,   18,    8,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QVariantMap, 0x00495103,
       6, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void ContactsImporterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContactsImporterModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fieldsChanged((*reinterpret_cast< const PluginDataAPI::PluginCapability(*)>(_a[1])),(*reinterpret_cast< QVariantMap(*)>(_a[2]))); break;
        case 1: _t->identityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->statusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->parsedContacts((*reinterpret_cast< const PluginDataAPI::PluginCapability(*)>(_a[1])),(*reinterpret_cast< QVector<QMultiMap<QString,QString> >(*)>(_a[2]))); break;
        case 5: _t->updateInputs((*reinterpret_cast< const PluginDataAPI::PluginCapability(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 6: _t->messageReceived((*reinterpret_cast< const QtMsgType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->importContacts(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContactsImporterModel::*)(const PluginDataAPI::PluginCapability & , QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsImporterModel::fieldsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ContactsImporterModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsImporterModel::identityChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ContactsImporterModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsImporterModel::errorMessage)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ContactsImporterModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsImporterModel::statusMessage)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ContactsImporterModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantMap*>(_v) = _t->getFields(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getIdentity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ContactsImporterModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFields(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 1: _t->setIdentity(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ContactsImporterModel::staticMetaObject = { {
    &PluginsModel::staticMetaObject,
    qt_meta_stringdata_ContactsImporterModel.data,
    qt_meta_data_ContactsImporterModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ContactsImporterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactsImporterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactsImporterModel.stringdata0))
        return static_cast<void*>(this);
    return PluginsModel::qt_metacast(_clname);
}

int ContactsImporterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PluginsModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ContactsImporterModel::fieldsChanged(const PluginDataAPI::PluginCapability & _t1, QVariantMap _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ContactsImporterModel::identityChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ContactsImporterModel::errorMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ContactsImporterModel::statusMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
