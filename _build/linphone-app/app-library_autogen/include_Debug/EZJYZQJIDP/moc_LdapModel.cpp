/****************************************************************************
** Meta object code from reading C++ file 'LdapModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/ldap/LdapModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LdapModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LdapModel_t {
    QByteArrayData data[62];
    char stringdata0[1008];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LdapModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LdapModel_t qt_meta_stringdata_LdapModel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LdapModel"
QT_MOC_LITERAL(1, 10, 13), // "configChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "isValidChanged"
QT_MOC_LITERAL(4, 40, 13), // "serverChanged"
QT_MOC_LITERAL(5, 54, 18), // "displayNameChanged"
QT_MOC_LITERAL(6, 73, 13), // "useTlsChanged"
QT_MOC_LITERAL(7, 87, 13), // "useSalChanged"
QT_MOC_LITERAL(8, 101, 20), // "isServerValidChanged"
QT_MOC_LITERAL(9, 122, 17), // "maxResultsChanged"
QT_MOC_LITERAL(10, 140, 14), // "timeoutChanged"
QT_MOC_LITERAL(11, 155, 15), // "passwordChanged"
QT_MOC_LITERAL(12, 171, 13), // "bindDnChanged"
QT_MOC_LITERAL(13, 185, 17), // "baseObjectChanged"
QT_MOC_LITERAL(14, 203, 13), // "filterChanged"
QT_MOC_LITERAL(15, 217, 21), // "nameAttributesChanged"
QT_MOC_LITERAL(16, 239, 20), // "sipAttributesChanged"
QT_MOC_LITERAL(17, 260, 16), // "sipDomainChanged"
QT_MOC_LITERAL(18, 277, 12), // "debugChanged"
QT_MOC_LITERAL(19, 290, 31), // "verifyServerCertificatesChanged"
QT_MOC_LITERAL(20, 322, 12), // "indexChanged"
QT_MOC_LITERAL(21, 335, 23), // "serverFieldErrorChanged"
QT_MOC_LITERAL(22, 359, 27), // "maxResultsFieldErrorChanged"
QT_MOC_LITERAL(23, 387, 24), // "timeoutFieldErrorChanged"
QT_MOC_LITERAL(24, 412, 25), // "passwordFieldErrorChanged"
QT_MOC_LITERAL(25, 438, 23), // "bindDnFieldErrorChanged"
QT_MOC_LITERAL(26, 462, 27), // "baseObjectFieldErrorChanged"
QT_MOC_LITERAL(27, 490, 23), // "filterFieldErrorChanged"
QT_MOC_LITERAL(28, 514, 31), // "nameAttributesFieldErrorChanged"
QT_MOC_LITERAL(29, 546, 30), // "sipAttributesFieldErrorChanged"
QT_MOC_LITERAL(30, 577, 26), // "sipDomainFieldErrorChanged"
QT_MOC_LITERAL(31, 604, 14), // "enabledChanged"
QT_MOC_LITERAL(32, 619, 4), // "save"
QT_MOC_LITERAL(33, 624, 5), // "unset"
QT_MOC_LITERAL(34, 630, 6), // "config"
QT_MOC_LITERAL(35, 637, 7), // "isValid"
QT_MOC_LITERAL(36, 645, 6), // "server"
QT_MOC_LITERAL(37, 652, 16), // "serverFieldError"
QT_MOC_LITERAL(38, 669, 11), // "displayName"
QT_MOC_LITERAL(39, 681, 6), // "useTls"
QT_MOC_LITERAL(40, 688, 6), // "useSal"
QT_MOC_LITERAL(41, 695, 10), // "maxResults"
QT_MOC_LITERAL(42, 706, 20), // "maxResultsFieldError"
QT_MOC_LITERAL(43, 727, 7), // "timeout"
QT_MOC_LITERAL(44, 735, 17), // "timeoutFieldError"
QT_MOC_LITERAL(45, 753, 8), // "password"
QT_MOC_LITERAL(46, 762, 18), // "passwordFieldError"
QT_MOC_LITERAL(47, 781, 6), // "bindDn"
QT_MOC_LITERAL(48, 788, 16), // "bindDnFieldError"
QT_MOC_LITERAL(49, 805, 10), // "baseObject"
QT_MOC_LITERAL(50, 816, 20), // "baseObjectFieldError"
QT_MOC_LITERAL(51, 837, 6), // "filter"
QT_MOC_LITERAL(52, 844, 16), // "filterFieldError"
QT_MOC_LITERAL(53, 861, 14), // "nameAttributes"
QT_MOC_LITERAL(54, 876, 24), // "nameAttributesFieldError"
QT_MOC_LITERAL(55, 901, 13), // "sipAttributes"
QT_MOC_LITERAL(56, 915, 23), // "sipAttributesFieldError"
QT_MOC_LITERAL(57, 939, 9), // "sipDomain"
QT_MOC_LITERAL(58, 949, 19), // "sipDomainFieldError"
QT_MOC_LITERAL(59, 969, 5), // "debug"
QT_MOC_LITERAL(60, 975, 24), // "verifyServerCertificates"
QT_MOC_LITERAL(61, 1000, 7) // "enabled"

    },
    "LdapModel\0configChanged\0\0isValidChanged\0"
    "serverChanged\0displayNameChanged\0"
    "useTlsChanged\0useSalChanged\0"
    "isServerValidChanged\0maxResultsChanged\0"
    "timeoutChanged\0passwordChanged\0"
    "bindDnChanged\0baseObjectChanged\0"
    "filterChanged\0nameAttributesChanged\0"
    "sipAttributesChanged\0sipDomainChanged\0"
    "debugChanged\0verifyServerCertificatesChanged\0"
    "indexChanged\0serverFieldErrorChanged\0"
    "maxResultsFieldErrorChanged\0"
    "timeoutFieldErrorChanged\0"
    "passwordFieldErrorChanged\0"
    "bindDnFieldErrorChanged\0"
    "baseObjectFieldErrorChanged\0"
    "filterFieldErrorChanged\0"
    "nameAttributesFieldErrorChanged\0"
    "sipAttributesFieldErrorChanged\0"
    "sipDomainFieldErrorChanged\0enabledChanged\0"
    "save\0unset\0config\0isValid\0server\0"
    "serverFieldError\0displayName\0useTls\0"
    "useSal\0maxResults\0maxResultsFieldError\0"
    "timeout\0timeoutFieldError\0password\0"
    "passwordFieldError\0bindDn\0bindDnFieldError\0"
    "baseObject\0baseObjectFieldError\0filter\0"
    "filterFieldError\0nameAttributes\0"
    "nameAttributesFieldError\0sipAttributes\0"
    "sipAttributesFieldError\0sipDomain\0"
    "sipDomainFieldError\0debug\0"
    "verifyServerCertificates\0enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LdapModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
      28,  206, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      30,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  174,    2, 0x06 /* Public */,
       3,    0,  175,    2, 0x06 /* Public */,
       4,    0,  176,    2, 0x06 /* Public */,
       5,    0,  177,    2, 0x06 /* Public */,
       6,    0,  178,    2, 0x06 /* Public */,
       7,    0,  179,    2, 0x06 /* Public */,
       8,    0,  180,    2, 0x06 /* Public */,
       9,    0,  181,    2, 0x06 /* Public */,
      10,    0,  182,    2, 0x06 /* Public */,
      11,    0,  183,    2, 0x06 /* Public */,
      12,    0,  184,    2, 0x06 /* Public */,
      13,    0,  185,    2, 0x06 /* Public */,
      14,    0,  186,    2, 0x06 /* Public */,
      15,    0,  187,    2, 0x06 /* Public */,
      16,    0,  188,    2, 0x06 /* Public */,
      17,    0,  189,    2, 0x06 /* Public */,
      18,    0,  190,    2, 0x06 /* Public */,
      19,    0,  191,    2, 0x06 /* Public */,
      20,    0,  192,    2, 0x06 /* Public */,
      21,    0,  193,    2, 0x06 /* Public */,
      22,    0,  194,    2, 0x06 /* Public */,
      23,    0,  195,    2, 0x06 /* Public */,
      24,    0,  196,    2, 0x06 /* Public */,
      25,    0,  197,    2, 0x06 /* Public */,
      26,    0,  198,    2, 0x06 /* Public */,
      27,    0,  199,    2, 0x06 /* Public */,
      28,    0,  200,    2, 0x06 /* Public */,
      29,    0,  201,    2, 0x06 /* Public */,
      30,    0,  202,    2, 0x06 /* Public */,
      31,    0,  203,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      32,    0,  204,    2, 0x02 /* Public */,
      33,    0,  205,    2, 0x02 /* Public */,

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

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      34, QMetaType::QVariantMap, 0x00495103,
      35, QMetaType::Bool, 0x00495003,
      36, QMetaType::QString, 0x00495103,
      37, QMetaType::QString, 0x00495003,
      38, QMetaType::QString, 0x00495103,
      39, QMetaType::Bool, 0x00495003,
      40, QMetaType::Bool, 0x00495003,
      41, QMetaType::Int, 0x00495103,
      42, QMetaType::QString, 0x00495003,
      43, QMetaType::Int, 0x00495103,
      44, QMetaType::QString, 0x00495003,
      45, QMetaType::QString, 0x00495103,
      46, QMetaType::QString, 0x00495003,
      47, QMetaType::QString, 0x00495103,
      48, QMetaType::QString, 0x00495003,
      49, QMetaType::QString, 0x00495103,
      50, QMetaType::QString, 0x00495003,
      51, QMetaType::QString, 0x00495103,
      52, QMetaType::QString, 0x00495003,
      53, QMetaType::QString, 0x00495103,
      54, QMetaType::QString, 0x00495003,
      55, QMetaType::QString, 0x00495103,
      56, QMetaType::QString, 0x00495003,
      57, QMetaType::QString, 0x00495103,
      58, QMetaType::QString, 0x00495003,
      59, QMetaType::Bool, 0x00495003,
      60, QMetaType::Int, 0x00495003,
      61, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
      19,
       3,
       4,
       5,
       7,
      20,
       8,
      21,
       9,
      22,
      10,
      23,
      11,
      24,
      12,
      25,
      13,
      26,
      14,
      27,
      15,
      28,
      16,
      17,
      29,

       0        // eod
};

void LdapModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LdapModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: _t->isValidChanged(); break;
        case 2: _t->serverChanged(); break;
        case 3: _t->displayNameChanged(); break;
        case 4: _t->useTlsChanged(); break;
        case 5: _t->useSalChanged(); break;
        case 6: _t->isServerValidChanged(); break;
        case 7: _t->maxResultsChanged(); break;
        case 8: _t->timeoutChanged(); break;
        case 9: _t->passwordChanged(); break;
        case 10: _t->bindDnChanged(); break;
        case 11: _t->baseObjectChanged(); break;
        case 12: _t->filterChanged(); break;
        case 13: _t->nameAttributesChanged(); break;
        case 14: _t->sipAttributesChanged(); break;
        case 15: _t->sipDomainChanged(); break;
        case 16: _t->debugChanged(); break;
        case 17: _t->verifyServerCertificatesChanged(); break;
        case 18: _t->indexChanged(); break;
        case 19: _t->serverFieldErrorChanged(); break;
        case 20: _t->maxResultsFieldErrorChanged(); break;
        case 21: _t->timeoutFieldErrorChanged(); break;
        case 22: _t->passwordFieldErrorChanged(); break;
        case 23: _t->bindDnFieldErrorChanged(); break;
        case 24: _t->baseObjectFieldErrorChanged(); break;
        case 25: _t->filterFieldErrorChanged(); break;
        case 26: _t->nameAttributesFieldErrorChanged(); break;
        case 27: _t->sipAttributesFieldErrorChanged(); break;
        case 28: _t->sipDomainFieldErrorChanged(); break;
        case 29: _t->enabledChanged(); break;
        case 30: _t->save(); break;
        case 31: _t->unset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::configChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::isValidChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::serverChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::displayNameChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::useTlsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::useSalChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::isServerValidChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::maxResultsChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::timeoutChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::passwordChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::bindDnChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::baseObjectChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::filterChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::nameAttributesChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::sipAttributesChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::sipDomainChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::debugChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::verifyServerCertificatesChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::indexChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::serverFieldErrorChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::maxResultsFieldErrorChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::timeoutFieldErrorChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::passwordFieldErrorChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::bindDnFieldErrorChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::baseObjectFieldErrorChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::filterFieldErrorChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::nameAttributesFieldErrorChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::sipAttributesFieldErrorChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::sipDomainFieldErrorChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (LdapModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LdapModel::enabledChanged)) {
                *result = 29;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LdapModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantMap*>(_v) = _t->getConfig(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->mIsValid; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->mServer; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->mServerFieldError; break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->mDisplayName; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->mUseTls; break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->mUseSal; break;
        case 7: *reinterpret_cast< int*>(_v) = _t->mMaxResults; break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->mMaxResultsFieldError; break;
        case 9: *reinterpret_cast< int*>(_v) = _t->mTimeout; break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->mTimeoutFieldError; break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->mPassword; break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->mPasswordFieldError; break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->mBindDn; break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->mBindDnFieldError; break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->mBaseObject; break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->mBaseObjectFieldError; break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->mFilter; break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->mFilterFieldError; break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->mNameAttributes; break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->mNameAttributesFieldError; break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->mSipAttributes; break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->mSipAttributesFieldError; break;
        case 23: *reinterpret_cast< QString*>(_v) = _t->mSipDomain; break;
        case 24: *reinterpret_cast< QString*>(_v) = _t->mSipDomainFieldError; break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->mDebug; break;
        case 26: *reinterpret_cast< int*>(_v) = _t->mVerifyServerCertificates; break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LdapModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setConfig(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 1:
            if (_t->mIsValid != *reinterpret_cast< bool*>(_v)) {
                _t->mIsValid = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->isValidChanged();
            }
            break;
        case 2: _t->setServer(*reinterpret_cast< QString*>(_v)); break;
        case 3:
            if (_t->mServerFieldError != *reinterpret_cast< QString*>(_v)) {
                _t->mServerFieldError = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->serverFieldErrorChanged();
            }
            break;
        case 4: _t->setDisplayName(*reinterpret_cast< QString*>(_v)); break;
        case 5:
            if (_t->mUseTls != *reinterpret_cast< bool*>(_v)) {
                _t->mUseTls = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->useTlsChanged();
            }
            break;
        case 6:
            if (_t->mUseSal != *reinterpret_cast< bool*>(_v)) {
                _t->mUseSal = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->useSalChanged();
            }
            break;
        case 7: _t->setMaxResults(*reinterpret_cast< int*>(_v)); break;
        case 8:
            if (_t->mMaxResultsFieldError != *reinterpret_cast< QString*>(_v)) {
                _t->mMaxResultsFieldError = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->maxResultsFieldErrorChanged();
            }
            break;
        case 9: _t->setTimeout(*reinterpret_cast< int*>(_v)); break;
        case 10:
            if (_t->mTimeoutFieldError != *reinterpret_cast< QString*>(_v)) {
                _t->mTimeoutFieldError = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->timeoutFieldErrorChanged();
            }
            break;
        case 11: _t->setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 12:
            if (_t->mPasswordFieldError != *reinterpret_cast< QString*>(_v)) {
                _t->mPasswordFieldError = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->passwordFieldErrorChanged();
            }
            break;
        case 13: _t->setBindDn(*reinterpret_cast< QString*>(_v)); break;
        case 14:
            if (_t->mBindDnFieldError != *reinterpret_cast< QString*>(_v)) {
                _t->mBindDnFieldError = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->bindDnFieldErrorChanged();
            }
            break;
        case 15: _t->setBaseObject(*reinterpret_cast< QString*>(_v)); break;
        case 16:
            if (_t->mBaseObjectFieldError != *reinterpret_cast< QString*>(_v)) {
                _t->mBaseObjectFieldError = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->baseObjectFieldErrorChanged();
            }
            break;
        case 17: _t->setFilter(*reinterpret_cast< QString*>(_v)); break;
        case 18:
            if (_t->mFilterFieldError != *reinterpret_cast< QString*>(_v)) {
                _t->mFilterFieldError = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->filterFieldErrorChanged();
            }
            break;
        case 19: _t->setNameAttributes(*reinterpret_cast< QString*>(_v)); break;
        case 20:
            if (_t->mNameAttributesFieldError != *reinterpret_cast< QString*>(_v)) {
                _t->mNameAttributesFieldError = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->nameAttributesFieldErrorChanged();
            }
            break;
        case 21: _t->setSipAttributes(*reinterpret_cast< QString*>(_v)); break;
        case 22:
            if (_t->mSipAttributesFieldError != *reinterpret_cast< QString*>(_v)) {
                _t->mSipAttributesFieldError = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->sipAttributesFieldErrorChanged();
            }
            break;
        case 23: _t->setSipDomain(*reinterpret_cast< QString*>(_v)); break;
        case 24:
            if (_t->mSipDomainFieldError != *reinterpret_cast< QString*>(_v)) {
                _t->mSipDomainFieldError = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->sipDomainFieldErrorChanged();
            }
            break;
        case 25:
            if (_t->mDebug != *reinterpret_cast< bool*>(_v)) {
                _t->mDebug = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->debugChanged();
            }
            break;
        case 26:
            if (_t->mVerifyServerCertificates != *reinterpret_cast< int*>(_v)) {
                _t->mVerifyServerCertificates = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->verifyServerCertificatesChanged();
            }
            break;
        case 27: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LdapModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_LdapModel.data,
    qt_meta_data_LdapModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LdapModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LdapModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LdapModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LdapModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 32;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 28;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LdapModel::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LdapModel::isValidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LdapModel::serverChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LdapModel::displayNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LdapModel::useTlsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void LdapModel::useSalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void LdapModel::isServerValidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void LdapModel::maxResultsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void LdapModel::timeoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void LdapModel::passwordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void LdapModel::bindDnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void LdapModel::baseObjectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void LdapModel::filterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void LdapModel::nameAttributesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void LdapModel::sipAttributesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void LdapModel::sipDomainChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void LdapModel::debugChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void LdapModel::verifyServerCertificatesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void LdapModel::indexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void LdapModel::serverFieldErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void LdapModel::maxResultsFieldErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void LdapModel::timeoutFieldErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void LdapModel::passwordFieldErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void LdapModel::bindDnFieldErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void LdapModel::baseObjectFieldErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void LdapModel::filterFieldErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void LdapModel::nameAttributesFieldErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void LdapModel::sipAttributesFieldErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void LdapModel::sipDomainFieldErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void LdapModel::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
