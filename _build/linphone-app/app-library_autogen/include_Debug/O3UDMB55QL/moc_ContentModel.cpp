/****************************************************************************
** Meta object code from reading C++ file 'ContentModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/content/ContentModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContentModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContentModel_t {
    QByteArrayData data[33];
    char stringdata0[425];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContentModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContentModel_t qt_meta_stringdata_ContentModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ContentModel"
QT_MOC_LITERAL(1, 13, 15), // "fileSizeChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "nameChanged"
QT_MOC_LITERAL(4, 42, 16), // "thumbnailChanged"
QT_MOC_LITERAL(5, 59, 17), // "fileOffsetChanged"
QT_MOC_LITERAL(6, 77, 20), // "wasDownloadedChanged"
QT_MOC_LITERAL(7, 98, 18), // "updateTransferData"
QT_MOC_LITERAL(8, 117, 6), // "isFile"
QT_MOC_LITERAL(9, 124, 15), // "isFileEncrypted"
QT_MOC_LITERAL(10, 140, 14), // "isFileTransfer"
QT_MOC_LITERAL(11, 155, 11), // "isIcalendar"
QT_MOC_LITERAL(12, 167, 11), // "isMultipart"
QT_MOC_LITERAL(13, 179, 6), // "isText"
QT_MOC_LITERAL(14, 186, 16), // "isVoiceRecording"
QT_MOC_LITERAL(15, 203, 15), // "getFileDuration"
QT_MOC_LITERAL(16, 219, 12), // "downloadFile"
QT_MOC_LITERAL(17, 232, 18), // "cancelDownloadFile"
QT_MOC_LITERAL(18, 251, 8), // "openFile"
QT_MOC_LITERAL(19, 260, 13), // "showDirectory"
QT_MOC_LITERAL(20, 274, 6), // "saveAs"
QT_MOC_LITERAL(21, 281, 4), // "path"
QT_MOC_LITERAL(22, 286, 8), // "fileSize"
QT_MOC_LITERAL(23, 295, 4), // "name"
QT_MOC_LITERAL(24, 300, 10), // "fileOffset"
QT_MOC_LITERAL(25, 311, 9), // "thumbnail"
QT_MOC_LITERAL(26, 321, 13), // "wasDownloaded"
QT_MOC_LITERAL(27, 335, 8), // "filePath"
QT_MOC_LITERAL(28, 344, 16), // "chatMessageModel"
QT_MOC_LITERAL(29, 361, 17), // "ChatMessageModel*"
QT_MOC_LITERAL(30, 379, 19), // "conferenceInfoModel"
QT_MOC_LITERAL(31, 399, 20), // "ConferenceInfoModel*"
QT_MOC_LITERAL(32, 420, 4) // "text"

    },
    "ContentModel\0fileSizeChanged\0\0nameChanged\0"
    "thumbnailChanged\0fileOffsetChanged\0"
    "wasDownloadedChanged\0updateTransferData\0"
    "isFile\0isFileEncrypted\0isFileTransfer\0"
    "isIcalendar\0isMultipart\0isText\0"
    "isVoiceRecording\0getFileDuration\0"
    "downloadFile\0cancelDownloadFile\0"
    "openFile\0showDirectory\0saveAs\0path\0"
    "fileSize\0name\0fileOffset\0thumbnail\0"
    "wasDownloaded\0filePath\0chatMessageModel\0"
    "ChatMessageModel*\0conferenceInfoModel\0"
    "ConferenceInfoModel*\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContentModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       9,  132, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,
       4,    0,  111,    2, 0x06 /* Public */,
       5,    0,  112,    2, 0x06 /* Public */,
       6,    0,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  114,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,  115,    2, 0x02 /* Public */,
       9,    0,  116,    2, 0x02 /* Public */,
      10,    0,  117,    2, 0x02 /* Public */,
      11,    0,  118,    2, 0x02 /* Public */,
      12,    0,  119,    2, 0x02 /* Public */,
      13,    0,  120,    2, 0x02 /* Public */,
      14,    0,  121,    2, 0x02 /* Public */,
      15,    0,  122,    2, 0x02 /* Public */,
      16,    0,  123,    2, 0x02 /* Public */,
      17,    0,  124,    2, 0x02 /* Public */,
      18,    1,  125,    2, 0x02 /* Public */,
      18,    0,  128,    2, 0x22 /* Public | MethodCloned */,
      20,    1,  129,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   21,

 // properties: name, type, flags
      22, QMetaType::ULongLong, 0x00495001,
      23, QMetaType::QString, 0x00495001,
      24, QMetaType::ULongLong, 0x00495103,
      25, QMetaType::QString, 0x00495103,
      26, QMetaType::Bool, 0x00495103,
      27, QMetaType::QString, 0x00095401,
      28, 0x80000000 | 29, 0x00095409,
      30, 0x80000000 | 31, 0x00095409,
      32, QMetaType::QString, 0x00095401,

 // properties: notify_signal_id
       0,
       1,
       3,
       2,
       4,
       0,
       0,
       0,
       0,

       0        // eod
};

void ContentModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContentModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileSizeChanged(); break;
        case 1: _t->nameChanged(); break;
        case 2: _t->thumbnailChanged(); break;
        case 3: _t->fileOffsetChanged(); break;
        case 4: _t->wasDownloadedChanged(); break;
        case 5: _t->updateTransferData(); break;
        case 6: { bool _r = _t->isFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->isFileEncrypted();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->isFileTransfer();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->isIcalendar();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->isMultipart();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->isText();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->isVoiceRecording();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { int _r = _t->getFileDuration();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->downloadFile(); break;
        case 15: _t->cancelDownloadFile(); break;
        case 16: _t->openFile((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->openFile(); break;
        case 18: { bool _r = _t->saveAs((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContentModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContentModel::fileSizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ContentModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContentModel::nameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ContentModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContentModel::thumbnailChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ContentModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContentModel::fileOffsetChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ContentModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContentModel::wasDownloadedChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChatMessageModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ContentModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint64*>(_v) = _t->getFileSize(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getName(); break;
        case 2: *reinterpret_cast< quint64*>(_v) = _t->mFileOffset; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getThumbnail(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->mWasDownloaded; break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getFilePath(); break;
        case 6: *reinterpret_cast< ChatMessageModel**>(_v) = _t->getChatMessageModel(); break;
        case 7: *reinterpret_cast< ConferenceInfoModel**>(_v) = _t->getConferenceInfoModel(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getUtf8Text(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ContentModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setFileOffset(*reinterpret_cast< quint64*>(_v)); break;
        case 3: _t->setThumbnail(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setWasDownloaded(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ContentModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ContentModel.data,
    qt_meta_data_ContentModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ContentModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContentModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContentModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ContentModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ContentModel::fileSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ContentModel::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ContentModel::thumbnailChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ContentModel::fileOffsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ContentModel::wasDownloadedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
