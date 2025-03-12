cmake_minimum_required(VERSION 3.30)
project(galeriaEjercicio)

set(CMAKE_CXX_STANDARD 20)

add_executable(galeriaEjercicio main.cpp
        src/Artista.cpp
        src/Artista.h
        src/Galeria.cpp
        src/Galeria.h
        src/Obra.cpp
        src/Obra.h)
