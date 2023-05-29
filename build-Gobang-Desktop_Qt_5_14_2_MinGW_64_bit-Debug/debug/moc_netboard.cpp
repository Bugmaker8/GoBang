/****************************************************************************
** Meta object code from reading C++ file 'netboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../GobangClient/netboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'netboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetBoard_t {
    QByteArrayData data[14];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetBoard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetBoard_t qt_meta_stringdata_NetBoard = {
    {
QT_MOC_LITERAL(0, 0, 8), // "NetBoard"
QT_MOC_LITERAL(1, 9, 8), // "GameOver"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 6), // "winner"
QT_MOC_LITERAL(4, 26, 14), // "SetPieceToHost"
QT_MOC_LITERAL(5, 41, 11), // "std::string"
QT_MOC_LITERAL(6, 53, 3), // "str"
QT_MOC_LITERAL(7, 57, 18), // "SendGameOverToHost"
QT_MOC_LITERAL(8, 76, 12), // "StartNewGame"
QT_MOC_LITERAL(9, 89, 8), // "SetPiece"
QT_MOC_LITERAL(10, 98, 1), // "x"
QT_MOC_LITERAL(11, 100, 1), // "y"
QT_MOC_LITERAL(12, 102, 4), // "Undo"
QT_MOC_LITERAL(13, 107, 5) // "steps"

    },
    "NetBoard\0GameOver\0\0winner\0SetPieceToHost\0"
    "std::string\0str\0SendGameOverToHost\0"
    "StartNewGame\0SetPiece\0x\0y\0Undo\0steps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetBoard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   53,    2, 0x0a /* Public */,
       9,    2,   54,    2, 0x0a /* Public */,
      12,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void NetBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetBoard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GameOver((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SetPieceToHost((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 2: _t->SendGameOverToHost((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->StartNewGame(); break;
        case 4: _t->SetPiece((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->Undo((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NetBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetBoard::GameOver)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NetBoard::*)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetBoard::SetPieceToHost)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NetBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetBoard::SendGameOverToHost)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetBoard::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_NetBoard.data,
    qt_meta_data_NetBoard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetBoard.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NetBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void NetBoard::GameOver(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NetBoard::SetPieceToHost(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NetBoard::SendGameOverToHost(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
