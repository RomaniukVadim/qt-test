/****************************************************************************
** Meta object code from reading C++ file 'mywindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../signal/mywindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mywindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_My_Window[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   11,   10,   10, 0x05,
      33,   11,   10,   10, 0x05,
      50,   11,   10,   10, 0x05,
      66,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      88,   10,   10,   10, 0x08,
     100,   11,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_My_Window[] = {
    "My_Window\0\0str\0Register(QString)\0"
    "Inverse(QString)\0Simple(QString)\0"
    "UpperInverse(QString)\0OkClicked()\0"
    "TextChanged(QString)\0"
};

void My_Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        My_Window *_t = static_cast<My_Window *>(_o);
        switch (_id) {
        case 0: _t->Register((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->Inverse((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->Simple((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->UpperInverse((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->OkClicked(); break;
        case 5: _t->TextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData My_Window::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject My_Window::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_My_Window,
      qt_meta_data_My_Window, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &My_Window::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *My_Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *My_Window::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_My_Window))
        return static_cast<void*>(const_cast< My_Window*>(this));
    return QDialog::qt_metacast(_clname);
}

int My_Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void My_Window::Register(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void My_Window::Inverse(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void My_Window::Simple(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void My_Window::UpperInverse(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_str[] = {

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
       5,    0,    4,    4, 0x0a,
      21,    0,    4,    4, 0x0a,
      39,    0,    4,    4, 0x0a,
      57,    0,    4,    4, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_str[] = {
    "str\0\0Simple(QString)\0Inversia(QString)\0"
    "Register(QString)\0UpperInverse(QString)\0"
};

void str::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        str *_t = static_cast<str *>(_o);
        switch (_id) {
        case 0: _t->Simple((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->Inversia((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->Register((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->UpperInverse((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData str::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject str::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_str,
      qt_meta_data_str, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &str::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *str::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *str::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_str))
        return static_cast<void*>(const_cast< str*>(this));
    return QObject::qt_metacast(_clname);
}

int str::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
