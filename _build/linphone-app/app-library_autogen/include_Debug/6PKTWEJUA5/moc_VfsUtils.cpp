/****************************************************************************
** Meta object code from reading C++ file 'VfsUtils.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/vfs/VfsUtils.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VfsUtils.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VfsUtils_t {
    QByteArrayData data[12];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VfsUtils_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VfsUtils_t qt_meta_stringdata_VfsUtils = {
    {
QT_MOC_LITERAL(0, 0, 8), // "VfsUtils"
QT_MOC_LITERAL(1, 9, 10), // "keyDeleted"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 3), // "key"
QT_MOC_LITERAL(4, 25, 7), // "keyRead"
QT_MOC_LITERAL(5, 33, 5), // "value"
QT_MOC_LITERAL(6, 39, 10), // "keyWritten"
QT_MOC_LITERAL(7, 50, 5), // "error"
QT_MOC_LITERAL(8, 56, 9), // "errorText"
QT_MOC_LITERAL(9, 66, 9), // "deleteKey"
QT_MOC_LITERAL(10, 76, 7), // "readKey"
QT_MOC_LITERAL(11, 84, 8) // "writeKey"

    },
    "VfsUtils\0keyDeleted\0\0key\0keyRead\0value\0"
    "keyWritten\0error\0errorText\0deleteKey\0"
    "readKey\0writeKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VfsUtils[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    2,   52,    2, 0x06 /* Public */,
       6,    1,   57,    2, 0x06 /* Public */,
       7,    1,   60,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    1,   63,    2, 0x02 /* Public */,
      10,    1,   66,    2, 0x02 /* Public */,
      11,    2,   69,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    8,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    5,

       0        // eod
};

void VfsUtils::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VfsUtils *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keyDeleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->keyRead((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->keyWritten((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->deleteKey((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->readKey((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->writeKey((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VfsUtils::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VfsUtils::keyDeleted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VfsUtils::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VfsUtils::keyRead)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VfsUtils::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VfsUtils::keyWritten)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VfsUtils::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VfsUtils::error)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VfsUtils::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_VfsUtils.data,
    qt_meta_data_VfsUtils,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VfsUtils::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VfsUtils::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VfsUtils.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VfsUtils::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void VfsUtils::keyDeleted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VfsUtils::keyRead(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VfsUtils::keyWritten(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VfsUtils::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
