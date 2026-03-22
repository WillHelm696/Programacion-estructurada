cmake_minimum_required(VERSION 4.1)
project(Programacion_Estructurada)

set(CMAKE_CXX_STANDARD 20)

# Agrega cada subdirectorio como un subproyecto
add_executable(Arreglos TD_2.cpp)
add_executable(Burbuja TD_4.cpp)
add_executable(Quicksort Quicksort.cpp)
