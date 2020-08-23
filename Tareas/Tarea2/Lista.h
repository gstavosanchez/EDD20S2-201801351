#pragma once
#include<iostream>
#include<stdlib.h>
#include "Nodo.h"
#include "Persona.h"


using namespace std;

class Lista {

private:
	Nodo* cabeza;
	int size;

public:
	Lista();
	~Lista();
	void add(Persona *);
	bool isEmpty();
	int getSize();
	string toString();
	Persona *getElemento(string );
	void remove(string);
	int indexOf(string);
	Nodo* getNodo(int);
	Lista* clonar();



};