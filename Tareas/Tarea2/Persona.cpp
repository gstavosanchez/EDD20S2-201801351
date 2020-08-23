#include<iostream>
#include "Persona.h"

using namespace std;

Persona::Persona(string _nombre,string _carnet) {
	nombre = _nombre;
	carnet = _carnet;
}

string Persona::getNombre() {
	return nombre;
}

string Persona::getCarnet() {
	return carnet;
}


