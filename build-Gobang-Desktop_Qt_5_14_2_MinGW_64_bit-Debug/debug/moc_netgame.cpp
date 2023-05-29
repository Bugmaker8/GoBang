/****************************************************************************
** Meta object code from reading C++ file 'netgame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../GobangClient/netgame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'netgame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetGame_t {
    QByteArrayData data[16];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetGame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetGame_t qt_meta_stringdata_NetGame = {
    {
QT_MOC_LITERAL(0, 0, 7), // "NetGame"
QT_MOC_LITERAL(1, 8, 12), // "ReturnToMenu"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 10), // "GameIsOver"
QT_MOC_LITERAL(4, 33, 6), // "winner"
QT_MOC_LITERAL(5, 40, 8), // "GameOver"
QT_MOC_LITERAL(6, 49, 11), // "doConnected"
QT_MOC_LITERAL(7, 61, 14), // "doDisconnected"
QT_MOC_LITERAL(8, 76, 14), // "SetPieceOnHost"
QT_MOC_LITERAL(9, 91, 11), // "std::string"
QT_MOC_LITERAL(10, 103, 3), // "str"
QT_MOC_LITERAL(11, 107, 18), // "SendGameOverOnHost"
QT_MOC_LITERAL(12, 126, 14), // "OnUndoBtnClick"
QT_MOC_LITERAL(13, 141, 14), // "OnSentBtnClick"
QT_MOC_LITERAL(14, 156, 19), // "OnSurrenderBtnClick"
QT_MOC_LITERAL(15, 176, 13) // "OnTieBtnClick"

    },
    "NetGame\0ReturnToMenu\0\0GameIsOver\0"
    "winner\0GameOver\0doConnected\0doDisconnected\0"
    "SetPieceOnHost\0std::string\0str\0"
    "SendGameOverOnHost\0OnUndoBtnClick\0"
    "OnSentBtnClick\0OnSurrenderBtnClick\0"
    "OnTieBtnClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetGame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   73,    2, 0x0a /* Public */,
       6,    0,   76,    2, 0x0a /* Public */,
       7,    0,   77,    2, 0x0a /* Public */,
       8,    1,   78,    2, 0x0a /* Public */,
      11,    1,   81,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,
      14,    0,   86,    2, 0x0a /* Public */,
      15,    0,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NetGame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetGame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReturnToMenu(); break;
        case 1: _t->GameIsOver((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->GameOver((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->doConnected(); break;
        case 4: _t->doDisconnected(); break;
        case 5: _t->SetPieceOnHost((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 6: _t->SendGameOverOnHost((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->OnUndoBtnClick(); break;
        case 8: _t->OnSentBtnClick(); break;
        case 9: _t->OnSurrenderBtnClick(); break;
        case 10: _t->OnTieBtnClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NetGame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetGame::ReturnToMenu)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NetGame::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetGame::GameIsOver)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetGame::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_NetGame.data,
    qt_meta_data_NetGame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetGame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetGame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetGame.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NetGame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void NetGame::ReturnToMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NetGame::GameIsOver(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
