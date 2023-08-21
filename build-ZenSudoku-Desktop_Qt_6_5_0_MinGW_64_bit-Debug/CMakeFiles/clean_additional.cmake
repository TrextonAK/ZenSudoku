# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ZenSudoku_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ZenSudoku_autogen.dir\\ParseCache.txt"
  "ZenSudoku_autogen"
  )
endif()
