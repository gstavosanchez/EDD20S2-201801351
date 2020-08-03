#include<iostream>
#include "Nodo.h"
#include "Persona.h"

using namespace std;

Nodo::Nodo() {
	elemento = NULL;
	siguiente = NULL;
};
Nodo::Nodo(Persona *_elemento , Nodo *_siguiente){
	elemento = _elemento;
	siguiente = _siguiente;

}

void Nodo::setElemento(Persona  *_elemento) {
	elemento = _elemento;
}

void Nodo::setSiguiente(Nodo *_siguiente){
	
	siguiente = _siguiente;
}

Persona *Nodo::getElemento() {
	return elemento;
}

Nodo *Nodo::getSiguiente() {
	return siguiente;
}

Nodo::~Nodo(){}