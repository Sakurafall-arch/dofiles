/****************************************************************************
** Meta object code from reading C++ file 'weather_plugin.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugin/weather/src/weather_plugin.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'weather_plugin.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13WeatherPluginE_t {};
} // unnamed namespace

template <> constexpr inline auto WeatherPlugin::qt_create_metaobjectdata<qt_meta_tag_ZN13WeatherPluginE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WeatherPlugin",
        "QML.Element",
        "auto",
        "QML.Singleton",
        "true",
        "dataChanged",
        "",
        "loadingChanged",
        "refresh",
        "setManualLocation",
        "latitude",
        "longitude",
        "name",
        "clearManualLocation",
        "current",
        "QVariantMap",
        "loading",
        "hasValidData",
        "hasManualLocation",
        "status",
        "errorMessage",
        "locationName",
        "lastUpdated",
        "nextRefreshAt",
        "currentTemperatureC",
        "currentFeelsLikeC",
        "currentWeatherCode",
        "currentWeatherText",
        "currentIconName",
        "currentWindSpeedMs",
        "currentWindDirection",
        "currentWindGustsMs",
        "currentUvIndex",
        "currentRelativeHumidity",
        "currentDewPointC",
        "currentPressureHpa",
        "currentCloudCover",
        "currentVisibilityM",
        "currentAirQuality",
        "hourlyForecast",
        "WeatherListModel*",
        "dailyForecast",
        "dailyTrendForecast",
        "minutelyForecast"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'dataChanged'
        QtMocHelpers::SignalData<void()>(5, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'loadingChanged'
        QtMocHelpers::SignalData<void()>(7, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'refresh'
        QtMocHelpers::MethodData<void()>(8, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'setManualLocation'
        QtMocHelpers::MethodData<void(double, double, const QString &)>(9, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 10 }, { QMetaType::Double, 11 }, { QMetaType::QString, 12 },
        }}),
        // Method 'clearManualLocation'
        QtMocHelpers::MethodData<void()>(13, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'current'
        QtMocHelpers::MethodData<QVariantMap() const>(14, 6, QMC::AccessPublic, 0x80000000 | 15),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'loading'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'hasValidData'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'hasManualLocation'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'status'
        QtMocHelpers::PropertyData<QString>(19, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'errorMessage'
        QtMocHelpers::PropertyData<QString>(20, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'locationName'
        QtMocHelpers::PropertyData<QString>(21, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'latitude'
        QtMocHelpers::PropertyData<double>(10, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'longitude'
        QtMocHelpers::PropertyData<double>(11, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'lastUpdated'
        QtMocHelpers::PropertyData<QString>(22, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'nextRefreshAt'
        QtMocHelpers::PropertyData<QString>(23, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'currentTemperatureC'
        QtMocHelpers::PropertyData<double>(24, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'currentFeelsLikeC'
        QtMocHelpers::PropertyData<double>(25, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'currentWeatherCode'
        QtMocHelpers::PropertyData<int>(26, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'currentWeatherText'
        QtMocHelpers::PropertyData<QString>(27, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'currentIconName'
        QtMocHelpers::PropertyData<QString>(28, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'currentWindSpeedMs'
        QtMocHelpers::PropertyData<double>(29, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'currentWindDirection'
        QtMocHelpers::PropertyData<double>(30, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'currentWindGustsMs'
        QtMocHelpers::PropertyData<double>(31, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'currentUvIndex'
        QtMocHelpers::PropertyData<double>(32, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'currentRelativeHumidity'
        QtMocHelpers::PropertyData<double>(33, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'currentDewPointC'
        QtMocHelpers::PropertyData<double>(34, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'currentPressureHpa'
        QtMocHelpers::PropertyData<double>(35, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'currentCloudCover'
        QtMocHelpers::PropertyData<double>(36, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'currentVisibilityM'
        QtMocHelpers::PropertyData<double>(37, QMetaType::Double, QMC::DefaultPropertyFlags, 0),
        // property 'currentAirQuality'
        QtMocHelpers::PropertyData<QVariantMap>(38, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'hourlyForecast'
        QtMocHelpers::PropertyData<WeatherListModel*>(39, 0x80000000 | 40, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'dailyForecast'
        QtMocHelpers::PropertyData<WeatherListModel*>(41, 0x80000000 | 40, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'dailyTrendForecast'
        QtMocHelpers::PropertyData<WeatherListModel*>(42, 0x80000000 | 40, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'minutelyForecast'
        QtMocHelpers::PropertyData<WeatherListModel*>(43, 0x80000000 | 40, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<WeatherPlugin, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject WeatherPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13WeatherPluginE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13WeatherPluginE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13WeatherPluginE_t>.metaTypes,
    nullptr
} };

void WeatherPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WeatherPlugin *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->loadingChanged(); break;
        case 2: _t->refresh(); break;
        case 3: _t->setManualLocation((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 4: _t->clearManualLocation(); break;
        case 5: { QVariantMap _r = _t->current();
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WeatherPlugin::*)()>(_a, &WeatherPlugin::dataChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WeatherPlugin::*)()>(_a, &WeatherPlugin::loadingChanged, 1))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 28:
        case 27:
        case 26:
        case 25:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WeatherListModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->loading(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->hasValidData(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasManualLocation(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->status(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->errorMessage(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->locationName(); break;
        case 6: *reinterpret_cast<double*>(_v) = _t->latitude(); break;
        case 7: *reinterpret_cast<double*>(_v) = _t->longitude(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->lastUpdated(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->nextRefreshAt(); break;
        case 10: *reinterpret_cast<double*>(_v) = _t->currentTemperatureC(); break;
        case 11: *reinterpret_cast<double*>(_v) = _t->currentFeelsLikeC(); break;
        case 12: *reinterpret_cast<int*>(_v) = _t->currentWeatherCode(); break;
        case 13: *reinterpret_cast<QString*>(_v) = _t->currentWeatherText(); break;
        case 14: *reinterpret_cast<QString*>(_v) = _t->currentIconName(); break;
        case 15: *reinterpret_cast<double*>(_v) = _t->currentWindSpeedMs(); break;
        case 16: *reinterpret_cast<double*>(_v) = _t->currentWindDirection(); break;
        case 17: *reinterpret_cast<double*>(_v) = _t->currentWindGustsMs(); break;
        case 18: *reinterpret_cast<double*>(_v) = _t->currentUvIndex(); break;
        case 19: *reinterpret_cast<double*>(_v) = _t->currentRelativeHumidity(); break;
        case 20: *reinterpret_cast<double*>(_v) = _t->currentDewPointC(); break;
        case 21: *reinterpret_cast<double*>(_v) = _t->currentPressureHpa(); break;
        case 22: *reinterpret_cast<double*>(_v) = _t->currentCloudCover(); break;
        case 23: *reinterpret_cast<double*>(_v) = _t->currentVisibilityM(); break;
        case 24: *reinterpret_cast<QVariantMap*>(_v) = _t->currentAirQuality(); break;
        case 25: *reinterpret_cast<WeatherListModel**>(_v) = _t->hourlyForecast(); break;
        case 26: *reinterpret_cast<WeatherListModel**>(_v) = _t->dailyForecast(); break;
        case 27: *reinterpret_cast<WeatherListModel**>(_v) = _t->dailyTrendForecast(); break;
        case 28: *reinterpret_cast<WeatherListModel**>(_v) = _t->minutelyForecast(); break;
        default: break;
        }
    }
}

const QMetaObject *WeatherPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WeatherPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13WeatherPluginE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WeatherPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void WeatherPlugin::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WeatherPlugin::loadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
