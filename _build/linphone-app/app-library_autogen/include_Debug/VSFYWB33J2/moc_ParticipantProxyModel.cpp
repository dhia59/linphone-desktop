/****************************************************************************
** Meta object code from reading C++ file 'ParticipantProxyModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/participant/ParticipantProxyModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParticipantProxyModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParticipantProxyModel_t {
    QByteArrayData data[29];
    char stringdata0[435];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParticipantProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParticipantProxyModel_t qt_meta_stringdata_ParticipantProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ParticipantProxyModel"
QT_MOC_LITERAL(1, 22, 20), // "chatRoomModelChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 22), // "conferenceModelChanged"
QT_MOC_LITERAL(4, 67, 27), // "participantListModelChanged"
QT_MOC_LITERAL(5, 95, 12), // "countChanged"
QT_MOC_LITERAL(6, 108, 13), // "showMeChanged"
QT_MOC_LITERAL(7, 122, 12), // "addressAdded"
QT_MOC_LITERAL(8, 135, 10), // "sipAddress"
QT_MOC_LITERAL(9, 146, 14), // "addressRemoved"
QT_MOC_LITERAL(10, 161, 15), // "getSipAddresses"
QT_MOC_LITERAL(11, 177, 15), // "getParticipants"
QT_MOC_LITERAL(12, 193, 8), // "getCount"
QT_MOC_LITERAL(13, 202, 10), // "addAddress"
QT_MOC_LITERAL(14, 213, 7), // "address"
QT_MOC_LITERAL(15, 221, 11), // "removeModel"
QT_MOC_LITERAL(16, 233, 17), // "ParticipantModel*"
QT_MOC_LITERAL(17, 251, 11), // "participant"
QT_MOC_LITERAL(18, 263, 12), // "setAddresses"
QT_MOC_LITERAL(19, 276, 20), // "ConferenceInfoModel*"
QT_MOC_LITERAL(20, 297, 19), // "conferenceInfoModel"
QT_MOC_LITERAL(21, 317, 13), // "chatRoomModel"
QT_MOC_LITERAL(22, 331, 14), // "ChatRoomModel*"
QT_MOC_LITERAL(23, 346, 15), // "conferenceModel"
QT_MOC_LITERAL(24, 362, 16), // "ConferenceModel*"
QT_MOC_LITERAL(25, 379, 20), // "participantListModel"
QT_MOC_LITERAL(26, 400, 21), // "ParticipantListModel*"
QT_MOC_LITERAL(27, 422, 5), // "count"
QT_MOC_LITERAL(28, 428, 6) // "showMe"

    },
    "ParticipantProxyModel\0chatRoomModelChanged\0"
    "\0conferenceModelChanged\0"
    "participantListModelChanged\0countChanged\0"
    "showMeChanged\0addressAdded\0sipAddress\0"
    "addressRemoved\0getSipAddresses\0"
    "getParticipants\0getCount\0addAddress\0"
    "address\0removeModel\0ParticipantModel*\0"
    "participant\0setAddresses\0ConferenceInfoModel*\0"
    "conferenceInfoModel\0chatRoomModel\0"
    "ChatRoomModel*\0conferenceModel\0"
    "ConferenceModel*\0participantListModel\0"
    "ParticipantListModel*\0count\0showMe"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParticipantProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       5,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,
       7,    1,   84,    2, 0x06 /* Public */,
       9,    1,   87,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   90,    2, 0x02 /* Public */,
      11,    0,   91,    2, 0x02 /* Public */,
      12,    0,   92,    2, 0x02 /* Public */,
      13,    1,   93,    2, 0x02 /* Public */,
      15,    1,   96,    2, 0x02 /* Public */,
      18,    1,   99,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,

 // methods: parameters
    QMetaType::QStringList,
    QMetaType::QVariantList,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,

 // properties: name, type, flags
      21, 0x80000000 | 22, 0x0049510b,
      23, 0x80000000 | 24, 0x0049510b,
      25, 0x80000000 | 26, 0x00495009,
      27, QMetaType::Int, 0x00495001,
      28, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void ParticipantProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParticipantProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->chatRoomModelChanged(); break;
        case 1: _t->conferenceModelChanged(); break;
        case 2: _t->participantListModelChanged(); break;
        case 3: _t->countChanged(); break;
        case 4: _t->showMeChanged(); break;
        case 5: _t->addressAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->addressRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: { QStringList _r = _t->getSipAddresses();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 8: { QVariantList _r = _t->getParticipants();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->getCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->addAddress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->removeModel((*reinterpret_cast< ParticipantModel*(*)>(_a[1]))); break;
        case 12: _t->setAddresses((*reinterpret_cast< ConferenceInfoModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParticipantProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantProxyModel::chatRoomModelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParticipantProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantProxyModel::conferenceModelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ParticipantProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantProxyModel::participantListModelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ParticipantProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantProxyModel::countChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ParticipantProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantProxyModel::showMeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ParticipantProxyModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantProxyModel::addressAdded)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ParticipantProxyModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParticipantProxyModel::addressRemoved)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParticipantProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ChatRoomModel**>(_v) = _t->getChatRoomModel(); break;
        case 1: *reinterpret_cast< ConferenceModel**>(_v) = _t->getConferenceModel(); break;
        case 2: *reinterpret_cast< ParticipantListModel**>(_v) = _t->getParticipantListModel(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getCount(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getShowMe(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ParticipantProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setChatRoomModel(*reinterpret_cast< ChatRoomModel**>(_v)); break;
        case 1: _t->setConferenceModel(*reinterpret_cast< ConferenceModel**>(_v)); break;
        case 4: _t->setShowMe(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ParticipantProxyModel::staticMetaObject = { {
    &QSortFilterProxyModel::staticMetaObject,
    qt_meta_stringdata_ParticipantProxyModel.data,
    qt_meta_data_ParticipantProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParticipantProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParticipantProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParticipantProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int ParticipantProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
void ParticipantProxyModel::chatRoomModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ParticipantProxyModel::conferenceModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ParticipantProxyModel::participantListModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ParticipantProxyModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ParticipantProxyModel::showMeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ParticipantProxyModel::addressAdded(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ParticipantProxyModel::addressRemoved(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
