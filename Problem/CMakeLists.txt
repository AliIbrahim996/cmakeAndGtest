message("dir added")
add_library(solve-lib solve.cpp solve.h)
# make header files automatically available to any target that links to add-lib
target_include_directories(solve-lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})