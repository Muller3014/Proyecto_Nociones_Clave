#include "Persona.h"
using namespace std;

void Persona::setNombre(const string &nombre) {
    this->nombre = nombre;
}

string Persona::getNombre() {
    return nombre;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setGenero(const string &genero) {
    this->genero = genero;
}

string Persona::getGenero() {
    return genero;
}