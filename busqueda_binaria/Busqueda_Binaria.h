//
// Created by maesly on 29/08/18.
//
#include "iostream"
using namespace std;
#ifndef DATOS2PRACTICAS_BUSQUEDA_BINARIA_H
#define DATOS2PRACTICAS_BUSQUEDA_BINARIA_H
/**
 * @brief Clase encargada de crear objetos
 *
 */
class Busqueda_Binaria{
public:
    /**
     * @brief Constructor de la clase
     */
    Busqueda_Binaria(){}
    int dato = 0; ///Elemento que se desea buscar en el arreglo
    /**
     * @brief Algoritmo que se encarga de buscar elementos de tipo enteros
     * en un arreglo ordenado.
     * @param arreglo Arreglo de entrada en el que se busca dicho elemento
     * @param tam Tamaño del arreglo
     * @param dato Dato que se desea buscar
     * @return Posición en el arreglo en la que se encuentra el elemento buscado
     */
    int busqueda_binaria(int arreglo[],int tam, int dato);
    /**
     * @brief Algoritmo encargado de ordenar un arreglo de enteros en forma ascente
     * @param arreglo Arreglo a ordenar
     * @param tam Tamaño del arreglo
     */
    void ordenarArreglo(int arreglo[],int tam);
    /**
     * @brief Intercambia valores en un arreglo
     * @param a
     * @param b
     */
    void intercambiar(int &a, int &b);
    /**
     * @brief Muestra un algoritmo en consola
     * @param arr
     * @param tam
     */
    void mostrar(int arr[],int tam);

    void setDato(int valor){
        dato = valor;
    }
};
#endif //DATOS2PRACTICAS_BUSQUEDA_BINARIA_H
