/****************************************************************************
** Meta object code from reading C++ file 'ForwardingModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/selfCare/ForwardingModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ForwardingModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ForwardingModel_t {
    QByteArrayData data[22];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ForwardingModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ForwardingModel_t qt_meta_stringdata_ForwardingModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ForwardingModel"
QT_MOC_LITERAL(1, 16, 12), // "labelChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "forwardTypeChanged"
QT_MOC_LITERAL(4, 49, 30), // "noAnswerForwardingDelayChanged"
QT_MOC_LITERAL(5, 80, 18), // "destinationChanged"
QT_MOC_LITERAL(6, 99, 19), // "forwardingIDChanged"
QT_MOC_LITERAL(7, 119, 13), // "filterChanged"
QT_MOC_LITERAL(8, 133, 13), // "activeChanged"
QT_MOC_LITERAL(9, 147, 28), // "filtersOnTargetNumberChanged"
QT_MOC_LITERAL(10, 176, 21), // "specificCallerChanged"
QT_MOC_LITERAL(11, 198, 17), // "timeFilterChanged"
QT_MOC_LITERAL(12, 216, 5), // "label"
QT_MOC_LITERAL(13, 222, 11), // "forwardType"
QT_MOC_LITERAL(14, 234, 23), // "noAnswerForwardingDelay"
QT_MOC_LITERAL(15, 258, 11), // "destination"
QT_MOC_LITERAL(16, 270, 12), // "forwardingID"
QT_MOC_LITERAL(17, 283, 6), // "filter"
QT_MOC_LITERAL(18, 290, 9), // "activated"
QT_MOC_LITERAL(19, 300, 21), // "filtersOnTargetNumber"
QT_MOC_LITERAL(20, 322, 14), // "specificCaller"
QT_MOC_LITERAL(21, 337, 10) // "timeFilter"

    },
    "ForwardingModel\0labelChanged\0\0"
    "forwardTypeChanged\0noAnswerForwardingDelayChanged\0"
    "destinationChanged\0forwardingIDChanged\0"
    "filterChanged\0activeChanged\0"
    "filtersOnTargetNumberChanged\0"
    "specificCallerChanged\0timeFilterChanged\0"
    "label\0forwardType\0noAnswerForwardingDelay\0"
    "destination\0forwardingID\0filter\0"
    "activated\0filtersOnTargetNumber\0"
    "specificCaller\0timeFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ForwardingModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      10,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    0,   70,    2, 0x06 /* Public */,
       9,    0,   71,    2, 0x06 /* Public */,
      10,    0,   72,    2, 0x06 /* Public */,
      11,    0,   73,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::QString, 0x00495003,
      14, QMetaType::Int, 0x00495103,
      15, QMetaType::QString, 0x00495103,
      16, QMetaType::QString, 0x00495003,
      17, QMetaType::QString, 0x00495003,
      18, QMetaType::Bool, 0x00495103,
      19, QMetaType::QStringList, 0x00495103,
      20, QMetaType::QString, 0x00495103,
      21, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,

       0        // eod
};

void ForwardingModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ForwardingModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->labelChanged(); break;
        case 1: _t->forwardTypeChanged(); break;
        case 2: _t->noAnswerForwardingDelayChanged(); break;
        case 3: _t->destinationChanged(); break;
        case 4: _t->forwardingIDChanged(); break;
        case 5: _t->filterChanged(); break;
        case 6: _t->activeChanged(); break;
        case 7: _t->filtersOnTargetNumberChanged(); break;
        case 8: _t->specificCallerChanged(); break;
        case 9: _t->timeFilterChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ForwardingModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ForwardingModel::labelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ForwardingModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ForwardingModel::forwardTypeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ForwardingModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ForwardingModel::noAnswerForwardingDelayChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ForwardingModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ForwardingModel::destinationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ForwardingModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ForwardingModel::forwardingIDChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ForwardingModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ForwardingModel::filterChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ForwardingModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ForwardingModel::activeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ForwardingModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ForwardingModel::filtersOnTargetNumberChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ForwardingModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ForwardingModel::specificCallerChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ForwardingModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ForwardingModel::timeFilterChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ForwardingModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getLabel(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getforwardType(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getNoAnswerForwardingDelay(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getDestination(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getforwardingID(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getFilter(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getActivated(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->getFiltersOnTargetNumber(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getSpecificCaller(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getTimeFilter(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ForwardingModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setforwardType(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setNoAnswerForwardingDelay(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setDestination(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setforwardingID(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setfilter(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setActivated(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setFiltersOnTargetNumber(*reinterpret_cast< QStringList*>(_v)); break;
        case 8: _t->setSpecificCaller(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setTimeFilter(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ForwardingModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ForwardingModel.data,
    qt_meta_data_ForwardingModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ForwardingModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ForwardingModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ForwardingModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ForwardingModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ForwardingModel::labelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ForwardingModel::forwardTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ForwardingModel::noAnswerForwardingDelayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ForwardingModel::destinationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ForwardingModel::forwardingIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ForwardingModel::filterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ForwardingModel::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ForwardingModel::filtersOnTargetNumberChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ForwardingModel::specificCallerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ForwardingModel::timeFilterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
