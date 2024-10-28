cmake_minimum_required(VERSION 3.29)
project(Proyecto_Nociones_Clave)

set(CMAKE_CXX_STANDARD 20)

add_executable(Proyecto_Nociones_Clave Proyecto1/main.cpp
        Proyecto1/Estudiante.cpp
        Proyecto1/Estudiante.h
        Proyecto1/Persona.cpp
        Proyecto1/Persona.h)
