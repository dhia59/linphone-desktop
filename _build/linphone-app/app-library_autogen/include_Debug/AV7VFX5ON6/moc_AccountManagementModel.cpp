/****************************************************************************
** Meta object code from reading C++ file 'AccountManagementModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/selfCare/AccountManagementModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccountManagementModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccountManagementModel_t {
    QByteArrayData data[13];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccountManagementModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccountManagementModel_t qt_meta_stringdata_AccountManagementModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AccountManagementModel"
QT_MOC_LITERAL(1, 23, 24), // "isPasswordUpdatedChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 22), // "isPasswordMatchChanged"
QT_MOC_LITERAL(4, 72, 20), // "isRequestSentChanged"
QT_MOC_LITERAL(5, 93, 16), // "isLoadingChanged"
QT_MOC_LITERAL(6, 110, 14), // "updatePassword"
QT_MOC_LITERAL(7, 125, 11), // "oldPassword"
QT_MOC_LITERAL(8, 137, 11), // "newPassword"
QT_MOC_LITERAL(9, 149, 17), // "isPasswordUpdated"
QT_MOC_LITERAL(10, 167, 15), // "isPasswordMatch"
QT_MOC_LITERAL(11, 183, 13), // "isRequestSent"
QT_MOC_LITERAL(12, 197, 9) // "isLoading"

    },
    "AccountManagementModel\0isPasswordUpdatedChanged\0"
    "\0isPasswordMatchChanged\0isRequestSentChanged\0"
    "isLoadingChanged\0updatePassword\0"
    "oldPassword\0newPassword\0isPasswordUpdated\0"
    "isPasswordMatch\0isRequestSent\0isLoading"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccountManagementModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    2,   43,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    7,    8,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00495103,
      10, QMetaType::Bool, 0x00495103,
      11, QMetaType::Bool, 0x00495103,
      12, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void AccountManagementModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountManagementModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isPasswordUpdatedChanged(); break;
        case 1: _t->isPasswordMatchChanged(); break;
        case 2: _t->isRequestSentChanged(); break;
        case 3: _t->isLoadingChanged(); break;
        case 4: { bool _r = _t->updatePassword((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccountManagementModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManagementModel::isPasswordUpdatedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccountManagementModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManagementModel::isPasswordMatchChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AccountManagementModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManagementModel::isRequestSentChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AccountManagementModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManagementModel::isLoadingChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AccountManagementModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getIsPasswordUpdated(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getIsPasswordMatch(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getIsRequestSent(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getIsLoading(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AccountManagementModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsPasswordUpdated(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setIsPasswordMatch(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setIsRequestSent(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setIsLoading(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AccountManagementModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AccountManagementModel.data,
    qt_meta_data_AccountManagementModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AccountManagementModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountManagementModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccountManagementModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AccountManagementModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AccountManagementModel::isPasswordUpdatedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AccountManagementModel::isPasswordMatchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AccountManagementModel::isRequestSentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AccountManagementModel::isLoadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
