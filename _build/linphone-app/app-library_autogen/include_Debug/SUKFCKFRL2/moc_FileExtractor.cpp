/****************************************************************************
** Meta object code from reading C++ file 'FileExtractor.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/file/FileExtractor.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileExtractor.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileExtractor_t {
    QByteArrayData data[18];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileExtractor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileExtractor_t qt_meta_stringdata_FileExtractor = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FileExtractor"
QT_MOC_LITERAL(1, 14, 11), // "fileChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "file"
QT_MOC_LITERAL(4, 32, 20), // "extractFolderChanged"
QT_MOC_LITERAL(5, 53, 13), // "extractFolder"
QT_MOC_LITERAL(6, 67, 18), // "extractNameChanged"
QT_MOC_LITERAL(7, 86, 11), // "extractName"
QT_MOC_LITERAL(8, 98, 16), // "readBytesChanged"
QT_MOC_LITERAL(9, 115, 9), // "readBytes"
QT_MOC_LITERAL(10, 125, 17), // "totalBytesChanged"
QT_MOC_LITERAL(11, 143, 10), // "totalBytes"
QT_MOC_LITERAL(12, 154, 17), // "extractingChanged"
QT_MOC_LITERAL(13, 172, 10), // "extracting"
QT_MOC_LITERAL(14, 183, 15), // "extractFinished"
QT_MOC_LITERAL(15, 199, 13), // "extractFailed"
QT_MOC_LITERAL(16, 213, 7), // "extract"
QT_MOC_LITERAL(17, 221, 6) // "remove"

    },
    "FileExtractor\0fileChanged\0\0file\0"
    "extractFolderChanged\0extractFolder\0"
    "extractNameChanged\0extractName\0"
    "readBytesChanged\0readBytes\0totalBytesChanged\0"
    "totalBytes\0extractingChanged\0extracting\0"
    "extractFinished\0extractFailed\0extract\0"
    "remove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileExtractor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       6,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       8,    1,   73,    2, 0x06 /* Public */,
      10,    1,   76,    2, 0x06 /* Public */,
      12,    1,   79,    2, 0x06 /* Public */,
      14,    0,   82,    2, 0x06 /* Public */,
      15,    0,   83,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      16,    0,   84,    2, 0x02 /* Public */,
      17,    0,   85,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void, QMetaType::LongLong,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Bool,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       5, QMetaType::QString, 0x00495103,
       7, QMetaType::QString, 0x00495103,
      13, QMetaType::Bool, 0x00495001,
       9, QMetaType::LongLong, 0x00495001,
      11, QMetaType::LongLong, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       5,
       3,
       4,

       0        // eod
};

void FileExtractor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileExtractor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->extractFolderChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->extractNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->readBytesChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->totalBytesChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->extractingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->extractFinished(); break;
        case 7: _t->extractFailed(); break;
        case 8: _t->extract(); break;
        case 9: { bool _r = _t->remove();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileExtractor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileExtractor::fileChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileExtractor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileExtractor::extractFolderChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileExtractor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileExtractor::extractNameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileExtractor::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileExtractor::readBytesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileExtractor::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileExtractor::totalBytesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FileExtractor::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileExtractor::extractingChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FileExtractor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileExtractor::extractFinished)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FileExtractor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileExtractor::extractFailed)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FileExtractor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getFile(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getExtractFolder(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getExtractName(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getExtracting(); break;
        case 4: *reinterpret_cast< qint64*>(_v) = _t->getReadBytes(); break;
        case 5: *reinterpret_cast< qint64*>(_v) = _t->getTotalBytes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FileExtractor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFile(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setExtractFolder(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setExtractName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FileExtractor::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FileExtractor.data,
    qt_meta_data_FileExtractor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileExtractor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileExtractor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileExtractor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileExtractor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FileExtractor::fileChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileExtractor::extractFolderChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileExtractor::extractNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileExtractor::readBytesChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileExtractor::totalBytesChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FileExtractor::extractingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FileExtractor::extractFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void FileExtractor::extractFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
