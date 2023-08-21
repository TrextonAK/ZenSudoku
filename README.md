# ZenSudoku
A toy application of Sudoku using QT 6.5 as a GUI interface.  It creates random puzzles, saves, loads, and solves Sudoku games.  Designed for desktop deployment

Easiest way to load/use program:
1. Download QT creator Enterprise (Students can get free 1 year)
2. Clone repository
3. Set kits and build CMake project text file
4. Build Project.

Executable will follow soon...

Known Errors:

New Game Lockup - Clicking multiple times on new game upon startup will cause a soft lock due to interrupting current thread process.
Load/Solve Issue - Loaded games may sometimes not be able to be solved using the recursive solver.
                 - Loaded games may be possible to change the state of original placeholding numbers.


