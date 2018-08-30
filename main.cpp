#include <iostream>
#include "busquedasecuencial/Busqueda_Secuencial.h"
#include "busqueda_binaria/Busqueda_Binaria.h"
using namespace std;
int main() {
    std::cout << "¡Bienvenido!" << std::endl;


    int answer;
    do{

        cout << "¿Que acción desea realizar?"<<endl;
        cout << " 1. Búsqueda secuencial" << endl;
        cout << " 2. Búsqueda binaria" << endl;

        cin >> answer;

        switch (answer) {
            case 1:{
                Busqueda_Secuencial *busqueda_secuencial = new Busqueda_Secuencial();
                cout << "Busqueda secuencial" << endl;
                cout << "Ingrese cantidad de datos en el arreglo: " << endl;
                int tam;
                cin >> tam;
                int arr[tam];
                cout << "Ingrese los valores de los datos en el arreglo" <<
                     " ADVERTENCIA: el arreglo debe estar ordenado" << endl;
                int valor;
                for (int i = 0; i < tam; i++) {
                    cin >> valor;
                    arr[i] = valor;

                }
                cout << "Ingrese el dato que desea buscar en el arreglo: " << endl;
                cin >> valor;
                busqueda_secuencial->busqueda_secuencial(arr, valor);
                break;
            }
            case 2:{
                Busqueda_Binaria *busqueda_binaria = new Busqueda_Binaria();
                cout << "Busqueda Binaria"<< endl;
                cout << "Ingrese la cantidad de datos en el arreglo: " << endl;
                int tam;
                cin >> tam;
                int arr[tam];
                cout << "Ingrese los valores de los datos en el arreglo." <<
                     " ADVERTENCIA: el arreglo debe estar ordenado" << endl;
                int valor;
                for (int i = 0; i < tam; i++) {
                    cin >> valor;
                    arr[i] = valor;

                }
                cout << "Tamaño "<<sizeof(arr)/ sizeof(arr[0])<<endl;
                cout << "Ingrese el dato que desea buscar en el arreglo: " << endl;
                cin >> valor;
                busqueda_binaria->ordenarArreglo(arr,tam,valor);

                break;
            }

        }
    }while (answer != 0);

    return 0;
}
