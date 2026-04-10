cmake_minimum_required(VERSION 4.1)
project(Programacion_Estructurada)

set(CMAKE_CXX_STANDARD 20)

# Agrega cada subdirectorio como un subproyecto
add_executable(Arreglos Vectores.cpp)
add_executable(Burbuja Burbuja.cpp)
add_executable(Quicksort Quicksort.cpp)
add_executable(fondos fondos.cpp)
add_executable(Graphics Graphics.cpp)
