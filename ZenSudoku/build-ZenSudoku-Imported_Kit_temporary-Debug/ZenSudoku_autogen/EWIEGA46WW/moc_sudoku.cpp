/****************************************************************************
** Meta object code from reading C++ file 'sudoku.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ZenSudoku/sudoku.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sudoku.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSudokuENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSudokuENDCLASS = QtMocHelpers::stringData(
    "Sudoku",
    "sendNewBoard",
    "",
    "int[9][9]",
    "newBoard",
    "sendSolution",
    "board",
    "sendDataCheck",
    "answer",
    "a",
    "b",
    "oldData",
    "sendWin",
    "sendLoadedGame",
    "loadBoard",
    "getLoadedBoard",
    "createNewGame",
    "solveSlot",
    "getNewData",
    "itemData",
    "saveGame",
    "userInput"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSudokuENDCLASS_t {
    uint offsetsAndSizes[44];
    char stringdata0[7];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[9];
    char stringdata5[13];
    char stringdata6[6];
    char stringdata7[14];
    char stringdata8[7];
    char stringdata9[2];
    char stringdata10[2];
    char stringdata11[8];
    char stringdata12[8];
    char stringdata13[15];
    char stringdata14[10];
    char stringdata15[15];
    char stringdata16[14];
    char stringdata17[10];
    char stringdata18[11];
    char stringdata19[9];
    char stringdata20[9];
    char stringdata21[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSudokuENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSudokuENDCLASS_t qt_meta_stringdata_CLASSSudokuENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Sudoku"
        QT_MOC_LITERAL(7, 12),  // "sendNewBoard"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 9),  // "int[9][9]"
        QT_MOC_LITERAL(31, 8),  // "newBoard"
        QT_MOC_LITERAL(40, 12),  // "sendSolution"
        QT_MOC_LITERAL(53, 5),  // "board"
        QT_MOC_LITERAL(59, 13),  // "sendDataCheck"
        QT_MOC_LITERAL(73, 6),  // "answer"
        QT_MOC_LITERAL(80, 1),  // "a"
        QT_MOC_LITERAL(82, 1),  // "b"
        QT_MOC_LITERAL(84, 7),  // "oldData"
        QT_MOC_LITERAL(92, 7),  // "sendWin"
        QT_MOC_LITERAL(100, 14),  // "sendLoadedGame"
        QT_MOC_LITERAL(115, 9),  // "loadBoard"
        QT_MOC_LITERAL(125, 14),  // "getLoadedBoard"
        QT_MOC_LITERAL(140, 13),  // "createNewGame"
        QT_MOC_LITERAL(154, 9),  // "solveSlot"
        QT_MOC_LITERAL(164, 10),  // "getNewData"
        QT_MOC_LITERAL(175, 8),  // "itemData"
        QT_MOC_LITERAL(184, 8),  // "saveGame"
        QT_MOC_LITERAL(193, 9)   // "userInput"
    },
    "Sudoku",
    "sendNewBoard",
    "",
    "int[9][9]",
    "newBoard",
    "sendSolution",
    "board",
    "sendDataCheck",
    "answer",
    "a",
    "b",
    "oldData",
    "sendWin",
    "sendLoadedGame",
    "loadBoard",
    "getLoadedBoard",
    "createNewGame",
    "solveSlot",
    "getNewData",
    "itemData",
    "saveGame",
    "userInput"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSudokuENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    1 /* Public */,
       5,    1,   77,    2, 0x06,    3 /* Public */,
       7,    4,   80,    2, 0x06,    5 /* Public */,
      12,    0,   89,    2, 0x06,   10 /* Public */,
      13,    1,   90,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    1,   93,    2, 0x0a,   13 /* Public */,
      16,    0,   96,    2, 0x0a,   15 /* Public */,
      17,    0,   97,    2, 0x0a,   16 /* Public */,
      18,    3,   98,    2, 0x0a,   17 /* Public */,
      20,    1,  105,    2, 0x0a,   21 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    9,   10,   19,
    QMetaType::Void, QMetaType::QString,   21,

       0        // eod
};

Q_CONSTINIT const QMetaObject Sudoku::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSSudokuENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSudokuENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSudokuENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Sudoku, std::true_type>,
        // method 'sendNewBoard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sendSolution'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sendDataCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sendWin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendLoadedGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getLoadedBoard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'createNewGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'solveSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getNewData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'saveGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void Sudoku::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Sudoku *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendNewBoard((*reinterpret_cast< std::add_pointer_t<int[9][9]>>(_a[1]))); break;
        case 1: _t->sendSolution((*reinterpret_cast< std::add_pointer_t<int[9][9]>>(_a[1]))); break;
        case 2: _t->sendDataCheck((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 3: _t->sendWin(); break;
        case 4: _t->sendLoadedGame((*reinterpret_cast< std::add_pointer_t<int[9][9]>>(_a[1]))); break;
        case 5: _t->getLoadedBoard((*reinterpret_cast< std::add_pointer_t<int[9][9]>>(_a[1]))); break;
        case 6: _t->createNewGame(); break;
        case 7: _t->solveSlot(); break;
        case 8: _t->getNewData((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 9: _t->saveGame((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Sudoku::*)(int [9][9]);
            if (_t _q_method = &Sudoku::sendNewBoard; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Sudoku::*)(int [9][9]);
            if (_t _q_method = &Sudoku::sendSolution; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Sudoku::*)(bool , int , int , int );
            if (_t _q_method = &Sudoku::sendDataCheck; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Sudoku::*)();
            if (_t _q_method = &Sudoku::sendWin; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Sudoku::*)(int [9][9]);
            if (_t _q_method = &Sudoku::sendLoadedGame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *Sudoku::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sudoku::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSudokuENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Sudoku::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Sudoku::sendNewBoard(int _t1[9][9])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Sudoku::sendSolution(int _t1[9][9])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Sudoku::sendDataCheck(bool _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Sudoku::sendWin()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Sudoku::sendLoadedGame(int _t1[9][9])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
