#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include "Persona.h"
using namespace std;

class Estudiante : public Persona {
    string grado;

public:
    void setGrado(const string &grado);
    string getGrado();
    void mostrarDetalles();
};

#endif