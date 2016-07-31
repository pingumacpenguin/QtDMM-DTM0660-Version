/****************************************************************************
** Meta object code from reading C++ file 'printdlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../printdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrintDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x09,
      23,    9,    9,    9, 0x09,
      34,    9,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PrintDlg[] = {
    "PrintDlg\0\0configSLOT()\0helpSLOT()\0"
    "createPrinterString()\0"
};

void PrintDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrintDlg *_t = static_cast<PrintDlg *>(_o);
        switch (_id) {
        case 0: _t->configSLOT(); break;
        case 1: _t->helpSLOT(); break;
        case 2: _t->createPrinterString(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PrintDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrintDlg::staticMetaObject = {
    { &UIPrintDlg::staticMetaObject, qt_meta_stringdata_PrintDlg,
      qt_meta_data_PrintDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrintDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrintDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrintDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrintDlg))
        return static_cast<void*>(const_cast< PrintDlg*>(this));
    return UIPrintDlg::qt_metacast(_clname);
}

int PrintDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIPrintDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
