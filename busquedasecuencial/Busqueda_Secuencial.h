//
// Created by maesly on 28/08/18.
//
#include <iostream>
using namespace std;
#ifndef DATOS2PRACTICAS_BUSQUEDA_SECUENCIAL_H
#define DATOS2PRACTICAS_BUSQUEDA_SECUENCIAL_H

class Busqueda_Secuencial{

public:

    Busqueda_Secuencial(){}
    void busqueda_secuencial(int arr[],int val){
        int pos = 0;
        for(int i = 0;i < sizeof(arr);i++){
            if( arr[i] == val){
                pos = 1;
                cout <<"Valor " << val << " encontrado en la posición " << i + 1 << " del arreglo"<< endl;
            }
        }
        if(pos == 0){
            cout << "No se encontró el valor en el arreglo"<< endl;
        }


    }

};


#endif //DATOS2PRACTICAS_BUSQUEDA_SECUENCIAL_H
