/****************************************************************************
** Meta object code from reading C++ file 'queueingplanner.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/pedsim_ros/pedsim_simulator/include/pedsim_simulator/waypointplanner/queueingplanner.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'queueingplanner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QueueingWaypointPlanner[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   70,   78,   78, 0x09,
      79,  104,   78,   78, 0x09,
     107,   78,   78,   78, 0x09,
     134,   70,   78,   78, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QueueingWaypointPlanner[] = {
    "QueueingWaypointPlanner\0"
    "onFollowedAgentPositionChanged(double,double)\0"
    "xIn,yIn\0\0onAgentMayPassQueue(int)\0id\0"
    "onFollowedAgentLeftQueue()\0"
    "onQueueEndPositionChanged(double,double)\0"
};

void QueueingWaypointPlanner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QueueingWaypointPlanner *_t = static_cast<QueueingWaypointPlanner *>(_o);
        switch (_id) {
        case 0: _t->onFollowedAgentPositionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->onAgentMayPassQueue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onFollowedAgentLeftQueue(); break;
        case 3: _t->onQueueEndPositionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QueueingWaypointPlanner::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QueueingWaypointPlanner::staticMetaObject = {
    { &WaypointPlanner::staticMetaObject, qt_meta_stringdata_QueueingWaypointPlanner,
      qt_meta_data_QueueingWaypointPlanner, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QueueingWaypointPlanner::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QueueingWaypointPlanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QueueingWaypointPlanner::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QueueingWaypointPlanner))
        return static_cast<void*>(const_cast< QueueingWaypointPlanner*>(this));
    return WaypointPlanner::qt_metacast(_clname);
}

int QueueingWaypointPlanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WaypointPlanner::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
