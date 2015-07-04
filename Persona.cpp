
#include "stdafx.h"
#include "Persona.h"

using namespace std;

Persona::Persona() {
}

Persona::Persona(int ID, string nombre, int edad) : ID(ID), nombre(nombre), edad(edad) {
}

Persona::~Persona() {
}

ostream & operator<<(ostream & out, Persona & p) {
	
	return out << "*" << "ID: " << p.ID << " Nombre: " << p.nombre << " Edad: "
		<< p.edad << "*";

}
