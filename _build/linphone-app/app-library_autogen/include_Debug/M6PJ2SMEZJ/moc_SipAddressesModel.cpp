/****************************************************************************
** Meta object code from reading C++ file 'SipAddressesModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/sip-addresses/SipAddressesModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SipAddressesModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SipAddressesModel_t {
    QByteArrayData data[22];
    char stringdata0[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SipAddressesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SipAddressesModel_t qt_meta_stringdata_SipAddressesModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SipAddressesModel"
QT_MOC_LITERAL(1, 18, 15), // "sipAddressReset"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "handleAllCallCountReset"
QT_MOC_LITERAL(4, 59, 4), // "find"
QT_MOC_LITERAL(5, 64, 10), // "sipAddress"
QT_MOC_LITERAL(6, 75, 22), // "mapSipAddressToContact"
QT_MOC_LITERAL(7, 98, 13), // "ContactModel*"
QT_MOC_LITERAL(8, 112, 21), // "getSipAddressObserver"
QT_MOC_LITERAL(9, 134, 19), // "SipAddressObserver*"
QT_MOC_LITERAL(10, 154, 11), // "peerAddress"
QT_MOC_LITERAL(11, 166, 12), // "localAddress"
QT_MOC_LITERAL(12, 179, 26), // "getTransportFromSipAddress"
QT_MOC_LITERAL(13, 206, 24), // "addTransportToSipAddress"
QT_MOC_LITERAL(14, 231, 9), // "transport"
QT_MOC_LITERAL(15, 241, 19), // "interpretSipAddress"
QT_MOC_LITERAL(16, 261, 13), // "checkUsername"
QT_MOC_LITERAL(17, 275, 6), // "domain"
QT_MOC_LITERAL(18, 282, 14), // "addressIsValid"
QT_MOC_LITERAL(19, 297, 7), // "address"
QT_MOC_LITERAL(20, 305, 17), // "sipAddressIsValid"
QT_MOC_LITERAL(21, 323, 15) // "cleanSipAddress"

    },
    "SipAddressesModel\0sipAddressReset\0\0"
    "handleAllCallCountReset\0find\0sipAddress\0"
    "mapSipAddressToContact\0ContactModel*\0"
    "getSipAddressObserver\0SipAddressObserver*\0"
    "peerAddress\0localAddress\0"
    "getTransportFromSipAddress\0"
    "addTransportToSipAddress\0transport\0"
    "interpretSipAddress\0checkUsername\0"
    "domain\0addressIsValid\0address\0"
    "sipAddressIsValid\0cleanSipAddress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SipAddressesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   86,    2, 0x02 /* Public */,
       6,    1,   89,    2, 0x02 /* Public */,
       8,    2,   92,    2, 0x02 /* Public */,
      12,    1,   97,    2, 0x02 /* Public */,
      13,    2,  100,    2, 0x02 /* Public */,
      15,    2,  105,    2, 0x02 /* Public */,
      15,    1,  110,    2, 0x22 /* Public | MethodCloned */,
      15,    1,  113,    2, 0x02 /* Public */,
      15,    2,  116,    2, 0x02 /* Public */,
      18,    1,  121,    2, 0x02 /* Public */,
      20,    1,  124,    2, 0x02 /* Public */,
      21,    1,  127,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariantMap, QMetaType::QString,    5,
    0x80000000 | 7, QMetaType::QString,    5,
    0x80000000 | 9, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::QString, QMetaType::QString,    5,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,   14,
    QMetaType::QString, QMetaType::QString, QMetaType::Bool,    5,   16,
    QMetaType::QString, QMetaType::QString,    5,
    QMetaType::QString, QMetaType::QUrl,    5,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,   17,
    QMetaType::Bool, QMetaType::QString,   19,
    QMetaType::Bool, QMetaType::QString,    5,
    QMetaType::QString, QMetaType::QString,    5,

       0        // eod
};

void SipAddressesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SipAddressesModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sipAddressReset(); break;
        case 1: _t->handleAllCallCountReset(); break;
        case 2: { QVariantMap _r = _t->find((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 3: { ContactModel* _r = _t->mapSipAddressToContact((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ContactModel**>(_a[0]) = std::move(_r); }  break;
        case 4: { SipAddressObserver* _r = _t->getSipAddressObserver((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< SipAddressObserver**>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->getTransportFromSipAddress((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->addTransportToSipAddress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->interpretSipAddress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->interpretSipAddress((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->interpretSipAddress((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->interpretSipAddress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->addressIsValid((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->sipAddressIsValid((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->cleanSipAddress((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SipAddressesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SipAddressesModel::sipAddressReset)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SipAddressesModel::staticMetaObject = { {
    &QAbstractListModel::staticMetaObject,
    qt_meta_stringdata_SipAddressesModel.data,
    qt_meta_data_SipAddressesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SipAddressesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SipAddressesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SipAddressesModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int SipAddressesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SipAddressesModel::sipAddressReset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
