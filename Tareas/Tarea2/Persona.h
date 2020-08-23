#pragma once
#include<iostream>
#include<stdlib.h>

using namespace std;

class Persona {
private:
	string nombre;
	string carnet;
	
public:
	Persona(string,string);
	~Persona();
	string getNombre();
	string getCarnet();
	
	

};