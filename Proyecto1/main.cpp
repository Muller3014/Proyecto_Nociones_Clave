#include <iostream>
#include "Estudiante.h"
#include "Persona.h"

#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))

int suma(int a, int b) {
    return a + b;
}
int varGlobal = 27;

int main()
{

    std::cout << "Hola mundo!" << std::endl;

    std::cout <<"Pi es igual a: "<< PI << std::endl;

    std::cout << "La suma es: " << suma(2, 3) << std::endl;
    std::cout << "El valor de la variable global es: " << varGlobal << std::endl;
    std::cout << "El valor del area del circulo utilizando la variable global como radio es: " << AREA_CIRCULO(varGlobal) << std::endl;
    std::cout << "La variable global + 3: " << suma(varGlobal, 3) << "\n" <<std::endl;


    Persona persona1;

    persona1.setNombre("John");
    persona1.setEdad(20);
    persona1.setGenero("Masculino");

    std::cout << "Nombre: " << persona1.getNombre() << std::endl;
    std::cout << "Edad: " << persona1.getEdad() << std::endl;
    std::cout << "Genero: " << persona1.getGenero() << std::endl << std::endl;


    Estudiante estudiante1;

    estudiante1.setGrado("Ingenieria informatica");
    estudiante1.setGenero("Femenino");
    estudiante1.setNombre("Ana");
    estudiante1.setEdad(22);

    estudiante1.mostrarDetalles();


    return 0;
}
