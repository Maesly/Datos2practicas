//
// Created by maesly on 29/08/18.
//
#include "iostream"
using namespace std;
#ifndef DATOS2PRACTICAS_BUSQUEDA_BINARIA_H
#define DATOS2PRACTICAS_BUSQUEDA_BINARIA_H

class Busqueda_Binaria{
public:
    Busqueda_Binaria(){}

    int busqueda_binaria(int arreglo[],int tam, int dato);
    void ordenarArreglo(int arreglo[],int tam,int dato);
    void intercambiar(int &a, int &b);
    void mostrar(int arr[],int tam);
};
#endif //DATOS2PRACTICAS_BUSQUEDA_BINARIA_H
