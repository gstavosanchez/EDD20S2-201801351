#include <iostream>
#include<stdlib.h>
#include "Estudiante.h"
#include "Lista.h"

using namespace std;

int main(){

    Lista* lista = new Lista();

    Estudiante* estu1 = new Estudiante("Gustavo","201801351","A");
    Estudiante* estu2 = new Estudiante("Alma","201801352","B");
    Estudiante* estu3 = new Estudiante("Paola","201801355","A");

    lista->add(estu1);
    lista->add(estu2);
    lista->add(estu3);

    lista->toString();

    lista->remove("201801351","A");
    lista->toString();


    system("pause");
    return 0;
}