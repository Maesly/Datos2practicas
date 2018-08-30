//
// Created by maesly on 29/08/18.
//
#include "Busqueda_Binaria.h"

void Busqueda_Binaria::intercambiar(int &a, int &b) {
    int temp = b;
    b = a;
    a = temp;
}

void Busqueda_Binaria::mostrar(int arr[], int tam) {
    cout << "Arreglo [";
    for (int i = 0; i <tam; ++i) {
        cout << arr[i] << "," ;
    }
    cout << "]" << endl;
}
void Busqueda_Binaria::ordenarArreglo(int arreglo[],int tam) {
    for (int i = 0; i < tam -1; i++) {
        for (int j = 0; j < tam -1; j++) {
            if(arreglo[j] > arreglo[j+1])
               // cout << arreglo[j] << endl;
                intercambiar(arreglo[j], arreglo[j + 1]);
        }
    }
    mostrar(arreglo,tam);
    busqueda_binaria(arreglo,tam,dato);

}

int Busqueda_Binaria::busqueda_binaria(int *arreglo, int tam, int dato) {
    int inicio = 0;
    int final = tam;
    int medio ;
    while (inicio <= final){
        medio = (inicio + final)/2;
        if(medio == dato){
            cout << "Elemento encontrado en la posición: "<< medio <<endl;
            return 0;
        }else{
            if(medio > dato){
                final = medio -1;
            }else{
                inicio = medio +1;
            }
        }

    }
    cout << "Elemento no encontrado" << endl;
}

