#include <iostream>
#include "Estudiante.h"
using namespace std;

Estudiante::Estudiante(string _nombre,string _id,string _seccion){
    nombre =_nombre;
    id = _id;
    seccion = _seccion;
}

string Estudiante::getNombre(){
    return nombre;
}
string Estudiante::getId(){
    return id;
}
string Estudiante::getSeccion(){
    return seccion;
}