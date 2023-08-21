#ifndef SUDOKU_H
#define SUDOKU_H
#include <QWidget>
#include <QObject>
#include <QTableWidgetItem>
#include <bits/stdc++.h>
class Sudoku : public QObject {
    Q_OBJECT

/* This is the main class for the game implementation occuring int he Main Window UI.  It validates and
 * sends data between the mainwindow table widget via Main Window.  Variables and functions changed/modified
 * in this class will impact the game state directly.
 */
public:
    explicit Sudoku(QObject *parent = nullptr);
    ~Sudoku();
    bool CheckWin();
    bool checkValidRows(int board[][9], int row);
    bool checkValidColumns(int board[][9], int column);
    bool checkValidBoxes(int baord[0][9],int sRow, int sColumn);
    bool checkValidity(int board[][9], int row, int column);
    bool isValid(int board [0][9], int n);
    bool solveSudoku(int grid[9][9]);
    bool findEmptyIndex(int board[9][9]);
    bool FindUnassignedLocation(int grid[9][9],int& row, int& col);
    bool isSafe(int grid[9][9], int row, int col, int num);
    bool UsedInRow(int grid[9][9], int row, int num);
    bool UsedInCol(int grid[9][9], int col, int num);
    bool UsedInBox(int grid[9][9], int boxStartRow, int boxStartCol,int num);
    bool isWin(int board[9][9]);

    void newGameBoard();
    void readCell();
    QTableWidgetItem writeToWidgetItem(int cell);
    int sudokuBoard[9][9];
    int testBoard[9][9];

signals:
    void sendNewBoard(int newBoard[9][9]);
    void sendSolution(int board[9][9]);
    void sendDataCheck(bool answer, int a, int b, int oldData);
    void sendWin();
    void sendLoadedGame(int loadBoard[9][9]);

public slots:
    void getLoadedBoard(int board[9][9]);
    void createNewGame();
    void solveSlot();
    void getNewData(int a, int b, int itemData);
    void saveGame(QString userInput);



private slots:
};

#endif // SUDOKU_H
