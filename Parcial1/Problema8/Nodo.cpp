#include<iostream>
#include "Nodo.h"
#include "Estudiante.h"

using namespace std;

Nodo::Nodo() {
	elemento = NULL;
	siguiente = NULL;
};
Nodo::Nodo(Estudiante *_elemento , Nodo *_siguiente){
	elemento = _elemento;
	siguiente = _siguiente;

}

void Nodo::setElemento(Estudiante  *_elemento) {
	elemento = _elemento;
}

void Nodo::setSiguiente(Nodo *_siguiente){
	
	siguiente = _siguiente;
}

Estudiante *Nodo::getElemento() {
	return elemento;
}

Nodo *Nodo::getSiguiente() {
	return siguiente;
}

Nodo::~Nodo(){}