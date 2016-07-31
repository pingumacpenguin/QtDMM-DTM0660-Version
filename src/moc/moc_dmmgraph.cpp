/****************************************************************************
** Meta object code from reading C++ file 'dmmgraph.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dmmgraph.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dmmgraph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DMMGraph[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      24,    9,    9,    9, 0x05,
      39,    9,    9,    9, 0x05,
      55,   53,    9,    9, 0x05,
      74,    9,    9,    9, 0x05,
      90,    9,    9,    9, 0x05,
     110,    9,    9,    9, 0x05,
     125,    9,    9,    9, 0x05,
     141,   53,    9,    9, 0x05,
     187,    9,    9,    9, 0x05,
     204,    9,    9,    9, 0x05,
     216,    9,    9,    9, 0x05,
     229,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     242,    9,    9,    9, 0x0a,
     254,    9,    9,    9, 0x0a,
     266,    9,    9,    9, 0x0a,
     282,    9,  277,    9, 0x0a,
     299,    9,    9,    9, 0x0a,
     319,  316,    9,    9, 0x0a,
     337,    9,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DMMGraph[] = {
    "DMMGraph\0\0info(QString)\0error(QString)\0"
    "running(bool)\0,\0graphSize(int,int)\0"
    "sampleTime(int)\0externalTriggered()\0"
    "zoomIn(double)\0zoomOut(double)\0"
    "thresholdChanged(DMMGraph::CursorMode,double)\0"
    "connectDMM(bool)\0configure()\0exportData()\0"
    "importData()\0clearSLOT()\0startSLOT()\0"
    "stopSLOT()\0bool\0exportDataSLOT()\0"
    "importDataSLOT()\0on\0connectSLOT(bool)\0"
    "popupSLOT(int)\0"
};

void DMMGraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DMMGraph *_t = static_cast<DMMGraph *>(_o);
        switch (_id) {
        case 0: _t->info((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->running((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->graphSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->sampleTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->externalTriggered(); break;
        case 6: _t->zoomIn((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->zoomOut((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->thresholdChanged((*reinterpret_cast< DMMGraph::CursorMode(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 9: _t->connectDMM((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->configure(); break;
        case 11: _t->exportData(); break;
        case 12: _t->importData(); break;
        case 13: _t->clearSLOT(); break;
        case 14: _t->startSLOT(); break;
        case 15: _t->stopSLOT(); break;
        case 16: { bool _r = _t->exportDataSLOT();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: _t->importDataSLOT(); break;
        case 18: _t->connectSLOT((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->popupSLOT((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DMMGraph::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DMMGraph::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DMMGraph,
      qt_meta_data_DMMGraph, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DMMGraph::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DMMGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DMMGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DMMGraph))
        return static_cast<void*>(const_cast< DMMGraph*>(this));
    return QWidget::qt_metacast(_clname);
}

int DMMGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void DMMGraph::info(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DMMGraph::error(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DMMGraph::running(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DMMGraph::graphSize(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DMMGraph::sampleTime(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DMMGraph::externalTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void DMMGraph::zoomIn(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DMMGraph::zoomOut(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DMMGraph::thresholdChanged(DMMGraph::CursorMode _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DMMGraph::connectDMM(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DMMGraph::configure()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void DMMGraph::exportData()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void DMMGraph::importData()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}
QT_END_MOC_NAMESPACE
