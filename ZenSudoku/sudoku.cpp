#include "sudoku.h"
#include <QWidget>
#include <ui_mainwindow.h>
#include <QMainWindow>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <QFile>
#include <Qdir.h>

/**
 * @brief Sudoku::Sudoku
 * @param parent
 * this is required to give functionality to inherit
 * data from QObjects
 */
Sudoku::Sudoku(QObject *parent) : QObject (parent){}

Sudoku::~Sudoku(){}
/**
 * @brief Sudoku::checkValidRows
 * @param board
 * @param row
 * @return
 * Bool Checks the valid rows of the board via sets(Unique #'s)
 */
bool Sudoku::checkValidRows(int board[][9], int row){

    std::set<char> st;

    for (int i = 0; i < 9; i++) {
        if (st.find(board[row][i]) != st.end())
        return false;

        if (board[row][i] != 0)
        st.insert(board[row][i]);
    }
    return true;
}
/**
 * @brief Sudoku::checkValidColumns
 * @param board
 * @param column
 * @return
 * Bool Checks the valid columns of the board state
 */
bool Sudoku::checkValidColumns(int board[][9], int column)
{
    std::set<char> st;
        for (int i = 0; i < 9; i++) {
        if (st.find(board[i][column]) != st.end())
            return false;

        if (board[i][column] != 0)
            st.insert(board[i][column]);
        }
        return true;

}
/**
 * @brief Sudoku::checkValidBoxes
 * @param board
 * @param sRow
 * @param sColumn
 * @return
 * Bool checks the boxes of the board state for validity.
 */
bool Sudoku::checkValidBoxes(int board[][9], int sRow, int sColumn)
{
        std::set<char> st;

        for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            char curr = board[row + sRow][col + sColumn];
            if (st.find(curr) != st.end())
                return false;

            if (curr != 0)
                st.insert(curr);
        }
        }
        return true;
}
/**
 * @brief Sudoku::checkValidity
 * @param board
 * @param row
 * @param column
 * @return
 * Bool checks to see if all three board states are valid.
 */
bool Sudoku::checkValidity(int board[][9], int row, int column)
{
        return checkValidRows(board, row) && checkValidColumns(board, column) && checkValidBoxes(board, row - row % 3, column - column % 3);
}
/**
 * @brief Sudoku::isValid
 * @param board
 * @param n
 * @return
 * Checks if all the functions for validity is true/false
 */
bool Sudoku::isValid(int board[][9], int n)
{
        {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (!checkValidity(board, i, j))
                    return false;
            }
        }
        return true;
        }
}
/**
 * @brief Sudoku::newGameBoard
 * Sends new game board to the Main Window Class.
 * creates randomized table based on iterations of #count
 * recreates the board if no solutions can be found with the generated
 * numbrs.  0's are place holders for null ptr* in widget table
 */
void Sudoku::newGameBoard( ){
        //fill board with 0s for widget table
        for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){

            sudokuBoard[i][j] = 0;
        }
        }
        //Difficulty estimate/generation
        for (int count = 0; count < 23; count++){
        int randRow = rand()%9;
        int randColumn = rand()%9;
        int randomNumber = 1+rand()%9;
        sudokuBoard[randRow][randColumn] = randomNumber;
        //test board to see if solution is viable
        testBoard[randRow][randColumn] = randomNumber;


        //sends new board if valid
        if(!isValid(sudokuBoard,9)){
               sudokuBoard[randRow][randColumn] = 0;
            testBoard[randRow][randColumn] =0;


        }

        }
        //reset if statement is false
        if(solveSudoku(testBoard) == false){
               newGameBoard();
        }
}
/**
 * @brief Sudoku::writeToWidgetItem
 * @param cell
 * @return
 * potentially erronius unless used for item data retreival
 */
QTableWidgetItem Sudoku::writeToWidgetItem(int cell){
        QTableWidgetItem *data = new QTableWidgetItem;
        data->setTextAlignment(Qt::AlignCenter);
        data->setData(2, cell);
        return *data;

}
/**
 * @brief Sudoku::getLoadedBoard
 * @param board
 * Receive loaded board from the Loaded file via index in UI MainWindow
 * Copy to sudokuboard and send back to widget item.
 */
void Sudoku::getLoadedBoard(int board[9][9])
{
        for (int i = 0; i < 9; i++){
               for (int j = 0; j < 9; j++){
            sudokuBoard[i][j] = board[i][j];
               }
        }

        emit sendNewBoard(sudokuBoard);
}
/**
 * @brief Sudoku::createNewGame
 * Generate a new board then send to table widget
 */
