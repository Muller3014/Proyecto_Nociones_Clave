//
// Created by gonza on 15/10/2024.
//
#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona {
    string nombre;
    int edad;
    string genero;

public:
    void setNombre(const string &nombre);
    string getNombre();
    void setEdad(int edad);
    int getEdad();
    void setGenero(const string &genero);
    string getGenero();
};

#endif //PERSONA_H
