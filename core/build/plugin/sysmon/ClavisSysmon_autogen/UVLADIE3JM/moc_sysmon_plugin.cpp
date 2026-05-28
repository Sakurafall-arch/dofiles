/****************************************************************************
** Meta object code from reading C++ file 'sysmon_plugin.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugin/sysmon/src/sysmon_plugin.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sysmon_plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN12SysmonPluginE_t {};
} // unnamed namespace

template <> constexpr inline auto SysmonPlugin::qt_create_metaobjectdata<qt_meta_tag_ZN12SysmonPluginE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SysmonPlugin",
        "QML.Element",
        "auto",
        "QML.Singleton",
        "true",
        "fastDataChanged",
        "",
        "mediumDataChanged",
        "slowDataChanged",
        "glacialDataChanged",
        "onFastTick",
        "onMediumTick",
        "onSlowTick",
        "onGlacialTick",
        "cpuUsage",
        "ramUsage",
        "ramUsedGB",
        "ramTotalGB",
        "netDownBps",
        "netUpBps",
        "processes",
        "ProcessModel*",
        "coreTemp",
        "gpuTemp",
        "gpuUsage",
        "load1",
        "load5",
        "load15",
        "cpuFreqGHz",
        "fanRpm",
        "batteryPercent",
        "batteryStatus",
        "batteryHealth",
        "batteryPowerW",
        "hasBattery",
        "diskUsage",
        "diskUsedGB",
        "diskTotalGB",
        "uptime",
        "taskRunning",
        "taskTotal",
        "systemUser",
        "hostName",
        "wmName",
        "kernelRelease",
        "shellName",
        "distroId",
        "distroName",
        "chassis",
        "osAgeText"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'fastDataChanged'
        QtMocHelpers::SignalData<void()>(5, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'mediumDataChanged'
        QtMocHelpers::SignalData<void()>(7, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'slowDataChanged'
        QtMocHelpers::SignalData<void()>(8, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'glacialDataChanged'
        QtMocHelpers::SignalData<void()>(9, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onFastTick'
        QtMocHelpers::SlotData<void()>(10, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMediumTick'
        QtMocHelpers::SlotData<void()>(11, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSlowTick'
        QtMocHelpers::SlotData<void()>(12, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onGlacialTick'
        QtMocHelpers::SlotData<void()>(13, 6, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'cpuUsage'
        QtMocHelpers::PropertyData<double>(14, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'ramUsage'
        QtMocHelpers::PropertyData<double>(15, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'ramUsedGB'
        QtMocHelpers::PropertyData<double>(16, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'ramTotalGB'
        QtMocHelpers::PropertyData<double>(17, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'netDownBps'
        QtMocHelpers::PropertyData<double>(18, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'netUpBps'
        QtMocHelpers::PropertyData<double>(19, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'processes'
        QtMocHelpers::PropertyData<ProcessModel*>(20, 0x80000000 | 21, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'coreTemp'
        QtMocHelpers::PropertyData<double>(22, QMetaType::Double, QMC::DefaultPropertyFlags, 1),
        // property 'gpuTemp'
        QtMocHelpers::PropertyData<double>(23, QMetaType::Double, QMC::DefaultPropertyFlags, 1),
        // property 'gpuUsage'
        QtMocHelpers::PropertyData<double>(24, QMetaType::Double, QMC::DefaultPropertyFlags, 1),
        // property 'load1'
        QtMocHelpers::PropertyData<double>(25, QMetaType::Double, QMC::DefaultPropertyFlags, 1),
        // property 'load5'
        QtMocHelpers::PropertyData<double>(26, QMetaType::Double, QMC::DefaultPropertyFlags, 1),
        // property 'load15'
        QtMocHelpers::PropertyData<double>(27, QMetaType::Double, QMC::DefaultPropertyFlags, 1),
        // property 'cpuFreqGHz'
        QtMocHelpers::PropertyData<double>(28, QMetaType::Double, QMC::DefaultPropertyFlags, 1),
        // property 'fanRpm'
        QtMocHelpers::PropertyData<int>(29, QMetaType::Int, QMC::DefaultPropertyFlags, 2),
        // property 'batteryPercent'
        QtMocHelpers::PropertyData<double>(30, QMetaType::Double, QMC::DefaultPropertyFlags, 2),
        // property 'batteryStatus'
        QtMocHelpers::PropertyData<QString>(31, QMetaType::QString, QMC::DefaultPropertyFlags, 2),
        // property 'batteryHealth'
        QtMocHelpers::PropertyData<int>(32, QMetaType::Int, QMC::DefaultPropertyFlags, 2),
        // property 'batteryPowerW'
        QtMocHelpers::PropertyData<double>(33, QMetaType::Double, QMC::DefaultPropertyFlags, 2),
        // property 'hasBattery'
        QtMocHelpers::PropertyData<bool>(34, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'diskUsage'
        QtMocHelpers::PropertyData<double>(35, QMetaType::Double, QMC::DefaultPropertyFlags, 3),
        // property 'diskUsedGB'
        QtMocHelpers::PropertyData<double>(36, QMetaType::Double, QMC::DefaultPropertyFlags, 3),
        // property 'diskTotalGB'
        QtMocHelpers::PropertyData<double>(37, QMetaType::Double, QMC::DefaultPropertyFlags, 3),
        // property 'uptime'
        QtMocHelpers::PropertyData<QString>(38, QMetaType::QString, QMC::DefaultPropertyFlags, 3),
        // property 'taskRunning'
        QtMocHelpers::PropertyData<int>(39, QMetaType::Int, QMC::DefaultPropertyFlags, 1),
        // property 'taskTotal'
        QtMocHelpers::PropertyData<int>(40, QMetaType::Int, QMC::DefaultPropertyFlags, 1),
        // property 'systemUser'
        QtMocHelpers::PropertyData<QString>(41, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'hostName'
        QtMocHelpers::PropertyData<QString>(42, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'wmName'
        QtMocHelpers::PropertyData<QString>(43, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'kernelRelease'
        QtMocHelpers::PropertyData<QString>(44, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'shellName'
        QtMocHelpers::PropertyData<QString>(45, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'distroId'
        QtMocHelpers::PropertyData<QString>(46, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'distroName'
        QtMocHelpers::PropertyData<QString>(47, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'chassis'
        QtMocHelpers::PropertyData<QString>(48, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'osAgeText'
        QtMocHelpers::PropertyData<QString>(49, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<SysmonPlugin, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject SysmonPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SysmonPluginE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SysmonPluginE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12SysmonPluginE_t>.metaTypes,
    nullptr
} };

void SysmonPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SysmonPlugin *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fastDataChanged(); break;
        case 1: _t->mediumDataChanged(); break;
        case 2: _t->slowDataChanged(); break;
        case 3: _t->glacialDataChanged(); break;
        case 4: _t->onFastTick(); break;
        case 5: _t->onMediumTick(); break;
        case 6: _t->onSlowTick(); break;
        case 7: _t->onGlacialTick(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SysmonPlugin::*)()>(_a, &SysmonPlugin::fastDataChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SysmonPlugin::*)()>(_a, &SysmonPlugin::mediumDataChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SysmonPlugin::*)()>(_a, &SysmonPlugin::slowDataChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SysmonPlugin::*)()>(_a, &SysmonPlugin::glacialDataChanged, 3))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ProcessModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<double*>(_v) = _t->cpuUsage(); break;
        case 1: *reinterpret_cast<double*>(_v) = _t->ramUsage(); break;
        case 2: *reinterpret_cast<double*>(_v) = _t->ramUsedGB(); break;
        case 3: *reinterpret_cast<double*>(_v) = _t->ramTotalGB(); break;
        case 4: *reinterpret_cast<double*>(_v) = _t->netDownBps(); break;
        case 5: *reinterpret_cast<double*>(_v) = _t->netUpBps(); break;
        case 6: *reinterpret_cast<ProcessModel**>(_v) = _t->processes(); break;
        case 7: *reinterpret_cast<double*>(_v) = _t->coreTemp(); break;
        case 8: *reinterpret_cast<double*>(_v) = _t->gpuTemp(); break;
        case 9: *reinterpret_cast<double*>(_v) = _t->gpuUsage(); break;
        case 10: *reinterpret_cast<double*>(_v) = _t->load1(); break;
        case 11: *reinterpret_cast<double*>(_v) = _t->load5(); break;
        case 12: *reinterpret_cast<double*>(_v) = _t->load15(); break;
        case 13: *reinterpret_cast<double*>(_v) = _t->cpuFreqGHz(); break;
        case 14: *reinterpret_cast<int*>(_v) = _t->fanRpm(); break;
        case 15: *reinterpret_cast<double*>(_v) = _t->batteryPercent(); break;
        case 16: *reinterpret_cast<QString*>(_v) = _t->batteryStatus(); break;
        case 17: *reinterpret_cast<int*>(_v) = _t->batteryHealth(); break;
        case 18: *reinterpret_cast<double*>(_v) = _t->batteryPowerW(); break;
        case 19: *reinterpret_cast<bool*>(_v) = _t->hasBattery(); break;
        case 20: *reinterpret_cast<double*>(_v) = _t->diskUsage(); break;
        case 21: *reinterpret_cast<double*>(_v) = _t->diskUsedGB(); break;
        case 22: *reinterpret_cast<double*>(_v) = _t->diskTotalGB(); break;
        case 23: *reinterpret_cast<QString*>(_v) = _t->uptime(); break;
        case 24: *reinterpret_cast<int*>(_v) = _t->taskRunning(); break;
        case 25: *reinterpret_cast<int*>(_v) = _t->taskTotal(); break;
        case 26: *reinterpret_cast<QString*>(_v) = _t->systemUser(); break;
        case 27: *reinterpret_cast<QString*>(_v) = _t->hostName(); break;
        case 28: *reinterpret_cast<QString*>(_v) = _t->wmName(); break;
        case 29: *reinterpret_cast<QString*>(_v) = _t->kernelRelease(); break;
        case 30: *reinterpret_cast<QString*>(_v) = _t->shellName(); break;
        case 31: *reinterpret_cast<QString*>(_v) = _t->distroId(); break;
        case 32: *reinterpret_cast<QString*>(_v) = _t->distroName(); break;
        case 33: *reinterpret_cast<QString*>(_v) = _t->chassis(); break;
        case 34: *reinterpret_cast<QString*>(_v) = _t->osAgeText(); break;
        default: break;
        }
    }
}

const QMetaObject *SysmonPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SysmonPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SysmonPluginE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SysmonPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void SysmonPlugin::fastDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SysmonPlugin::mediumDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SysmonPlugin::slowDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SysmonPlugin::glacialDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
