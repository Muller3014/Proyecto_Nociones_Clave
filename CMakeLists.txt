cmake_minimum_required(VERSION 3.20)
project(Proyecto_Nociones_Clave)

set(CMAKE_CXX_STANDARD 20)

# Agregar ejecutable para Proyecto1
add_executable(Proyecto1
        Proyecto1/main.cpp
        Proyecto1/Estudiante.cpp
        Proyecto1/Persona.cpp
        Proyecto1/Estudiante.h        # Archivos .h añadidos para claridad
        Proyecto1/Persona.h
)

# Agregar ejecutable para Proyecto2, con sus propios archivos y encabezados
add_executable(Proyecto2
        Proyecto2/main2.cpp
        Proyecto2/main2.h
        Proyecto2/matematicas.cpp
        Proyecto2/matematicas.h        # Archivo .h añadido para claridad
)

