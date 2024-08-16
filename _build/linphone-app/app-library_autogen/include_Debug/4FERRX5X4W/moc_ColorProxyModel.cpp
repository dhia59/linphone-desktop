/****************************************************************************
** Meta object code from reading C++ file 'ColorProxyModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/other/colors/ColorProxyModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorProxyModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColorProxyModel_t {
    QByteArrayData data[15];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorProxyModel_t qt_meta_stringdata_ColorProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ColorProxyModel"
QT_MOC_LITERAL(1, 16, 11), // "sortChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "showPageIndexChanged"
QT_MOC_LITERAL(4, 50, 14), // "showAllChanged"
QT_MOC_LITERAL(5, 65, 10), // "updateLink"
QT_MOC_LITERAL(6, 76, 2), // "id"
QT_MOC_LITERAL(7, 79, 7), // "newLink"
QT_MOC_LITERAL(8, 87, 9), // "viewLinks"
QT_MOC_LITERAL(9, 97, 10), // "changeSort"
QT_MOC_LITERAL(10, 108, 10), // "filterText"
QT_MOC_LITERAL(11, 119, 4), // "text"
QT_MOC_LITERAL(12, 124, 15), // "sortDescription"
QT_MOC_LITERAL(13, 140, 13), // "showPageIndex"
QT_MOC_LITERAL(14, 154, 7) // "showAll"

    },
    "ColorProxyModel\0sortChanged\0\0"
    "showPageIndexChanged\0showAllChanged\0"
    "updateLink\0id\0newLink\0viewLinks\0"
    "changeSort\0filterText\0text\0sortDescription\0"
    "showPageIndex\0showAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    2,   52,    2, 0x02 /* Public */,
       8,    1,   57,    2, 0x02 /* Public */,
       9,    0,   60,    2, 0x02 /* Public */,
      10,    1,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00495001,
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void ColorProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sortChanged(); break;
        case 1: _t->showPageIndexChanged(); break;
        case 2: _t->showAllChanged(); break;
        case 3: _t->updateLink((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->viewLinks((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->changeSort(); break;
        case 6: _t->filterText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorProxyModel::sortChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColorProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorProxyModel::showPageIndexChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ColorProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorProxyModel::showAllChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ColorProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getSortDescription(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getShowPageIndex(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getShowAll(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ColorProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setShowPageIndex(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setShowAll(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ColorProxyModel::staticMetaObject = { {
    &QSortFilterProxyModel::staticMetaObject,
    qt_meta_stringdata_ColorProxyModel.data,
    qt_meta_data_ColorProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int ColorProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ColorProxyModel::sortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ColorProxyModel::showPageIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ColorProxyModel::showAllChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
