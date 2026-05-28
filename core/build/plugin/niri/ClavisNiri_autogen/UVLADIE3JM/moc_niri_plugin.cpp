/****************************************************************************
** Meta object code from reading C++ file 'niri_plugin.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugin/niri/src/niri_plugin.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'niri_plugin.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10NiriPluginE_t {};
} // unnamed namespace

template <> constexpr inline auto NiriPlugin::qt_create_metaobjectdata<qt_meta_tag_ZN10NiriPluginE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NiriPlugin",
        "QML.Element",
        "Niri",
        "QML.Singleton",
        "true",
        "connectedChanged",
        "",
        "errorChanged",
        "workspacesChanged",
        "windowsChanged",
        "outputsChanged",
        "focusedWindowChanged",
        "focusedWorkspaceChanged",
        "overviewChanged",
        "keyboardLayoutChanged",
        "handleEvent",
        "QJsonObject",
        "event",
        "connectToNiri",
        "workspacesForOutput",
        "QVariantList",
        "outputName",
        "windowsForWorkspace",
        "workspaceId",
        "windowsForOutput",
        "activeWorkspaceForOutput",
        "QVariantMap",
        "workspaceById",
        "id",
        "windowById",
        "workspaceIcons",
        "groupApps",
        "searchWindows",
        "query",
        "focusWorkspaceByIndex",
        "index",
        "focusWorkspaceById",
        "focusWorkspaceByName",
        "name",
        "focusWindow",
        "closeWindow",
        "closeFocusedWindow",
        "toggleOverview",
        "focusColumnLeft",
        "focusColumnRight",
        "focusWorkspaceUp",
        "focusWorkspaceDown",
        "moveWorkspaceToIndex",
        "workspaceIndex",
        "targetIndex",
        "setWorkspaceName",
        "unsetWorkspaceName",
        "powerOffMonitors",
        "powerOnMonitors",
        "cycleKeyboardLayout",
        "doScreenTransition",
        "delayMs",
        "connected",
        "socketPath",
        "lastError",
        "workspaces",
        "NiriWorkspaceModel*",
        "windows",
        "NiriWindowModel*",
        "outputs",
        "NiriOutputModel*",
        "focusedWindow",
        "focusedWorkspace",
        "currentOutput",
        "inOverview",
        "keyboardLayoutNames",
        "currentKeyboardLayoutName"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'connectedChanged'
        QtMocHelpers::SignalData<void()>(5, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'errorChanged'
        QtMocHelpers::SignalData<void()>(7, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'workspacesChanged'
        QtMocHelpers::SignalData<void()>(8, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowsChanged'
        QtMocHelpers::SignalData<void()>(9, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'outputsChanged'
        QtMocHelpers::SignalData<void()>(10, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'focusedWindowChanged'
        QtMocHelpers::SignalData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'focusedWorkspaceChanged'
        QtMocHelpers::SignalData<void()>(12, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'overviewChanged'
        QtMocHelpers::SignalData<void()>(13, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'keyboardLayoutChanged'
        QtMocHelpers::SignalData<void()>(14, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'handleEvent'
        QtMocHelpers::SlotData<void(const QJsonObject &)>(15, 6, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Method 'connectToNiri'
        QtMocHelpers::MethodData<bool()>(18, 6, QMC::AccessPublic, QMetaType::Bool),
        // Method 'workspacesForOutput'
        QtMocHelpers::MethodData<QVariantList(const QString &) const>(19, 6, QMC::AccessPublic, 0x80000000 | 20, {{
            { QMetaType::QString, 21 },
        }}),
        // Method 'windowsForWorkspace'
        QtMocHelpers::MethodData<QVariantList(quint64) const>(22, 6, QMC::AccessPublic, 0x80000000 | 20, {{
            { QMetaType::ULongLong, 23 },
        }}),
        // Method 'windowsForOutput'
        QtMocHelpers::MethodData<QVariantList(const QString &) const>(24, 6, QMC::AccessPublic, 0x80000000 | 20, {{
            { QMetaType::QString, 21 },
        }}),
        // Method 'activeWorkspaceForOutput'
        QtMocHelpers::MethodData<QVariantMap(const QString &) const>(25, 6, QMC::AccessPublic, 0x80000000 | 26, {{
            { QMetaType::QString, 21 },
        }}),
        // Method 'workspaceById'
        QtMocHelpers::MethodData<QVariantMap(quint64) const>(27, 6, QMC::AccessPublic, 0x80000000 | 26, {{
            { QMetaType::ULongLong, 28 },
        }}),
        // Method 'windowById'
        QtMocHelpers::MethodData<QVariantMap(quint64) const>(29, 6, QMC::AccessPublic, 0x80000000 | 26, {{
            { QMetaType::ULongLong, 28 },
        }}),
        // Method 'workspaceIcons'
        QtMocHelpers::MethodData<QVariantList(quint64, bool) const>(30, 6, QMC::AccessPublic, 0x80000000 | 20, {{
            { QMetaType::ULongLong, 23 }, { QMetaType::Bool, 31 },
        }}),
        // Method 'workspaceIcons'
        QtMocHelpers::MethodData<QVariantList(quint64) const>(30, 6, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 20, {{
            { QMetaType::ULongLong, 23 },
        }}),
        // Method 'searchWindows'
        QtMocHelpers::MethodData<QVariantList(const QString &) const>(32, 6, QMC::AccessPublic, 0x80000000 | 20, {{
            { QMetaType::QString, 33 },
        }}),
        // Method 'focusWorkspaceByIndex'
        QtMocHelpers::MethodData<bool(int)>(34, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 35 },
        }}),
        // Method 'focusWorkspaceById'
        QtMocHelpers::MethodData<bool(quint64)>(36, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::ULongLong, 28 },
        }}),
        // Method 'focusWorkspaceByName'
        QtMocHelpers::MethodData<bool(const QString &)>(37, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 38 },
        }}),
        // Method 'focusWindow'
        QtMocHelpers::MethodData<bool(quint64)>(39, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::ULongLong, 28 },
        }}),
        // Method 'closeWindow'
        QtMocHelpers::MethodData<bool(quint64)>(40, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::ULongLong, 28 },
        }}),
        // Method 'closeFocusedWindow'
        QtMocHelpers::MethodData<bool()>(41, 6, QMC::AccessPublic, QMetaType::Bool),
        // Method 'toggleOverview'
        QtMocHelpers::MethodData<bool()>(42, 6, QMC::AccessPublic, QMetaType::Bool),
        // Method 'focusColumnLeft'
        QtMocHelpers::MethodData<bool()>(43, 6, QMC::AccessPublic, QMetaType::Bool),
        // Method 'focusColumnRight'
        QtMocHelpers::MethodData<bool()>(44, 6, QMC::AccessPublic, QMetaType::Bool),
        // Method 'focusWorkspaceUp'
        QtMocHelpers::MethodData<bool()>(45, 6, QMC::AccessPublic, QMetaType::Bool),
        // Method 'focusWorkspaceDown'
        QtMocHelpers::MethodData<bool()>(46, 6, QMC::AccessPublic, QMetaType::Bool),
        // Method 'moveWorkspaceToIndex'
        QtMocHelpers::MethodData<bool(int, int)>(47, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 48 }, { QMetaType::Int, 49 },
        }}),
        // Method 'setWorkspaceName'
        QtMocHelpers::MethodData<bool(const QString &)>(50, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 38 },
        }}),
        // Method 'unsetWorkspaceName'
        QtMocHelpers::MethodData<bool()>(51, 6, QMC::AccessPublic, QMetaType::Bool),
        // Method 'powerOffMonitors'
        QtMocHelpers::MethodData<bool()>(52, 6, QMC::AccessPublic, QMetaType::Bool),
        // Method 'powerOnMonitors'
        QtMocHelpers::MethodData<bool()>(53, 6, QMC::AccessPublic, QMetaType::Bool),
        // Method 'cycleKeyboardLayout'
        QtMocHelpers::MethodData<bool()>(54, 6, QMC::AccessPublic, QMetaType::Bool),
        // Method 'doScreenTransition'
        QtMocHelpers::MethodData<bool(int)>(55, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 56 },
        }}),
        // Method 'doScreenTransition'
        QtMocHelpers::MethodData<bool()>(55, 6, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'connected'
        QtMocHelpers::PropertyData<bool>(57, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'socketPath'
        QtMocHelpers::PropertyData<QString>(58, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'lastError'
        QtMocHelpers::PropertyData<QString>(59, QMetaType::QString, QMC::DefaultPropertyFlags, 1),
        // property 'workspaces'
        QtMocHelpers::PropertyData<NiriWorkspaceModel*>(60, 0x80000000 | 61, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'windows'
        QtMocHelpers::PropertyData<NiriWindowModel*>(62, 0x80000000 | 63, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'outputs'
        QtMocHelpers::PropertyData<NiriOutputModel*>(64, 0x80000000 | 65, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'focusedWindow'
        QtMocHelpers::PropertyData<QVariantMap>(66, 0x80000000 | 26, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 5),
        // property 'focusedWorkspace'
        QtMocHelpers::PropertyData<QVariantMap>(67, 0x80000000 | 26, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 6),
        // property 'currentOutput'
        QtMocHelpers::PropertyData<QString>(68, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
        // property 'inOverview'
        QtMocHelpers::PropertyData<bool>(69, QMetaType::Bool, QMC::DefaultPropertyFlags, 7),
        // property 'keyboardLayoutNames'
        QtMocHelpers::PropertyData<QStringList>(70, QMetaType::QStringList, QMC::DefaultPropertyFlags, 8),
        // property 'currentKeyboardLayoutName'
        QtMocHelpers::PropertyData<QString>(71, QMetaType::QString, QMC::DefaultPropertyFlags, 8),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<NiriPlugin, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject NiriPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10NiriPluginE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10NiriPluginE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10NiriPluginE_t>.metaTypes,
    nullptr
} };

void NiriPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NiriPlugin *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->connectedChanged(); break;
        case 1: _t->errorChanged(); break;
        case 2: _t->workspacesChanged(); break;
        case 3: _t->windowsChanged(); break;
        case 4: _t->outputsChanged(); break;
        case 5: _t->focusedWindowChanged(); break;
        case 6: _t->focusedWorkspaceChanged(); break;
        case 7: _t->overviewChanged(); break;
        case 8: _t->keyboardLayoutChanged(); break;
        case 9: _t->handleEvent((*reinterpret_cast<std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 10: { bool _r = _t->connectToNiri();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { QVariantList _r = _t->workspacesForOutput((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 12: { QVariantList _r = _t->windowsForWorkspace((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 13: { QVariantList _r = _t->windowsForOutput((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 14: { QVariantMap _r = _t->activeWorkspaceForOutput((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 15: { QVariantMap _r = _t->workspaceById((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 16: { QVariantMap _r = _t->windowById((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 17: { QVariantList _r = _t->workspaceIcons((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 18: { QVariantList _r = _t->workspaceIcons((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 19: { QVariantList _r = _t->searchWindows((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->focusWorkspaceByIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->focusWorkspaceById((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 22: { bool _r = _t->focusWorkspaceByName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 23: { bool _r = _t->focusWindow((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { bool _r = _t->closeWindow((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->closeFocusedWindow();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->toggleOverview();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->focusColumnLeft();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->focusColumnRight();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->focusWorkspaceUp();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 30: { bool _r = _t->focusWorkspaceDown();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 31: { bool _r = _t->moveWorkspaceToIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->setWorkspaceName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->unsetWorkspaceName();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 34: { bool _r = _t->powerOffMonitors();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 35: { bool _r = _t->powerOnMonitors();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->cycleKeyboardLayout();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->doScreenTransition((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 38: { bool _r = _t->doScreenTransition();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (NiriPlugin::*)()>(_a, &NiriPlugin::connectedChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (NiriPlugin::*)()>(_a, &NiriPlugin::errorChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (NiriPlugin::*)()>(_a, &NiriPlugin::workspacesChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (NiriPlugin::*)()>(_a, &NiriPlugin::windowsChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (NiriPlugin::*)()>(_a, &NiriPlugin::outputsChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (NiriPlugin::*)()>(_a, &NiriPlugin::focusedWindowChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (NiriPlugin::*)()>(_a, &NiriPlugin::focusedWorkspaceChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (NiriPlugin::*)()>(_a, &NiriPlugin::overviewChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (NiriPlugin::*)()>(_a, &NiriPlugin::keyboardLayoutChanged, 8))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< NiriOutputModel* >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< NiriWindowModel* >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< NiriWorkspaceModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->connected(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->socketPath(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->lastError(); break;
        case 3: *reinterpret_cast<NiriWorkspaceModel**>(_v) = _t->workspaces(); break;
        case 4: *reinterpret_cast<NiriWindowModel**>(_v) = _t->windows(); break;
        case 5: *reinterpret_cast<NiriOutputModel**>(_v) = _t->outputs(); break;
        case 6: *reinterpret_cast<QVariantMap*>(_v) = _t->focusedWindow(); break;
        case 7: *reinterpret_cast<QVariantMap*>(_v) = _t->focusedWorkspace(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->currentOutput(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->inOverview(); break;
        case 10: *reinterpret_cast<QStringList*>(_v) = _t->keyboardLayoutNames(); break;
        case 11: *reinterpret_cast<QString*>(_v) = _t->currentKeyboardLayoutName(); break;
        default: break;
        }
    }
}

const QMetaObject *NiriPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NiriPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10NiriPluginE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NiriPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 39;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void NiriPlugin::connectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NiriPlugin::errorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NiriPlugin::workspacesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void NiriPlugin::windowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void NiriPlugin::outputsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void NiriPlugin::focusedWindowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void NiriPlugin::focusedWorkspaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void NiriPlugin::overviewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void NiriPlugin::keyboardLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
