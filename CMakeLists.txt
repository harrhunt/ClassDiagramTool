cmake_minimum_required(VERSION 3.21)
project(ClassDiagramTool)

enable_testing()
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXE_LINKER_FLAGS "-static")

include_directories(src)

add_subdirectory(src)
add_subdirectory(lib/googletest)
add_subdirectory(tst)
