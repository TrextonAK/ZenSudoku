# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Qt\Tools\CMake_64\bin\cmake.exe

# The command to remove a file.
RM = C:\Qt\Tools\CMake_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\andre\Documents\ZenSudoku\ZenSudoku

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\andre\Documents\ZenSudoku\build-ZenSudoku-Imported_Kit_temporary-Debug

# Include any dependencies generated for this target.
include CMakeFiles/ZenSudoku.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ZenSudoku.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ZenSudoku.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ZenSudoku.dir/flags.make

CMakeFiles/ZenSudoku.dir/ZenSudoku_autogen/mocs_compilation.cpp.obj: CMakeFiles/ZenSudoku.dir/flags.make
CMakeFiles/ZenSudoku.dir/ZenSudoku_autogen/mocs_compilation.cpp.obj: CMakeFiles/ZenSudoku.dir/includes_CXX.rsp
CMakeFiles/ZenSudoku.dir/ZenSudoku_autogen/mocs_compilation.cpp.obj: ZenSudoku_autogen/mocs_compilation.cpp
CMakeFiles/ZenSudoku.dir/ZenSudoku_autogen/mocs_compilation.cpp.obj: CMakeFiles/ZenSudoku.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\andre\Documents\ZenSudoku\build-ZenSudoku-Imported_Kit_temporary-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ZenSudoku.dir/ZenSudoku_autogen/mocs_compilation.cpp.obj"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ZenSudoku.dir/ZenSudoku_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\ZenSudoku.dir\ZenSudoku_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\ZenSudoku.dir\ZenSudoku_autogen\mocs_compilation.cpp.obj -c C:\Users\andre\Documents\ZenSudoku\build-ZenSudoku-Imported_Kit_temporary-Debug\ZenSudoku_autogen\mocs_compilation.cpp

CMakeFiles/ZenSudoku.dir/ZenSudoku_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZenSudoku.dir/ZenSudoku_autogen/mocs_compilation.cpp.i"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\andre\Documents\ZenSudoku\build-ZenSudoku-Imported_Kit_temporary-Debug\ZenSudoku_autogen\mocs_compilation.cpp > CMakeFiles\ZenSudoku.dir\ZenSudoku_autogen\mocs_compilation.cpp.i

CMakeFiles/ZenSudoku.dir/ZenSudoku_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZenSudoku.dir/ZenSudoku_autogen/mocs_compilation.cpp.s"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\andre\Documents\ZenSudoku\build-ZenSudoku-Imported_Kit_temporary-Debug\ZenSudoku_autogen\mocs_compilation.cpp -o CMakeFiles\ZenSudoku.dir\ZenSudoku_autogen\mocs_compilation.cpp.s

CMakeFiles/ZenSudoku.dir/main.cpp.obj: CMakeFiles/ZenSudoku.dir/flags.make
CMakeFiles/ZenSudoku.dir/main.cpp.obj: CMakeFiles/ZenSudoku.dir/includes_CXX.rsp
CMakeFiles/ZenSudoku.dir/main.cpp.obj: C:/Users/andre/Documents/ZenSudoku/ZenSudoku/main.cpp
CMakeFiles/ZenSudoku.dir/main.cpp.obj: CMakeFiles/ZenSudoku.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\andre\Documents\ZenSudoku\build-ZenSudoku-Imported_Kit_temporary-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ZenSudoku.dir/main.cpp.obj"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ZenSudoku.dir/main.cpp.obj -MF CMakeFiles\ZenSudoku.dir\main.cpp.obj.d -o CMakeFiles\ZenSudoku.dir\main.cpp.obj -c C:\Users\andre\Documents\ZenSudoku\ZenSudoku\main.cpp

CMakeFiles/ZenSudoku.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZenSudoku.dir/main.cpp.i"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\andre\Documents\ZenSudoku\ZenSudoku\main.cpp > CMakeFiles\ZenSudoku.dir\main.cpp.i

CMakeFiles/ZenSudoku.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZenSudoku.dir/main.cpp.s"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\andre\Documents\ZenSudoku\ZenSudoku\main.cpp -o CMakeFiles\ZenSudoku.dir\main.cpp.s

CMakeFiles/ZenSudoku.dir/mainwindow.cpp.obj: CMakeFiles/ZenSudoku.dir/flags.make
CMakeFiles/ZenSudoku.dir/mainwindow.cpp.obj: CMakeFiles/ZenSudoku.dir/includes_CXX.rsp
CMakeFiles/ZenSudoku.dir/mainwindow.cpp.obj: C:/Users/andre/Documents/ZenSudoku/ZenSudoku/mainwindow.cpp
CMakeFiles/ZenSudoku.dir/mainwindow.cpp.obj: CMakeFiles/ZenSudoku.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\andre\Documents\ZenSudoku\build-ZenSudoku-Imported_Kit_temporary-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ZenSudoku.dir/mainwindow.cpp.obj"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ZenSudoku.dir/mainwindow.cpp.obj -MF CMakeFiles\ZenSudoku.dir\mainwindow.cpp.obj.d -o CMakeFiles\ZenSudoku.dir\mainwindow.cpp.obj -c C:\Users\andre\Documents\ZenSudoku\ZenSudoku\mainwindow.cpp

