#pragma once
#include <string>
#include "Estudiante.h" // IMPORTAR ESA LIBRERÍA YA QUE SE TRATA DE UNA CLASE A MODO DE REFERENCIA A ÉSTA.

using namespace std;

class Profesor
{

private:

	// ATRIBUTOS DE LA CLASE PROFESOR.

	string name; // NOMBRE DEL PROFESOR.
	int age; // EDAD DEL PROFESOR.
	string grade; // CURSO QUE DICTA.
	Estudiante* student_anonymousSociety; // LO QUE SE ASOCIA ESTE PROFESOR A UN ESTUDIANTE VA A CONSTAR DE UN PUNTERO.

public:

	// MÉTODOS DE ESTA CLASE.

	Profesor(string name, int age, string grade); // CONSTRUCTOR DE ESTA CLASE.
	~Profesor(); // ESTE ES EL DESTRUCTOR DE ESTA CLASE.
	void set_student_anonymousSociety(Estudiante* student_anonymousSociety);

};

