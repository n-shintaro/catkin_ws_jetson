/****************************************************************************
** Meta object code from reading C++ file 'agentstatemachine.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/pedsim_ros/pedsim_simulator/include/pedsim_simulator/agentstatemachine.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'agentstatemachine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AgentStateMachine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   43,   52,   52, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   52,   52,   52, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AgentStateMachine[] = {
    "AgentStateMachine\0stateChanged(AgentState)\0"
    "newState\0\0loseAttraction()\0"
};

void AgentStateMachine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AgentStateMachine *_t = static_cast<AgentStateMachine *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< AgentState(*)>(_a[1]))); break;
        case 1: _t->loseAttraction(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AgentStateMachine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AgentStateMachine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AgentStateMachine,
      qt_meta_data_AgentStateMachine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AgentStateMachine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AgentStateMachine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AgentStateMachine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AgentStateMachine))
        return static_cast<void*>(const_cast< AgentStateMachine*>(this));
    return QObject::qt_metacast(_clname);
}

int AgentStateMachine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AgentStateMachine::stateChanged(AgentState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
