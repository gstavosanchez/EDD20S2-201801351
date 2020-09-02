#pragma once
#include<iostream>
#include<stdlib.h>
#include "Nodo.h"
#include "Estudiante.h"


using namespace std;

class Lista {

private:
	Nodo* cabeza;
	int size;

public:
	Lista();
	~Lista();
	void add(Estudiante *);
	bool isEmpty();
	int getSize();
	string toString();
	Estudiante *getElemento(string );
	void remove(string,string);
	int indexOf(string,string);
	Nodo* getNodo(int);




};