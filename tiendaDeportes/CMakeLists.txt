cmake_minimum_required(VERSION 3.30)
project(tiendaDeportes)

set(CMAKE_CXX_STANDARD 20)

add_executable(tiendaDeportes main.cpp
        src/Producto.cpp
        src/Producto.h
        src/Cliente.cpp
        src/Cliente.h)
