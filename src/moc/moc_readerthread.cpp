/****************************************************************************
** Meta object code from reading C++ file 'readerthread.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../readerthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'readerthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ReaderThread[] = {

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
      21,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ReaderThread[] = {
    "ReaderThread\0\0,id,df\0"
    "readEvent(QByteArray,int,ReadEvent::DataFormat)\0"
    "socketNotifierSLOT()\0"
};

void ReaderThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReaderThread *_t = static_cast<ReaderThread *>(_o);
        switch (_id) {
        case 0: _t->readEvent((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< ReadEvent::DataFormat(*)>(_a[3]))); break;
        case 1: _t->socketNotifierSLOT(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ReaderThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ReaderThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ReaderThread,
      qt_meta_data_ReaderThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ReaderThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ReaderThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ReaderThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReaderThread))
        return static_cast<void*>(const_cast< ReaderThread*>(this));
    return QThread::qt_metacast(_clname);
}

int ReaderThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void ReaderThread::readEvent(const QByteArray & _t1, int _t2, ReadEvent::DataFormat _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
