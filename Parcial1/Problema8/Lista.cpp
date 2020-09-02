#include<iostream>
#include "Nodo.h"
#include "Lista.h"


using namespace std;

Lista::Lista(){

	cabeza = NULL;
	size = 0;
}

void Lista::add(Estudiante *_elemento) {

	//cabeza = new Nodo(_elemento, cabeza);
	Nodo* nuevo = new Nodo(_elemento, NULL);
	if (isEmpty()) {
		cabeza = nuevo;
		cabeza->setSiguiente(NULL);
	}
	else {
		Nodo* aux = cabeza;
		while (aux->getSiguiente() != NULL)
		{
			aux = aux->getSiguiente();
		}
		aux->setSiguiente(nuevo);
	}

	size++;

}

bool Lista::isEmpty() {
	return size == 0;
}

int Lista::getSize() {
	return size;
}


string Lista::toString() {
	Nodo* aux = this->cabeza;
	string objeto;
	while (aux != NULL)
	{
		objeto = objeto + aux->getElemento()->getNombre() + " " + aux->getElemento()->getId() +" " + aux->getElemento()->getId() + "\n";
		aux = aux->getSiguiente();
	}

	return objeto;

}

Estudiante *Lista::getElemento(string _carnet) {
	if (isEmpty()) {
		return NULL;
	}
	else
	{
		Nodo* aux = this->cabeza;
		int contador = 0;
		while (contador < getSize() )
		{
			contador++;
			if (_carnet == aux->getElemento()->getId()) {
				return aux->getElemento();
			}
			aux = aux->getSiguiente();
		}
		return NULL;

	}
}

int Lista::indexOf(string _carnet,string _seccion) {
	if (isEmpty()) {
		return -1;
	}
	else
	{
		Nodo* aux = this->cabeza;
		int contador = 0;
		int posicion = 0;
		while (contador < getSize())
		{
			contador++;
			if (_carnet == aux->getElemento()->getId() && _seccion == aux->getElemento()->getSeccion() ) {
				return posicion;
			}
			posicion++;
			aux = aux->getSiguiente();
		}
		return -1;

	}
}
Nodo* Lista::getNodo(int index) {
	if (isEmpty()) {
		return NULL;
	}
	else {
		Nodo* buscado = cabeza;
		int contador = 0;
		while(contador < index){
			contador++;
			buscado = buscado->getSiguiente();
		}
		return buscado;
	}

}

void Lista::remove(string _carnet,string _seccion) {
	int buscado = indexOf(_carnet,_seccion);
	if (buscado != -1) {
		if (buscado == 0) {
			Nodo* aux = cabeza->getSiguiente();
			cabeza = NULL;
			cabeza->~Nodo();
			cabeza = aux;
			size--;
		}
		else if (buscado == getSize() -1) {
			Nodo* nodo_anterior = getNodo(buscado - 1);
			Nodo* nodo_actual = getNodo(buscado);
			nodo_actual = NULL;
			nodo_actual->~Nodo();
			nodo_anterior->setSiguiente(NULL);
			
			size--;

		}
		else {
			Nodo* nodo_anterior = getNodo(buscado - 1);
			Nodo* nodo_actual = getNodo(buscado);
			Nodo* nodo_siguiente = nodo_actual->getSiguiente();
			nodo_actual = NULL;
			nodo_actual->~Nodo();
			nodo_anterior->setSiguiente(nodo_siguiente);

			size--;

			
		}
	}
	else {
		cout << "No se encontro el estudiante:" << _carnet << endl;
	}
}

Lista::~Lista() {
	Nodo* aux = cabeza;
	Nodo* actual;
	while (aux != NULL)
	{
		actual = aux->getSiguiente();
		delete aux;
		aux = actual;

	}
	cabeza = NULL;
}