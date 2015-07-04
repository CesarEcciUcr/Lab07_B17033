#pragma once

#include "Nodo.h"

template<class T>
class Iterador {

private:

	Nodo<T> * anterior;
	Nodo<T> * actual;

public:

	Iterador(Nodo<T> * actual) {
		this->anterior = actual;
		this->actual = actual;
	}

	~Iterador() {
	}

	// Preincremento

	T& operator++() {
		bool continuar = true;
		while (continuar && actual != 0) {
			continuar = false;
			Nodo<T> * tmp = actual;
			if (actual != NULL && anterior == actual->siguiente) {

				actual = actual->anterior;
				continuar = true;

			}
			else if (actual->siguiente != NULL) {
				actual = actual->siguiente;
			}
			else {
				actual = actual->anterior;
				continuar = true;
			}
			anterior = tmp;
		}

		return actual->actual;
	}

	///Posincremento
	///Con argumento int para diferenciarlo del otro

	T& operator++(int){
		T& temp = actual->actual;
		++*this;
		return temp;
	}
	

	T operator*() {
		return actual->actual;
	}

	bool operator!=(Iterador<T> & otro) {
		return this->actual != otro.actual;
	}

	bool operator==(Iterador<T> & otro) {
		return this->actual == otro.actual;
	}

};