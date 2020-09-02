#pragma once
#include<iostream>
#include<stdlib.h>

using namespace std;

class Estudiante {
private:
	string nombre;
	string id;
    string seccion;
	
public:
	Estudiante(string,string,string);
	~Estudiante();
	string getNombre();
	string getId();
	string getSeccion();
};