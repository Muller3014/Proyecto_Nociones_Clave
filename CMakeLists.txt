cmake_minimum_required(VERSION 3.20)
project(Proyecto_Nociones_Clave)

set(CMAKE_CXX_STANDARD 20)

# Agregar ejecutable para Proyecto1
add_executable(Proyecto1
        Proyecto1/main.cpp
        Proyecto1/Estudiante.cpp
        Proyecto1/Persona.cpp
        Proyecto1/Estudiante.h
        Proyecto1/Persona.h
)

# Agregar ejecutable para Proyecto2
add_executable(Proyecto2
        Proyecto2/main2.cpp
        Proyecto2/main2.h
        Proyecto2/matematicas.cpp  # Asegúrate de que esta ruta sea correcta
        Proyecto2/matematicas.h
)

# Incluir y configurar la biblioteca fmt
include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)

# Crear una biblioteca estática para matemáticas
add_library(matematicas STATIC Proyecto2/matematicas.cpp)  # Actualiza la ruta si es necesario

# Vincular fmt y matemáticas a Proyecto2
target_link_libraries(Proyecto2 PRIVATE fmt::fmt matematicas)
