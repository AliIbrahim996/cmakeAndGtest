cmake_minimum_required(VERSION 3.20)

project(MyTest)

add_subdirectory(Problem)
add_subdirectory(Sample-Test2)

add_executable(MyTest main.cpp)

target_link_libraries(MyTest solve-lib)