cmake_minimum_required(VERSION 3.12)
project(Datos2practicas)

set(CMAKE_CXX_STANDARD 14)

add_executable(Datos2practicas main.cpp busquedasecuencial/Busqueda_Secuencial.h busqueda_binaria/Busqueda_Binaria.h busqueda_binaria/Busqueda_Binaria.cpp)