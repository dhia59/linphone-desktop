/****************************************************************************
** Meta object code from reading C++ file 'FileMediaModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/file/FileMediaModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileMediaModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileMediaModel_t {
    QByteArrayData data[15];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileMediaModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileMediaModel_t qt_meta_stringdata_FileMediaModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FileMediaModel"
QT_MOC_LITERAL(1, 15, 8), // "baseName"
QT_MOC_LITERAL(2, 24, 14), // "parsedBaseName"
QT_MOC_LITERAL(3, 39, 8), // "filePath"
QT_MOC_LITERAL(4, 48, 16), // "creationDateTime"
QT_MOC_LITERAL(5, 65, 4), // "type"
QT_MOC_LITERAL(6, 70, 9), // "FILE_TYPE"
QT_MOC_LITERAL(7, 80, 8), // "duration"
QT_MOC_LITERAL(8, 89, 4), // "from"
QT_MOC_LITERAL(9, 94, 2), // "to"
QT_MOC_LITERAL(10, 97, 14), // "IS_CALL_RECORD"
QT_MOC_LITERAL(11, 112, 15), // "IS_VOICE_RECORD"
QT_MOC_LITERAL(12, 128, 11), // "IS_SNAPSHOT"
QT_MOC_LITERAL(13, 140, 11), // "IS_PLAYABLE"
QT_MOC_LITERAL(14, 152, 10) // "IS_UNKNOWN"

    },
    "FileMediaModel\0baseName\0parsedBaseName\0"
    "filePath\0creationDateTime\0type\0FILE_TYPE\0"
    "duration\0from\0to\0IS_CALL_RECORD\0"
    "IS_VOICE_RECORD\0IS_SNAPSHOT\0IS_PLAYABLE\0"
    "IS_UNKNOWN"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileMediaModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       1,   38, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QStringList, 0x00095401,
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::QDateTime, 0x00095401,
       5, 0x80000000 | 6, 0x00095409,
       7, QMetaType::Int, 0x00095401,
       8, QMetaType::QString, 0x00095401,
       9, QMetaType::QString, 0x00095401,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,    5,   43,

 // enum data: key, value
      10, uint(FileMediaModel::IS_CALL_RECORD),
      11, uint(FileMediaModel::IS_VOICE_RECORD),
      12, uint(FileMediaModel::IS_SNAPSHOT),
      13, uint(FileMediaModel::IS_PLAYABLE),
      14, uint(FileMediaModel::IS_UNKNOWN),

       0        // eod
};

void FileMediaModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FileMediaModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getBaseName(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->getParsedBaseName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getFilePath(); break;
        case 3: *reinterpret_cast< QDateTime*>(_v) = _t->getCreationDateTime(); break;
        case 4: *reinterpret_cast< FILE_TYPE*>(_v) = _t->getType(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getDuration(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getFrom(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getTo(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FileMediaModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FileMediaModel.data,
    qt_meta_data_FileMediaModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileMediaModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileMediaModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileMediaModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileMediaModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
