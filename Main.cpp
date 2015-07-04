

#include "stdafx.h"
#include "Lista.h"
#include "Persona.h"
#include "IteradorLista.h"
#include "IteradorInversoLista.h"

using namespace std;

int main(int argc, char **argv) {


	///Vector con nombres de Personas


	string personas[25] = { "Jorge Castro", "Valeria Ruiz", "Juan Cabrera", "Miguel Cervantes", "Daniel Bustos", "Alberto Contreras",
		"Carmen Vollalobos", "Manuel Segura", "Carlos Barrera", "Andrey Nunez", "Brandon Hill", "Danilo Perez",
		"Gregory Brenes", "Gerald Ramos", "Jack Robinson", "Dalila Linton", "Armando Vasquez", "Julio Guillen", "William Cabezas",
		"Gilbert Guadamuz" };

	srand((unsigned int)time(NULL));




	Lista<int> l;

	for (int i = 0; i < rand() % 30 + 10; ++i) {

		int numero = rand() % 99;
		l.insertarAlFinal(numero);

	}

	cout << "Enteros" << endl;
	cout << endl;
	cout << l << endl;
	cout << endl;
	cout << "Cantidad: " << l.obtCantidad() << endl;
	cout << endl;

	/*************************************************************************************************************
	**************************************************************************************************************
	**************************************************************************************************************/

	Lista<Persona> lP;

	for (int w = 0; w < rand() % 30 + 10; ++w) {

		Persona persona(rand() % 10000000, personas[rand() % 25], rand() % 99);
		lP.insertarAlFinal(persona);

	}

	cout << "*************************************************" << endl;
	cout << endl;
	cout << "Lista Personas" << endl;
	cout << endl;
	cout << lP << endl;
	cout << endl;
	cout << "Cantidad de Elementos: " << lP.obtCantidad() << endl;
	cout << endl;


	cout << endl;
	cout << "*************************************************" << endl;
	cout << endl;
	cout << "Preincremento" << endl;
	cout << endl;

	/*************************************************************************************************************
	**************************************************************************************************************
	**************************************************************************************************************/

	Iterador<Persona> iterador = lP.begin();

	while (iterador != lP.end()) {
		cout << *iterador << endl;
		++iterador;
	}

	cout << endl;
	cout << "*************************************************" << endl;
	cout << endl;
	cout << "Iterador Posincremento" << endl;
	cout << endl;


	/*************************************************************************************************************
	**************************************************************************************************************
	**************************************************************************************************************/

	Iterador<Persona> iterador2 = lP.begin();

	while (iterador2 != lP.end()) {
		cout << *iterador2 << endl;
		iterador2++;
	}


	cout << endl;
	cout << "*************************************************" << endl;
	cout << endl;
	cout << "Predecremento" << endl;
	cout << endl;

	/*************************************************************************************************************
	**************************************************************************************************************
	**************************************************************************************************************/

	IteradorInverso<Persona> iterador3 = lP.rBegin();
	while (iterador3 != lP.rEnd()) {
		cout << *iterador3 << endl;
		--iterador3;
	}

	cout << endl;
	cout << "**************************************************" << endl;
	cout << endl;
	cout << "Posdecremento" << endl;
	cout << endl;

	/*************************************************************************************************************
	**************************************************************************************************************
	**************************************************************************************************************/

	IteradorInverso<Persona> iterador4 = lP.rBegin();
	while (iterador4 != lP.rEnd()) {
		cout << *iterador4 << endl;
		iterador4--;
	}

	system("pause");
	return 0;

}


