#include "Profesor.h"

// CLASE DEL ENCABEZADO.

Profesor::Profesor(string name, int age, string grade)
{
	this->name = name; // RECIBE UN NOMBRE.
	this->age = age; // RECIBE UNA EDAD.
	this->grade = grade; // RECIBE UN CURSO QUE DICTA.
	this->student_anonymousSociety = nullptr; // NO RECIBE NING�N PAR�METRO YA QUE SE TRABAJA CON PUNTEROS.
}

Profesor::~Profesor()
{
	// ADVERTENCIA: ESTE ES EL DESTRUCTOR DE ESTA CLASE O REALMENTE ACT�A COMO �STE UN RECOLECTOR DE BASURA YA QUE SE ELIMINA TODOS LOS DATOS QUE SE RECIBIERON POR PAR�METROS.
}

void Profesor::set_student_anonymousSociety(Estudiante* student_anonymousSociety)
{
	// AQU� SE RECIBE EL SIGUIENTE PAR�METRO NO DECLARADO EN LA FUNCI�N ANTERIOR.

	this->student_anonymousSociety = student_anonymousSociety;
}
