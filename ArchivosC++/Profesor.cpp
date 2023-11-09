#include "Profesor.h"

// CLASE DEL ENCABEZADO.

Profesor::Profesor(string name, int age, string grade)
{
	this->name = name; // RECIBE UN NOMBRE.
	this->age = age; // RECIBE UNA EDAD.
	this->grade = grade; // RECIBE UN CURSO QUE DICTA.
	this->student_anonymousSociety = nullptr; // NO RECIBE NINGÚN PARÁMETRO YA QUE SE TRABAJA CON PUNTEROS.
}

Profesor::~Profesor()
{
	// ADVERTENCIA: ESTE ES EL DESTRUCTOR DE ESTA CLASE O REALMENTE ACTÚA COMO ÉSTE UN RECOLECTOR DE BASURA YA QUE SE ELIMINA TODOS LOS DATOS QUE SE RECIBIERON POR PARÁMETROS.

	// AHORA VAMOS A ELIMINAR UN ALUMNO Y AL MOMENTO DE DESPLEGAR EL MAIN ARROJARÁ UN VALOR NULO YA QUE SE EJECUTÓ ESTÁ FUNCIÓN.

	// delete this->student_anonymousSociety; // SE OCUPA LA PALABRA RESERVADA EN LA CONSOLA QUE YA ESTÁ ELIMINADA.

	this->student_anonymousSociety->~Estudiante(); // HACE UN LLAMADO AL MÉTODO DE ESTA CLASE. 
}

void Profesor::set_student_anonymousSociety(Estudiante* student_anonymousSociety)
{
	// AQUÍ SE RECIBE EL SIGUIENTE PARÁMETRO NO DECLARADO EN LA FUNCIÓN ANTERIOR.

	this->student_anonymousSociety = student_anonymousSociety;
}