void Sudoku::createNewGame(){

        newGameBoard();

        emit sendNewBoard(sudokuBoard);
}
/**
 * @brief Sudoku::solveSlot
 * generate solution to puzzle and send solution to table widget
 */
void Sudoku::solveSlot()
{
        if(solveSudoku(sudokuBoard) == true){
        emit sendSolution(sudokuBoard);
        }
}
/**
 * @brief Sudoku::getNewData
 * @param a
 * @param b
 * @param itemData
 * Checks the validity of a user entered data piece. Also checks for victory condition.
 * sends win If true
 */
void Sudoku::getNewData(int a, int b, int itemData)
{

        sudokuBoard[a][b] = itemData;
        bool answer = isValid(sudokuBoard,9);
        emit sendDataCheck(answer, a, b, itemData);

        //sends win if detected victory
        if(isWin(sudokuBoard) == true){
        emit sendWin();
        }
}
/**
 * @brief Sudoku::saveGame
 * @param userInput
 *Saves the game via .txt file in the SaveGame directory located
 *in the build module.
 */
void Sudoku::saveGame(QString userInput)
{
        QString directoryName = "SaveGame";
        QString fileName = userInput;
        QString filePath = directoryName + '/' + fileName;
        QFile file(filePath);
        //write file to stream
        if(file.open(QIODevice::ReadWrite)){
        QTextStream stream(&file);
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                stream << sudokuBoard[i][j];
            }
        }
        file.close();
        }
}


/**
 * @brief Sudoku::isWin
 * @param board
 * @return
 * Checks if the victory conditions have been met through
 * 1. Validation of board
 * 2. All 81 Cells are filled
 */
bool Sudoku::isWin(int board[9][9])
{
        int count = 0;

        for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
               int element = board[i][j];
               if (element != 0){
                count++;
               }
        }
       }
        if(count == 81){
        return true;
       }
        else{
        return false;
       }

}

/**
 * @brief Sudoku::solveSudoku
 * @param grid
 * @return
 * Sudoku solver that uses recursion to solve the given puzzle
 * used prior in new game validation to determine possible solutions
 */
bool Sudoku::solveSudoku(int grid[9][9])
{
        int row, col;
        //recursive stop if no locations found
        if (!FindUnassignedLocation(grid, row, col))

        return true;

        for (int num = 1; num <= 9; num++)
        {
        if (isSafe(grid, row, col, num))
        {
               grid[row][col] = num;
               if (solveSudoku(grid))
                return true;
               grid[row][col] = 0;
        }
        }
        //begins recursion
        return false;
}

/* Searches the grid to find an entry that is
still unassigned. If found, the reference
parameters row, col will be set the location
that is unassigned, and true is returned.
If no unassigned entries remain, false is returned. */

bool Sudoku::FindUnassignedLocation(int grid[9][9],
                            int& row, int& col)
{
        for (row = 0; row < 9; row++)
        for (col = 0; col < 9; col++)
               if (grid[row][col] == 0)
                return true;
        return false;
}

/* Returns a boolean which indicates whether
an assigned entry in the specified row matches
the given number. */
bool Sudoku::UsedInRow(int grid[9][9], int row, int num)
{
        for (int col = 0; col < 9; col++)
        if (grid[row][col] == num)
               return true;
        return false;
}

/* Returns a boolean which indicates whether
an assigned entry in the specified column
matches the given number. */
bool Sudoku::UsedInCol(int grid[9][9], int col, int num)
{
        for (int row = 0; row < 9; row++)
        if (grid[row][col] == num)
               return true;
        return false;
}

/* Returns a boolean which indicates whether
an assigned entry within the specified 3x3 box
matches the given number. */
bool Sudoku::UsedInBox(int grid[9][9], int boxStartRow,
               int boxStartCol, int num)
{
        for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
               if (grid[row + boxStartRow]
                       [col + boxStartCol] ==
                   num)
                return true;
        return false;
}



/* Returns a boolean which indicates whether
it will be legal to assign num to the given
row, col location. */
bool Sudoku::isSafe(int grid[9][9], int row,
            int col, int num)
{
        /* Check if 'num' is not already placed in
    current row, current column
    and current 3x3 box */
        return !UsedInRow(grid, row, num)
               && !UsedInCol(grid, col, num)
               && !UsedInBox(grid, row - row % 3,
                             col - col % 3, num)
               && grid[row][col] == 0;
}

