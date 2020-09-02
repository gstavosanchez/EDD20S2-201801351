#pragma once
#include<iostream>
#include<stdlib.h>
#include "Estudiante.h"

using namespace std;

class Nodo{
private:
    Estudiante *elemento;
    Nodo *siguiente;
public:
    Nodo();
    Nodo(Estudiante *elemento,Nodo *siguiente);
    ~Nodo();

    void setSiguiente(Nodo *);
	void setElemento(Estudiante *);
	Nodo *getSiguiente();
	Estudiante *getElemento();

};

