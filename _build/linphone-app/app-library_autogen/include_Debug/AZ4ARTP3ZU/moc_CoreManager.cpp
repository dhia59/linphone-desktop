/****************************************************************************
** Meta object code from reading C++ file 'CoreManager.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/core/CoreManager.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CoreManager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CoreManager_t {
    QByteArrayData data[37];
    char stringdata0[592];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoreManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoreManager_t qt_meta_stringdata_CoreManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CoreManager"
QT_MOC_LITERAL(1, 12, 22), // "coreManagerInitialized"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 20), // "chatRoomModelCreated"
QT_MOC_LITERAL(4, 57, 29), // "QSharedPointer<ChatRoomModel>"
QT_MOC_LITERAL(5, 87, 13), // "chatRoomModel"
QT_MOC_LITERAL(6, 101, 19), // "historyModelCreated"
QT_MOC_LITERAL(7, 121, 13), // "HistoryModel*"
QT_MOC_LITERAL(8, 135, 12), // "historyModel"
QT_MOC_LITERAL(9, 148, 22), // "recorderManagerCreated"
QT_MOC_LITERAL(10, 171, 16), // "RecorderManager*"
QT_MOC_LITERAL(11, 188, 13), // "recorderModel"
QT_MOC_LITERAL(12, 202, 12), // "logsUploaded"
QT_MOC_LITERAL(13, 215, 3), // "url"
QT_MOC_LITERAL(14, 219, 17), // "eventCountChanged"
QT_MOC_LITERAL(15, 237, 20), // "callLogsCountChanged"
QT_MOC_LITERAL(16, 258, 15), // "initCoreManager"
QT_MOC_LITERAL(17, 274, 12), // "startIterate"
QT_MOC_LITERAL(18, 287, 11), // "stopIterate"
QT_MOC_LITERAL(19, 299, 30), // "setLastRemoteProvisioningState"
QT_MOC_LITERAL(20, 330, 26), // "linphone::ConfiguringState"
QT_MOC_LITERAL(21, 357, 5), // "state"
QT_MOC_LITERAL(22, 363, 18), // "createLinphoneCore"
QT_MOC_LITERAL(23, 382, 10), // "configPath"
QT_MOC_LITERAL(24, 393, 21), // "handleChatRoomCreated"
QT_MOC_LITERAL(25, 415, 24), // "createDetachedVcardModel"
QT_MOC_LITERAL(26, 440, 11), // "VcardModel*"
QT_MOC_LITERAL(27, 452, 21), // "forceRefreshRegisters"
QT_MOC_LITERAL(28, 474, 8), // "sendLogs"
QT_MOC_LITERAL(29, 483, 9), // "cleanLogs"
QT_MOC_LITERAL(30, 493, 28), // "isLastRemoteProvisioningGood"
QT_MOC_LITERAL(31, 522, 12), // "getUserAgent"
QT_MOC_LITERAL(32, 535, 7), // "version"
QT_MOC_LITERAL(33, 543, 11), // "downloadUrl"
QT_MOC_LITERAL(34, 555, 10), // "eventCount"
QT_MOC_LITERAL(35, 566, 13), // "callLogsCount"
QT_MOC_LITERAL(36, 580, 11) // "initialized"

    },
    "CoreManager\0coreManagerInitialized\0\0"
    "chatRoomModelCreated\0QSharedPointer<ChatRoomModel>\0"
    "chatRoomModel\0historyModelCreated\0"
    "HistoryModel*\0historyModel\0"
    "recorderManagerCreated\0RecorderManager*\0"
    "recorderModel\0logsUploaded\0url\0"
    "eventCountChanged\0callLogsCountChanged\0"
    "initCoreManager\0startIterate\0stopIterate\0"
    "setLastRemoteProvisioningState\0"
    "linphone::ConfiguringState\0state\0"
    "createLinphoneCore\0configPath\0"
    "handleChatRoomCreated\0createDetachedVcardModel\0"
    "VcardModel*\0forceRefreshRegisters\0"
    "sendLogs\0cleanLogs\0isLastRemoteProvisioningGood\0"
    "getUserAgent\0version\0downloadUrl\0"
    "eventCount\0callLogsCount\0initialized"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoreManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       5,  142, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    1,  110,    2, 0x06 /* Public */,
       6,    1,  113,    2, 0x06 /* Public */,
       9,    1,  116,    2, 0x06 /* Public */,
      12,    1,  119,    2, 0x06 /* Public */,
      14,    0,  122,    2, 0x06 /* Public */,
      15,    0,  123,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  124,    2, 0x0a /* Public */,
      17,    0,  125,    2, 0x0a /* Public */,
      18,    0,  126,    2, 0x0a /* Public */,
      19,    1,  127,    2, 0x0a /* Public */,
      22,    1,  130,    2, 0x0a /* Public */,
      24,    1,  133,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      25,    0,  136,    2, 0x02 /* Public */,
      27,    0,  137,    2, 0x02 /* Public */,
      28,    0,  138,    2, 0x02 /* Public */,
      29,    0,  139,    2, 0x02 /* Public */,
      30,    0,  140,    2, 0x02 /* Public */,
      31,    0,  141,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, 0x80000000 | 4,    5,

 // methods: parameters
    0x80000000 | 26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::QString,

 // properties: name, type, flags
      32, QMetaType::QString, 0x00095401,
      33, QMetaType::QString, 0x00095401,
      34, QMetaType::Int, 0x00495001,
      35, QMetaType::Int, 0x00495001,
      36, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       5,
       6,
       0,

       0        // eod
};

void CoreManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CoreManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->coreManagerInitialized(); break;
        case 1: _t->chatRoomModelCreated((*reinterpret_cast< const QSharedPointer<ChatRoomModel>(*)>(_a[1]))); break;
        case 2: _t->historyModelCreated((*reinterpret_cast< HistoryModel*(*)>(_a[1]))); break;
        case 3: _t->recorderManagerCreated((*reinterpret_cast< RecorderManager*(*)>(_a[1]))); break;
        case 4: _t->logsUploaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->eventCountChanged(); break;
        case 6: _t->callLogsCountChanged(); break;
        case 7: _t->initCoreManager(); break;
        case 8: _t->startIterate(); break;
        case 9: _t->stopIterate(); break;
        case 10: _t->setLastRemoteProvisioningState((*reinterpret_cast< const linphone::ConfiguringState(*)>(_a[1]))); break;
        case 11: _t->createLinphoneCore((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->handleChatRoomCreated((*reinterpret_cast< const QSharedPointer<ChatRoomModel>(*)>(_a[1]))); break;
        case 13: { VcardModel* _r = _t->createDetachedVcardModel();
            if (_a[0]) *reinterpret_cast< VcardModel**>(_a[0]) = std::move(_r); }  break;
        case 14: _t->forceRefreshRegisters(); break;
        case 15: _t->sendLogs(); break;
        case 16: _t->cleanLogs(); break;
        case 17: { bool _r = _t->isLastRemoteProvisioningGood();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { QString _r = _t->getUserAgent();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CoreManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreManager::coreManagerInitialized)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CoreManager::*)(const QSharedPointer<ChatRoomModel> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreManager::chatRoomModelCreated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CoreManager::*)(HistoryModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreManager::historyModelCreated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CoreManager::*)(RecorderManager * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreManager::recorderManagerCreated)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CoreManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreManager::logsUploaded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CoreManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreManager::eventCountChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CoreManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoreManager::callLogsCountChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CoreManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getVersion(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getDownloadUrl(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getEventCount(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getCallLogsCount(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isInitialized(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject CoreManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CoreManager.data,
    qt_meta_data_CoreManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CoreManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoreManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CoreManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CoreManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CoreManager::coreManagerInitialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CoreManager::chatRoomModelCreated(const QSharedPointer<ChatRoomModel> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CoreManager::historyModelCreated(HistoryModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CoreManager::recorderManagerCreated(RecorderManager * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CoreManager::logsUploaded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CoreManager::eventCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void CoreManager::callLogsCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
