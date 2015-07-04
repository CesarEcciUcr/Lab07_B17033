/*
 * ElementoPersonaEdad.h
 *
 *  Created on: 18/5/2015
 *      Author: Diego
 */

#ifndef ELEMENTOPERSONAEDAD_H_
#define ELEMENTOPERSONAEDAD_H_


#include "Persona.h"
#include "ElementoLista.h"


using namespace std;

class ElementoPersonaEdad : public ElementoLista{

public:
	Persona * p;

	int compareTo(ElementoLista *);
	void imprimir(ostream &) const;
	ElementoPersonaEdad(Persona*);
	virtual ~ElementoPersonaEdad();
};

#endif /* ELEMENTOPERSONAEDAD_H_ */
