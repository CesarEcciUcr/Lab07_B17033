
#pragma once

template<class T>
class Nodo {

	template <class T>
	friend class Lista;

	template <class T>
	friend class Iterador;

	template <class T>
	friend class IteradorInverso;

protected:

	T actual;
	Nodo<T> *anterior, *siguiente;
	int posicion;

public:

	Nodo(T elemento) {

		this->actual = elemento;
		anterior = NULL;
		siguiente = NULL;
	
	}

	~Nodo() {
	}

};