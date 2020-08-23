#ifndef Nodo_H
#define Nodo_H
#include<iostream>
#include<stdlib.h>
#include "Persona.h"



using namespace std;

class Nodo
{
private:
	Persona *elemento;
	Nodo *siguiente;

public:
	Nodo();
	Nodo(Persona *elmento, Nodo *siguiente);
	~Nodo();
	void setSiguiente(Nodo *);
	void setElemento(Persona *);
	Nodo *getSiguiente();
	Persona *getElemento();


};



#endif // !Nodo




