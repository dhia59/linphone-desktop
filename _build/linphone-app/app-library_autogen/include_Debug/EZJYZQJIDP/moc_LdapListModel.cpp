/****************************************************************************
** Meta object code from reading C++ file 'LdapListModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/ldap/LdapListModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LdapListModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LdapListModel_t {
    QByteArrayData data[10];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LdapListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LdapListModel_t qt_meta_stringdata_LdapListModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LdapListModel"
QT_MOC_LITERAL(1, 14, 12), // "indexChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "enable"
QT_MOC_LITERAL(4, 35, 2), // "id"
QT_MOC_LITERAL(5, 38, 6), // "status"
QT_MOC_LITERAL(6, 45, 3), // "add"
QT_MOC_LITERAL(7, 49, 6), // "remove"
QT_MOC_LITERAL(8, 56, 10), // "LdapModel*"
QT_MOC_LITERAL(9, 67, 8) // "importer"

    },
    "LdapListModel\0indexChanged\0\0enable\0"
    "id\0status\0add\0remove\0LdapModel*\0"
    "importer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LdapListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    2,   35,    2, 0x02 /* Public */,
       6,    0,   40,    2, 0x02 /* Public */,
       7,    1,   41,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void LdapListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LdapListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->indexChanged(); break;
        case 1: _t->enable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->add(); break;
        case 3: _t->remove((*reinterpret_cast< LdapModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LdapModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LdapListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapListModel::indexChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LdapListModel::staticMetaObject = { {
    &ProxyListModel::staticMetaObject,
    qt_meta_stringdata_LdapListModel.data,
    qt_meta_data_LdapListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LdapListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LdapListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LdapListModel.stringdata0))
        return static_cast<void*>(this);
    return ProxyListModel::qt_metacast(_clname);
}

int LdapListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProxyListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void LdapListModel::indexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
