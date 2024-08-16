/****************************************************************************
** Meta object code from reading C++ file 'TemporaryFile.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/file/TemporaryFile.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TemporaryFile.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TemporaryFile_t {
    QByteArrayData data[11];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TemporaryFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TemporaryFile_t qt_meta_stringdata_TemporaryFile = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TemporaryFile"
QT_MOC_LITERAL(1, 14, 15), // "filePathChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "isReadableChanged"
QT_MOC_LITERAL(4, 49, 26), // "createFileFromContentModel"
QT_MOC_LITERAL(5, 76, 13), // "ContentModel*"
QT_MOC_LITERAL(6, 90, 12), // "contentModel"
QT_MOC_LITERAL(7, 103, 15), // "exportPlainFile"
QT_MOC_LITERAL(8, 119, 10), // "createFile"
QT_MOC_LITERAL(9, 130, 8), // "filePath"
QT_MOC_LITERAL(10, 139, 10) // "isReadable"

    },
    "TemporaryFile\0filePathChanged\0\0"
    "isReadableChanged\0createFileFromContentModel\0"
    "ContentModel*\0contentModel\0exportPlainFile\0"
    "createFile\0filePath\0isReadable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TemporaryFile[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    2,   46,    2, 0x02 /* Public */,
       4,    1,   51,    2, 0x22 /* Public | MethodCloned */,
       8,    2,   54,    2, 0x02 /* Public */,
       8,    1,   59,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    9,    7,
    QMetaType::Void, QMetaType::QString,    9,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00495001,
      10, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void TemporaryFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TemporaryFile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filePathChanged(); break;
        case 1: _t->isReadableChanged(); break;
        case 2: _t->createFileFromContentModel((*reinterpret_cast< ContentModel*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 3: _t->createFileFromContentModel((*reinterpret_cast< ContentModel*(*)>(_a[1]))); break;
        case 4: _t->createFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 5: _t->createFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TemporaryFile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TemporaryFile::filePathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TemporaryFile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TemporaryFile::isReadableChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TemporaryFile *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getFilePath(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isReadable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TemporaryFile::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TemporaryFile.data,
    qt_meta_data_TemporaryFile,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TemporaryFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TemporaryFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TemporaryFile.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TemporaryFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void TemporaryFile::filePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TemporaryFile::isReadableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
