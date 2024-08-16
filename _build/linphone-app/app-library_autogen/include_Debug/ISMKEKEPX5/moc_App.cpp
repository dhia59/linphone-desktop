/****************************************************************************
** Meta object code from reading C++ file 'App.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/app/App.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'App.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_App_t {
    QByteArrayData data[30];
    char stringdata0[382];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_App_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_App_t qt_meta_stringdata_App = {
    {
QT_MOC_LITERAL(0, 0, 3), // "App"
QT_MOC_LITERAL(1, 4, 19), // "configLocaleChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "locale"
QT_MOC_LITERAL(4, 32, 16), // "autoStartChanged"
QT_MOC_LITERAL(5, 49, 7), // "enabled"
QT_MOC_LITERAL(6, 57, 6), // "opened"
QT_MOC_LITERAL(7, 64, 6), // "status"
QT_MOC_LITERAL(8, 71, 18), // "requestFetchConfig"
QT_MOC_LITERAL(9, 90, 8), // "filePath"
QT_MOC_LITERAL(10, 99, 12), // "stateChanged"
QT_MOC_LITERAL(11, 112, 20), // "Qt::ApplicationState"
QT_MOC_LITERAL(12, 133, 12), // "handleLogout"
QT_MOC_LITERAL(13, 146, 14), // "setFetchConfig"
QT_MOC_LITERAL(14, 161, 7), // "restart"
QT_MOC_LITERAL(15, 169, 18), // "showSelfCareWindow"
QT_MOC_LITERAL(16, 188, 18), // "hideSelfCareWindow"
QT_MOC_LITERAL(17, 207, 14), // "getCallsWindow"
QT_MOC_LITERAL(18, 222, 13), // "QQuickWindow*"
QT_MOC_LITERAL(19, 236, 17), // "getSettingsWindow"
QT_MOC_LITERAL(20, 254, 17), // "getSelfCareWindow"
QT_MOC_LITERAL(21, 272, 15), // "smartShowWindow"
QT_MOC_LITERAL(22, 288, 6), // "window"
QT_MOC_LITERAL(23, 295, 15), // "checkForUpdates"
QT_MOC_LITERAL(24, 311, 5), // "force"
QT_MOC_LITERAL(25, 317, 14), // "isPdfAvailable"
QT_MOC_LITERAL(26, 332, 12), // "configLocale"
QT_MOC_LITERAL(27, 345, 16), // "availableLocales"
QT_MOC_LITERAL(28, 362, 9), // "qtVersion"
QT_MOC_LITERAL(29, 372, 9) // "autoStart"

    },
    "App\0configLocaleChanged\0\0locale\0"
    "autoStartChanged\0enabled\0opened\0status\0"
    "requestFetchConfig\0filePath\0stateChanged\0"
    "Qt::ApplicationState\0handleLogout\0"
    "setFetchConfig\0restart\0showSelfCareWindow\0"
    "hideSelfCareWindow\0getCallsWindow\0"
    "QQuickWindow*\0getSettingsWindow\0"
    "getSelfCareWindow\0smartShowWindow\0"
    "window\0checkForUpdates\0force\0"
    "isPdfAvailable\0configLocale\0"
    "availableLocales\0qtVersion\0autoStart"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_App[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       5,  132, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       6,    1,  105,    2, 0x06 /* Public */,
       8,    1,  108,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  111,    2, 0x0a /* Public */,
      12,    0,  114,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      13,    1,  115,    2, 0x02 /* Public */,
      14,    0,  118,    2, 0x02 /* Public */,
      15,    0,  119,    2, 0x02 /* Public */,
      16,    0,  120,    2, 0x02 /* Public */,
      17,    0,  121,    2, 0x02 /* Public */,
      19,    0,  122,    2, 0x02 /* Public */,
      20,    0,  123,    2, 0x02 /* Public */,
      21,    1,  124,    2, 0x02 /* Public */,
      23,    1,  127,    2, 0x02 /* Public */,
      23,    0,  130,    2, 0x22 /* Public | MethodCloned */,
      25,    0,  131,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 18,
    0x80000000 | 18,
    0x80000000 | 18,
    QMetaType::Void, 0x80000000 | 18,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void,
    QMetaType::Bool,

 // properties: name, type, flags
      26, QMetaType::QString, 0x00495103,
       3, QMetaType::QLocale, 0x00095401,
      27, QMetaType::QVariantList, 0x00095401,
      28, QMetaType::QString, 0x00095401,
      29, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

void App::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<App *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configLocaleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->autoStartChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->opened((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->requestFetchConfig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->stateChanged((*reinterpret_cast< Qt::ApplicationState(*)>(_a[1]))); break;
        case 5: _t->handleLogout(); break;
        case 6: { bool _r = _t->setFetchConfig((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->restart(); break;
        case 8: _t->showSelfCareWindow(); break;
        case 9: _t->hideSelfCareWindow(); break;
        case 10: { QQuickWindow* _r = _t->getCallsWindow();
            if (_a[0]) *reinterpret_cast< QQuickWindow**>(_a[0]) = std::move(_r); }  break;
        case 11: { QQuickWindow* _r = _t->getSettingsWindow();
            if (_a[0]) *reinterpret_cast< QQuickWindow**>(_a[0]) = std::move(_r); }  break;
        case 12: { QQuickWindow* _r = _t->getSelfCareWindow();
            if (_a[0]) *reinterpret_cast< QQuickWindow**>(_a[0]) = std::move(_r); }  break;
        case 13: _t->smartShowWindow((*reinterpret_cast< QQuickWindow*(*)>(_a[1]))); break;
        case 14: _t->checkForUpdates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->checkForUpdates(); break;
        case 16: { bool _r = _t->isPdfAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (App::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&App::configLocaleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (App::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&App::autoStartChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (App::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&App::opened)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (App::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&App::requestFetchConfig)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<App *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getConfigLocale(); break;
        case 1: *reinterpret_cast< QLocale*>(_v) = _t->getLocale(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->getAvailableLocales(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getQtVersion(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getAutoStart(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<App *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setConfigLocale(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setAutoStart(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject App::staticMetaObject = { {
    &SingleApplication::staticMetaObject,
    qt_meta_stringdata_App.data,
    qt_meta_data_App,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *App::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *App::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_App.stringdata0))
        return static_cast<void*>(this);
    return SingleApplication::qt_metacast(_clname);
}

int App::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SingleApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
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
void App::configLocaleChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void App::autoStartChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void App::opened(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void App::requestFetchConfig(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
