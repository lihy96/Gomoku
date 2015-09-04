/****************************************************************************
** Meta object code from reading C++ file 'gameserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GameServer/gameserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameServer_t {
    QByteArrayData data[25];
    char stringdata0[466];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameServer_t qt_meta_stringdata_GameServer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GameServer"
QT_MOC_LITERAL(1, 11, 6), // "winned"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "canStart"
QT_MOC_LITERAL(4, 28, 10), // "slotWinned"
QT_MOC_LITERAL(5, 39, 20), // "slotClientConnnected"
QT_MOC_LITERAL(6, 60, 22), // "slotClientDisconnected"
QT_MOC_LITERAL(7, 83, 14), // "toUpdateClient"
QT_MOC_LITERAL(8, 98, 18), // "clientSendToServer"
QT_MOC_LITERAL(9, 117, 26), // "slotServerAcceptConnection"
QT_MOC_LITERAL(10, 144, 14), // "toUpdateServer"
QT_MOC_LITERAL(11, 159, 18), // "serverSentToClient"
QT_MOC_LITERAL(12, 178, 13), // "sendToAnother"
QT_MOC_LITERAL(13, 192, 4), // "info"
QT_MOC_LITERAL(14, 197, 26), // "on_pushButton_open_clicked"
QT_MOC_LITERAL(15, 224, 26), // "on_pushButton_save_clicked"
QT_MOC_LITERAL(16, 251, 28), // "on_pushButton_create_clicked"
QT_MOC_LITERAL(17, 280, 25), // "on_pushButton_add_clicked"
QT_MOC_LITERAL(18, 306, 27), // "on_pushButton_start_clicked"
QT_MOC_LITERAL(19, 334, 28), // "on_pushButton_renshu_clicked"
QT_MOC_LITERAL(20, 363, 25), // "on_pushButton_cry_clicked"
QT_MOC_LITERAL(21, 389, 31), // "on_pushButton_closeroom_clicked"
QT_MOC_LITERAL(22, 421, 16), // "slotTimeSmallout"
QT_MOC_LITERAL(23, 438, 14), // "slotTimeBigout"
QT_MOC_LITERAL(24, 453, 12) // "slotCanStart"

    },
    "GameServer\0winned\0\0canStart\0slotWinned\0"
    "slotClientConnnected\0slotClientDisconnected\0"
    "toUpdateClient\0clientSendToServer\0"
    "slotServerAcceptConnection\0toUpdateServer\0"
    "serverSentToClient\0sendToAnother\0info\0"
    "on_pushButton_open_clicked\0"
    "on_pushButton_save_clicked\0"
    "on_pushButton_create_clicked\0"
    "on_pushButton_add_clicked\0"
    "on_pushButton_start_clicked\0"
    "on_pushButton_renshu_clicked\0"
    "on_pushButton_cry_clicked\0"
    "on_pushButton_closeroom_clicked\0"
    "slotTimeSmallout\0slotTimeBigout\0"
    "slotCanStart"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06 /* Public */,
       3,    0,  127,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  128,    2, 0x0a /* Public */,
       5,    0,  131,    2, 0x0a /* Public */,
       6,    0,  132,    2, 0x0a /* Public */,
       7,    0,  133,    2, 0x0a /* Public */,
       8,    1,  134,    2, 0x0a /* Public */,
       9,    0,  137,    2, 0x0a /* Public */,
      10,    0,  138,    2, 0x0a /* Public */,
      11,    1,  139,    2, 0x0a /* Public */,
      12,    1,  142,    2, 0x0a /* Public */,
      14,    0,  145,    2, 0x08 /* Private */,
      15,    0,  146,    2, 0x08 /* Private */,
      16,    0,  147,    2, 0x08 /* Private */,
      17,    0,  148,    2, 0x08 /* Private */,
      18,    0,  149,    2, 0x08 /* Private */,
      19,    0,  150,    2, 0x08 /* Private */,
      20,    0,  151,    2, 0x08 /* Private */,
      21,    0,  152,    2, 0x08 /* Private */,
      22,    0,  153,    2, 0x0a /* Public */,
      23,    0,  154,    2, 0x0a /* Public */,
      24,    0,  155,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GameServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameServer *_t = static_cast<GameServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->winned((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->canStart(); break;
        case 2: _t->slotWinned((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotClientConnnected(); break;
        case 4: _t->slotClientDisconnected(); break;
        case 5: _t->toUpdateClient(); break;
        case 6: _t->clientSendToServer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->slotServerAcceptConnection(); break;
        case 8: _t->toUpdateServer(); break;
        case 9: _t->serverSentToClient((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->sendToAnother((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->on_pushButton_open_clicked(); break;
        case 12: _t->on_pushButton_save_clicked(); break;
        case 13: _t->on_pushButton_create_clicked(); break;
        case 14: _t->on_pushButton_add_clicked(); break;
        case 15: _t->on_pushButton_start_clicked(); break;
        case 16: _t->on_pushButton_renshu_clicked(); break;
        case 17: _t->on_pushButton_cry_clicked(); break;
        case 18: _t->on_pushButton_closeroom_clicked(); break;
        case 19: _t->slotTimeSmallout(); break;
        case 20: _t->slotTimeBigout(); break;
        case 21: _t->slotCanStart(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GameServer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameServer::winned)) {
                *result = 0;
            }
        }
        {
            typedef void (GameServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameServer::canStart)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject GameServer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GameServer.data,
      qt_meta_data_GameServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GameServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GameServer.stringdata0))
        return static_cast<void*>(const_cast< GameServer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GameServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void GameServer::winned(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameServer::canStart()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