CMakeFiles/ZenSudoku.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZenSudoku.dir/mainwindow.cpp.i"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\andre\Documents\ZenSudoku\ZenSudoku\mainwindow.cpp > CMakeFiles\ZenSudoku.dir\mainwindow.cpp.i

CMakeFiles/ZenSudoku.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZenSudoku.dir/mainwindow.cpp.s"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\andre\Documents\ZenSudoku\ZenSudoku\mainwindow.cpp -o CMakeFiles\ZenSudoku.dir\mainwindow.cpp.s

CMakeFiles/ZenSudoku.dir/sudoku.cpp.obj: CMakeFiles/ZenSudoku.dir/flags.make
CMakeFiles/ZenSudoku.dir/sudoku.cpp.obj: CMakeFiles/ZenSudoku.dir/includes_CXX.rsp
CMakeFiles/ZenSudoku.dir/sudoku.cpp.obj: C:/Users/andre/Documents/ZenSudoku/ZenSudoku/sudoku.cpp
CMakeFiles/ZenSudoku.dir/sudoku.cpp.obj: CMakeFiles/ZenSudoku.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\andre\Documents\ZenSudoku\build-ZenSudoku-Imported_Kit_temporary-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ZenSudoku.dir/sudoku.cpp.obj"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ZenSudoku.dir/sudoku.cpp.obj -MF CMakeFiles\ZenSudoku.dir\sudoku.cpp.obj.d -o CMakeFiles\ZenSudoku.dir\sudoku.cpp.obj -c C:\Users\andre\Documents\ZenSudoku\ZenSudoku\sudoku.cpp

CMakeFiles/ZenSudoku.dir/sudoku.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZenSudoku.dir/sudoku.cpp.i"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\andre\Documents\ZenSudoku\ZenSudoku\sudoku.cpp > CMakeFiles\ZenSudoku.dir\sudoku.cpp.i

CMakeFiles/ZenSudoku.dir/sudoku.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZenSudoku.dir/sudoku.cpp.s"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\andre\Documents\ZenSudoku\ZenSudoku\sudoku.cpp -o CMakeFiles\ZenSudoku.dir\sudoku.cpp.s

# Object files for target ZenSudoku
ZenSudoku_OBJECTS = \
"CMakeFiles/ZenSudoku.dir/ZenSudoku_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/ZenSudoku.dir/main.cpp.obj" \
"CMakeFiles/ZenSudoku.dir/mainwindow.cpp.obj" \
"CMakeFiles/ZenSudoku.dir/sudoku.cpp.obj"

# External object files for target ZenSudoku
ZenSudoku_EXTERNAL_OBJECTS =

ZenSudoku.exe: CMakeFiles/ZenSudoku.dir/ZenSudoku_autogen/mocs_compilation.cpp.obj
ZenSudoku.exe: CMakeFiles/ZenSudoku.dir/main.cpp.obj
ZenSudoku.exe: CMakeFiles/ZenSudoku.dir/mainwindow.cpp.obj
ZenSudoku.exe: CMakeFiles/ZenSudoku.dir/sudoku.cpp.obj
ZenSudoku.exe: CMakeFiles/ZenSudoku.dir/build.make
ZenSudoku.exe: C:/Qt/6.5.2/mingw_64/lib/libQt6Widgets.a
ZenSudoku.exe: C:/Qt/6.5.2/mingw_64/lib/libQt6SpatialAudio.a
ZenSudoku.exe: C:/Qt/6.5.2/mingw_64/lib/libQt6Multimedia.a
ZenSudoku.exe: C:/Qt/6.5.2/mingw_64/lib/libQt6Gui.a
ZenSudoku.exe: C:/Qt/6.5.2/mingw_64/lib/libQt6Network.a
ZenSudoku.exe: C:/Qt/6.5.2/mingw_64/lib/libQt6Core.a
ZenSudoku.exe: C:/Qt/6.5.2/mingw_64/lib/libQt6EntryPoint.a
ZenSudoku.exe: CMakeFiles/ZenSudoku.dir/linklibs.rsp
ZenSudoku.exe: CMakeFiles/ZenSudoku.dir/objects1.rsp
ZenSudoku.exe: CMakeFiles/ZenSudoku.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\andre\Documents\ZenSudoku\build-ZenSudoku-Imported_Kit_temporary-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ZenSudoku.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ZenSudoku.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ZenSudoku.dir/build: ZenSudoku.exe
.PHONY : CMakeFiles/ZenSudoku.dir/build

CMakeFiles/ZenSudoku.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ZenSudoku.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ZenSudoku.dir/clean

CMakeFiles/ZenSudoku.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\andre\Documents\ZenSudoku\ZenSudoku C:\Users\andre\Documents\ZenSudoku\ZenSudoku C:\Users\andre\Documents\ZenSudoku\build-ZenSudoku-Imported_Kit_temporary-Debug C:\Users\andre\Documents\ZenSudoku\build-ZenSudoku-Imported_Kit_temporary-Debug C:\Users\andre\Documents\ZenSudoku\build-ZenSudoku-Imported_Kit_temporary-Debug\CMakeFiles\ZenSudoku.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ZenSudoku.dir/depend

