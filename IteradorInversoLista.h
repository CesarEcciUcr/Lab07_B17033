#pragma once

#include "Nodo.h"

template<class T>
class IteradorInverso {

private:

	Nodo<T> * siguiente;
	Nodo<T> * actual;

public:

	IteradorInverso(Nodo<T> * actual) {
		this->siguiente = actual;
		this->actual = actual;
	}

	~IteradorInverso() {
	}

	// Predecremento

	T& operator--() {
		bool continuar = true;
		while (continuar && actual != 0) {
			continuar = false;
			Nodo<T> * tmp = actual;
			if (actual != NULL && siguiente == actual->anterior) {

				actual = actual->siguiente;
				continuar = true;

			}
			else if (actual->anterior != NULL) {
				actual = actual->anterior;
			}
			else {
				actual = actual->siguiente;
				continuar = true;
			}
			siguiente = tmp;
		}

		return actual->actual;
	}

	/// Posdecremento
	///Con argumento int para diferenciarlo del otro

	T& operator--(int){

		T& temp = actual->actual;
		--*this;
		return temp;
	}

	T operator*() {
		return actual->actual;
	}

	bool operator!=(IteradorInverso<T> & otro) {
		return this->actual != otro.actual;
	}

	bool operator==(IteradorInverso<T> & otro) {
		return this->actual == otro.actual;
	}

};