#pragma once
#include <string>

using namespace std;

class Estudiante
{
private:

	// ATRIBUTOS DE LA CLASE.

	string name; // NOMBRE DEL ESTUDIANTE.

public:

	Estudiante(string estudiante); // CONSTRUCTOR DE ESTA CLASE.
	~Estudiante() = default; // DESTRUCTOR DE ESTA CLASE.
};

