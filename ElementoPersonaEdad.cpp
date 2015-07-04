/*
 * ElementoPersonaEdad.cpp
 *
 *  Created on: 18/5/2015
 *      Author: Diego
 */
#include "stdafx.h"
#include "ElementoPersonaEdad.h"
#include "ElementoLista.h"

ElementoPersonaEdad::ElementoPersonaEdad(Persona* p) :
		p(p) {
}

ElementoPersonaEdad::~ElementoPersonaEdad() {

}

int ElementoPersonaEdad::compareTo(ElementoLista * otro) {
	int cmp = 0;
	ElementoPersonaEdad * e = static_cast<ElementoPersonaEdad *>(otro);
	if (e != 0) {
		cmp = this->p->edad < e->p->edad ? -1 : this->p->edad == e->p->edad ? 0 : 1;
	}
	return cmp;
}

void ElementoPersonaEdad::imprimir(ostream& out) const {
	out << "[" << "ID: " << p->ID << " Nombre: " << p->nombre << " Edad: "
			<< p->edad << "]";
}
