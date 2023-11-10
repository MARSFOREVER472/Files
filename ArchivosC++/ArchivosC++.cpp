#include <iostream>
#include <string> // NO OLVIDAR ESTO!!!!!!!!
#include "Profesor.h" // VAMOS A REFERENCIAR CON ESTA CLASE YA CREADA PARA EL MAIN.
#include "Estudiante.h" // LO MISMO PERO CON CADA ESTUDIANTE EN EL MAIN.
#include <fstream> // LIBRERÍAS PARA LOS ARCHIVOS.
#include <sstream> // LIBRERÍAS PARA LOS ARCHIVOS.

using namespace std;

void readArchives()
{
    // TRABAJAREMOS EN UNA PARTE MÁS FUNDAMENTAL PARA REFERENCIAR ARCHIVOS MEDIANTE LECTURA Y ESCRITURA DE ÉSTOS.

    ifstream file("Empresas.txt");
    string line("");

    while (getline(file, line)) // CREAREMOS UN ARCHIVO POR LÍNEAS.
    {
        // string name; // NOMBRE DE LA EMPRESA.
        // string id; // RUT DE LA EMPRESA.

        string name, id; // SE PUEDE SEPARAR LÍNEAS DE ESTA FORMA TAMBIÉN.
        stringstream leer_lineasArchivo(line);
        getline(leer_lineasArchivo, name, '-'); // SE LEEN POR LÍNEAS EL NOMBRE DE LA EMPRESA.
        getline(leer_lineasArchivo, id, '-'); // SE LEEN POR LÍNEAS EL ID DE UNA EMPRESA.

        cout << name << "";
        cout << id << "\n";
    }
}

int main()
{
    // LO QUE VAMOS A TENER EN CUENTA.

    // Profesor* teacher = new Profesor("Pablo", 25, "Estructura de datos"); // SE CREA UN NUEVO PROFESOR CON SUS ATRIBUTOS O PARÁMETROS RESPECTIVOS.
    // Estudiante* student = new Estudiante("Jorge"); // SE CREA UN NUEVO ALUMNO CON UN SÓLO PARÁMETRO YA DECLARADO EN EL CONSTRUCTOR.

    // teacher->set_student_anonymousSociety(student); // EL PROFESOR REFERENCIA A CADA ALUMNO EN PARTICULAR.

    // VAMOS A LLAMAR AL DESTRUCTOR EN ESTE CASO.

    // delete teacher;

    // teacher->~Profesor(); // SE DESTRUYE AL HACER UN LLAMADO AL MÉTODO DE ESTA CLASE.
    // cout << student->get_name();
    readArchives();
}

