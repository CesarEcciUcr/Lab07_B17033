/*
 * Elemento.cpp
 *
 *  Created on: 5/5/2015
 *      Author: ruben.jimenez
 */
#include "stdafx.h"
#include "Elemento.h"


Elemento::Elemento() {
	hIzq = NULL;
	hDer = NULL;
}

Elemento::~Elemento() {
	if (hIzq != NULL) {
		delete hIzq;
	}
	if (hDer != NULL) {
		delete hDer;
	}
}

ostream & operator<<(ostream & out, const Elemento & e) {
	e.imprimir(out);
	return out;
}

bool Elemento::operator <(Elemento& otro) {
	return this->compareTo(&otro) < 0;
}

bool Elemento::operator <=(Elemento& otro) {
	return this->compareTo(&otro) <= 0;
}

bool Elemento::operator >(Elemento& otro) {
	return this->compareTo(&otro) > 0;
}

bool Elemento::operator >=(Elemento& otro) {
	return this->compareTo(&otro) >= 0;
}
