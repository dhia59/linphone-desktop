/****************************************************************************
** Meta object code from reading C++ file 'ConferenceInfoProxyModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/conferenceInfo/ConferenceInfoProxyModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConferenceInfoProxyModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConferenceInfoProxyModel_t {
    QByteArrayData data[7];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConferenceInfoProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConferenceInfoProxyModel_t qt_meta_stringdata_ConferenceInfoProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ConferenceInfoProxyModel"
QT_MOC_LITERAL(1, 25, 6), // "update"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "ConferenceType"
QT_MOC_LITERAL(4, 48, 5), // "Ended"
QT_MOC_LITERAL(5, 54, 9), // "Scheduled"
QT_MOC_LITERAL(6, 64, 11) // "Invitations"

    },
    "ConferenceInfoProxyModel\0update\0\0"
    "ConferenceType\0Ended\0Scheduled\0"
    "Invitations"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConferenceInfoProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   20, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    3,   25,

 // enum data: key, value
       4, uint(ConferenceInfoProxyModel::Ended),
       5, uint(ConferenceInfoProxyModel::Scheduled),
       6, uint(ConferenceInfoProxyModel::Invitations),

       0        // eod
};

void ConferenceInfoProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConferenceInfoProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ConferenceInfoProxyModel::staticMetaObject = { {
    &SortFilterAbstractProxyModel<ConferenceInfoListModel>::staticMetaObject,
    qt_meta_stringdata_ConferenceInfoProxyModel.data,
    qt_meta_data_ConferenceInfoProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConferenceInfoProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConferenceInfoProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConferenceInfoProxyModel.stringdata0))
        return static_cast<void*>(this);
    return SortFilterAbstractProxyModel<ConferenceInfoListModel>::qt_metacast(_clname);
}

int ConferenceInfoProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SortFilterAbstractProxyModel<ConferenceInfoListModel>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
