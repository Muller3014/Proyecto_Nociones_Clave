#include <iostream>
#include "Estudiante.h"
#include "Persona.h"
using namespace std;

#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))

int suma(int a, int b) {
    return a + b;
}
int varGlobal = 27;

int main()
{

    cout << "Hola mundo!" << endl;

    cout <<"Pi es igual a: "<< PI << endl;

    cout << "La suma es: " << suma(2, 3) << endl;
    cout << "El valor de la variable global es: " << varGlobal << endl;
    cout << "El valor del area del circulo utilizando la variable global como radio es: " << AREA_CIRCULO(varGlobal) << endl;
    cout << "La variable global + 3: " << suma(varGlobal, 3) << "\n" <<endl;


    Persona persona1;

    persona1.setNombre("John");
    persona1.setEdad(20);
    persona1.setGenero("Masculino");

    cout << "Nombre: " << persona1.getNombre() << endl;
    cout << "Edad: " << persona1.getEdad() << endl;
    cout << "Genero: " << persona1.getGenero() << endl << endl;


    Estudiante estudiante1;

    estudiante1.setGrado("Ingenieria informatica");
    estudiante1.setGenero("Femenino");
    estudiante1.setNombre("Ana");
    estudiante1.setEdad(22);

    estudiante1.mostrarDetalles();


    return 0;
}
