#include <iostream>
#include <string> // NO OLVIDAR ESTO!!!!!!!!
#include "Profesor.h" // VAMOS A REFERENCIAR CON ESTA CLASE YA CREADA PARA EL MAIN.
#include "Estudiante.h" // LO MISMO PERO CON CADA ESTUDIANTE EN EL MAIN.

using namespace std;

int main()
{
    // LO QUE VAMOS A TENER EN CUENTA.

    Profesor* teacher = new Profesor("Pablo", 25, "Estructura de datos"); // SE CREA UN NUEVO PROFESOR CON SUS ATRIBUTOS O PARÁMETROS RESPECTIVOS.
    Estudiante* student = new Estudiante("Jorge"); // SE CREA UN NUEVO ALUMNO CON UN SÓLO PARÁMETRO YA DECLARADO EN EL CONSTRUCTOR.

    teacher->set_student_anonymousSociety(student); // EL PROFESOR REFERENCIA A CADA ALUMNO EN PARTICULAR.

    // VAMOS A LLAMAR AL DESTRUCTOR EN ESTE CASO.

    delete teacher;
    cout << student->get_name();
}

