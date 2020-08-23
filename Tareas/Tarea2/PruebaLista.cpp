#include <iostream>
#include<stdlib.h>
#include "Lista.h"
#include "Persona.h"

using namespace std;

int main()
{
    Lista* lista = new Lista();
    Persona* estudiante = new Persona("Gustavo", "201801351");
    Persona* estudiante2 = new Persona("Alma", "201801450");
    Persona* estudiante3 = new Persona("Pamela", "201801453");
    Persona* estudiante4 = new Persona("Pedro", "201801457");
    lista->add(estudiante);
    lista->add(estudiante2);
    lista->add(estudiante3);
    lista->add(estudiante4);

    if (lista->isEmpty()) {
        cout << "Lista Vacia" << endl;
    }
    else {
        cout << lista->toString() << endl;
        lista->remove("201801457");
        cout << lista->toString() << endl;


        string carnet;
        cout << "Ingrese el carnet a buscar:"; cin >> carnet;
        Persona* buscado = lista->getElemento(carnet);
        if (buscado != NULL) {
            cout << "Nombre:" << buscado->getNombre() << " Carnet:" << buscado->getCarnet() << endl;
        }
        else {
            cout << "No se encontro coincidencia con:" << carnet << endl;
        }


        
    }
    //cout <<"Size the list:" <<lista->getSize() << endl;


    //cout << lista->toString() << endl;

    
    system("pause");
    return 0;
}

