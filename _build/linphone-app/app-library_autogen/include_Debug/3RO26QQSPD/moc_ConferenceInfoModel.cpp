/****************************************************************************
** Meta object code from reading C++ file 'ConferenceInfoModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../linphone-app/src/components/conferenceInfo/ConferenceInfoModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConferenceInfoModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConferenceInfoModel_t {
    QByteArrayData data[59];
    char stringdata0[937];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConferenceInfoModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConferenceInfoModel_t qt_meta_stringdata_ConferenceInfoModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ConferenceInfoModel"
QT_MOC_LITERAL(1, 20, 15), // "dateTimeChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "durationChanged"
QT_MOC_LITERAL(4, 53, 16), // "organizerChanged"
QT_MOC_LITERAL(5, 70, 14), // "subjectChanged"
QT_MOC_LITERAL(6, 85, 18), // "descriptionChanged"
QT_MOC_LITERAL(7, 104, 19), // "participantsChanged"
QT_MOC_LITERAL(8, 124, 10), // "uriChanged"
QT_MOC_LITERAL(9, 135, 18), // "isScheduledChanged"
QT_MOC_LITERAL(10, 154, 14), // "isEndedChanged"
QT_MOC_LITERAL(11, 169, 17), // "inviteModeChanged"
QT_MOC_LITERAL(12, 187, 26), // "conferenceInfoStateChanged"
QT_MOC_LITERAL(13, 214, 31), // "conferenceSchedulerStateChanged"
QT_MOC_LITERAL(14, 246, 17), // "conferenceCreated"
QT_MOC_LITERAL(15, 264, 24), // "conferenceCreationFailed"
QT_MOC_LITERAL(16, 289, 21), // "conferenceInfoChanged"
QT_MOC_LITERAL(17, 311, 15), // "invitationsSent"
QT_MOC_LITERAL(18, 327, 7), // "removed"
QT_MOC_LITERAL(19, 335, 6), // "byUser"
QT_MOC_LITERAL(20, 342, 12), // "initDateTime"
QT_MOC_LITERAL(21, 355, 20), // "displayNamesToString"
QT_MOC_LITERAL(22, 376, 15), // "getParticipants"
QT_MOC_LITERAL(23, 392, 18), // "getAllParticipants"
QT_MOC_LITERAL(24, 411, 19), // "getParticipantCount"
QT_MOC_LITERAL(25, 431, 22), // "getAllParticipantCount"
QT_MOC_LITERAL(26, 454, 16), // "getTimeZoneModel"
QT_MOC_LITERAL(27, 471, 14), // "TimeZoneModel*"
QT_MOC_LITERAL(28, 486, 18), // "getIcalendarString"
QT_MOC_LITERAL(29, 505, 11), // "setDateTime"
QT_MOC_LITERAL(30, 517, 4), // "date"
QT_MOC_LITERAL(31, 522, 4), // "time"
QT_MOC_LITERAL(32, 527, 5), // "model"
QT_MOC_LITERAL(33, 533, 15), // "setParticipants"
QT_MOC_LITERAL(34, 549, 21), // "ParticipantListModel*"
QT_MOC_LITERAL(35, 571, 12), // "participants"
QT_MOC_LITERAL(36, 584, 19), // "resetConferenceInfo"
QT_MOC_LITERAL(37, 604, 16), // "createConference"
QT_MOC_LITERAL(38, 621, 13), // "securityLevel"
QT_MOC_LITERAL(39, 635, 16), // "cancelConference"
QT_MOC_LITERAL(40, 652, 20), // "deleteConferenceInfo"
QT_MOC_LITERAL(41, 673, 13), // "timeZoneModel"
QT_MOC_LITERAL(42, 687, 8), // "dateTime"
QT_MOC_LITERAL(43, 696, 11), // "dateTimeUtc"
QT_MOC_LITERAL(44, 708, 8), // "duration"
QT_MOC_LITERAL(45, 717, 11), // "endDateTime"
QT_MOC_LITERAL(46, 729, 9), // "organizer"
QT_MOC_LITERAL(47, 739, 7), // "subject"
QT_MOC_LITERAL(48, 747, 11), // "description"
QT_MOC_LITERAL(49, 759, 3), // "uri"
QT_MOC_LITERAL(50, 763, 11), // "isScheduled"
QT_MOC_LITERAL(51, 775, 7), // "isEnded"
QT_MOC_LITERAL(52, 783, 10), // "inviteMode"
QT_MOC_LITERAL(53, 794, 16), // "participantCount"
QT_MOC_LITERAL(54, 811, 19), // "allParticipantCount"
QT_MOC_LITERAL(55, 831, 5), // "state"
QT_MOC_LITERAL(56, 837, 34), // "LinphoneEnums::ConferenceInfo..."
QT_MOC_LITERAL(57, 872, 24), // "conferenceSchedulerState"
QT_MOC_LITERAL(58, 897, 39) // "LinphoneEnums::ConferenceSche..."

    },
    "ConferenceInfoModel\0dateTimeChanged\0"
    "\0durationChanged\0organizerChanged\0"
    "subjectChanged\0descriptionChanged\0"
    "participantsChanged\0uriChanged\0"
    "isScheduledChanged\0isEndedChanged\0"
    "inviteModeChanged\0conferenceInfoStateChanged\0"
    "conferenceSchedulerStateChanged\0"
    "conferenceCreated\0conferenceCreationFailed\0"
    "conferenceInfoChanged\0invitationsSent\0"
    "removed\0byUser\0initDateTime\0"
    "displayNamesToString\0getParticipants\0"
    "getAllParticipants\0getParticipantCount\0"
    "getAllParticipantCount\0getTimeZoneModel\0"
    "TimeZoneModel*\0getIcalendarString\0"
    "setDateTime\0date\0time\0model\0setParticipants\0"
    "ParticipantListModel*\0participants\0"
    "resetConferenceInfo\0createConference\0"
    "securityLevel\0cancelConference\0"
    "deleteConferenceInfo\0timeZoneModel\0"
    "dateTime\0dateTimeUtc\0duration\0endDateTime\0"
    "organizer\0subject\0description\0uri\0"
    "isScheduled\0isEnded\0inviteMode\0"
    "participantCount\0allParticipantCount\0"
    "state\0LinphoneEnums::ConferenceInfoState\0"
    "conferenceSchedulerState\0"
    "LinphoneEnums::ConferenceSchedulerState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConferenceInfoModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
      17,  212, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  169,    2, 0x06 /* Public */,
       3,    0,  170,    2, 0x06 /* Public */,
       4,    0,  171,    2, 0x06 /* Public */,
       5,    0,  172,    2, 0x06 /* Public */,
       6,    0,  173,    2, 0x06 /* Public */,
       7,    0,  174,    2, 0x06 /* Public */,
       8,    0,  175,    2, 0x06 /* Public */,
       9,    0,  176,    2, 0x06 /* Public */,
      10,    0,  177,    2, 0x06 /* Public */,
      11,    0,  178,    2, 0x06 /* Public */,
      12,    0,  179,    2, 0x06 /* Public */,
      13,    0,  180,    2, 0x06 /* Public */,
      14,    0,  181,    2, 0x06 /* Public */,
      15,    0,  182,    2, 0x06 /* Public */,
      16,    0,  183,    2, 0x06 /* Public */,
      17,    0,  184,    2, 0x06 /* Public */,
      18,    1,  185,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      20,    0,  188,    2, 0x02 /* Public */,
      21,    0,  189,    2, 0x02 /* Public */,
      22,    0,  190,    2, 0x02 /* Public */,
      23,    0,  191,    2, 0x02 /* Public */,
      24,    0,  192,    2, 0x02 /* Public */,
      25,    0,  193,    2, 0x02 /* Public */,
      26,    0,  194,    2, 0x02 /* Public */,
      28,    0,  195,    2, 0x02 /* Public */,
      29,    3,  196,    2, 0x02 /* Public */,
      33,    1,  203,    2, 0x02 /* Public */,
      36,    0,  206,    2, 0x02 /* Public */,
      37,    1,  207,    2, 0x02 /* Public */,
      39,    0,  210,    2, 0x02 /* Public */,
      40,    0,  211,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::Bool,   19,

 // methods: parameters
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::QVariantList,
    QMetaType::QVariantList,
    QMetaType::Int,
    QMetaType::Int,
    0x80000000 | 27,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QDate, QMetaType::QTime, 0x80000000 | 27,   30,   31,   32,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      41, 0x80000000 | 27, 0x00095409,
      42, QMetaType::QDateTime, 0x00495103,
      43, QMetaType::QDateTime, 0x00495001,
      44, QMetaType::Int, 0x00495103,
      45, QMetaType::QDateTime, 0x00495001,
      46, QMetaType::QString, 0x00495103,
      47, QMetaType::QString, 0x00495103,
      48, QMetaType::QString, 0x00495103,
      21, QMetaType::QString, 0x00495001,
      49, QMetaType::QString, 0x00495001,
      50, QMetaType::Bool, 0x00495103,
      51, QMetaType::Bool, 0x00495103,
      52, QMetaType::Int, 0x00495103,
      53, QMetaType::Int, 0x00495001,
      54, QMetaType::Int, 0x00495001,
      55, 0x80000000 | 56, 0x00495009,
      57, 0x80000000 | 58, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       0,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
       5,
       5,
      10,
      11,

       0        // eod
};

void ConferenceInfoModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConferenceInfoModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dateTimeChanged(); break;
        case 1: _t->durationChanged(); break;
        case 2: _t->organizerChanged(); break;
        case 3: _t->subjectChanged(); break;
        case 4: _t->descriptionChanged(); break;
        case 5: _t->participantsChanged(); break;
        case 6: _t->uriChanged(); break;
        case 7: _t->isScheduledChanged(); break;
        case 8: _t->isEndedChanged(); break;
        case 9: _t->inviteModeChanged(); break;
        case 10: _t->conferenceInfoStateChanged(); break;
        case 11: _t->conferenceSchedulerStateChanged(); break;
        case 12: _t->conferenceCreated(); break;
        case 13: _t->conferenceCreationFailed(); break;
        case 14: _t->conferenceInfoChanged(); break;
        case 15: _t->invitationsSent(); break;
        case 16: _t->removed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->initDateTime(); break;
        case 18: { QString _r = _t->displayNamesToString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 19: { QVariantList _r = _t->getParticipants();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 20: { QVariantList _r = _t->getAllParticipants();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 21: { int _r = _t->getParticipantCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 22: { int _r = _t->getAllParticipantCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 23: { TimeZoneModel* _r = _t->getTimeZoneModel();
            if (_a[0]) *reinterpret_cast< TimeZoneModel**>(_a[0]) = std::move(_r); }  break;
        case 24: { QString _r = _t->getIcalendarString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->setDateTime((*reinterpret_cast< const QDate(*)>(_a[1])),(*reinterpret_cast< const QTime(*)>(_a[2])),(*reinterpret_cast< TimeZoneModel*(*)>(_a[3]))); break;
        case 26: _t->setParticipants((*reinterpret_cast< ParticipantListModel*(*)>(_a[1]))); break;
        case 27: _t->resetConferenceInfo(); break;
        case 28: _t->createConference((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 29: _t->cancelConference(); break;
        case 30: _t->deleteConferenceInfo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConferenceInfoModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::dateTimeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConferenceInfoModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::durationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ConferenceInfoModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::organizerChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ConferenceInfoModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::subjectChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ConferenceInfoModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::descriptionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ConferenceInfoModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::participantsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ConferenceInfoModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::uriChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ConferenceInfoModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::isScheduledChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ConferenceInfoModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::isEndedChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ConferenceInfoModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::inviteModeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ConferenceInfoModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::conferenceInfoStateChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ConferenceInfoModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::conferenceSchedulerStateChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ConferenceInfoModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::conferenceCreated)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ConferenceInfoModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::conferenceCreationFailed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ConferenceInfoModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::conferenceInfoChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ConferenceInfoModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::invitationsSent)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (ConferenceInfoModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConferenceInfoModel::removed)) {
                *result = 16;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinphoneEnums::ConferenceInfoState >(); break;
        case 16:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinphoneEnums::ConferenceSchedulerState >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ConferenceInfoModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TimeZoneModel**>(_v) = _t->getTimeZoneModel(); break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = _t->getDateTimeSystem(); break;
        case 2: *reinterpret_cast< QDateTime*>(_v) = _t->getDateTimeUtc(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getDuration(); break;
        case 4: *reinterpret_cast< QDateTime*>(_v) = _t->getEndDateTime(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getOrganizer(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getSubject(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getDescription(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->displayNamesToString(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getUri(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isScheduled(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->isEnded(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->getInviteMode(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->getParticipantCount(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->getAllParticipantCount(); break;
        case 15: *reinterpret_cast< LinphoneEnums::ConferenceInfoState*>(_v) = _t->getConferenceInfoState(); break;
        case 16: *reinterpret_cast< LinphoneEnums::ConferenceSchedulerState*>(_v) = _t->getConferenceSchedulerState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ConferenceInfoModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setDateTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 3: _t->setDuration(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setOrganizer(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setSubject(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setIsScheduled(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setIsEnded(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setInviteMode(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ConferenceInfoModel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ConferenceInfoModel.data,
    qt_meta_data_ConferenceInfoModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConferenceInfoModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConferenceInfoModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConferenceInfoModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ConferenceInfoModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 31;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 17;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ConferenceInfoModel::dateTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ConferenceInfoModel::durationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ConferenceInfoModel::organizerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ConferenceInfoModel::subjectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ConferenceInfoModel::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ConferenceInfoModel::participantsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ConferenceInfoModel::uriChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ConferenceInfoModel::isScheduledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ConferenceInfoModel::isEndedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ConferenceInfoModel::inviteModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ConferenceInfoModel::conferenceInfoStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ConferenceInfoModel::conferenceSchedulerStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void ConferenceInfoModel::conferenceCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void ConferenceInfoModel::conferenceCreationFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void ConferenceInfoModel::conferenceInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void ConferenceInfoModel::invitationsSent()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void ConferenceInfoModel::removed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
