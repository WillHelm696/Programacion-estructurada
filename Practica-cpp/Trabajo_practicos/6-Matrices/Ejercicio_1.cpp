/*
* Ejercicio 1: Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas, Posteriormente mostrar la matriz en pantalla.



 */
#include <iostream>
using namespace std;
int main() {
    int numero[100][100],filas,columnas;
    cout<<"Ingresa el numero de filas: ";cin>>filas;
    cout<<"Ingresa el numero de columnas: ";cin>>columnas;
    for(int i=0;i<filas;i++) {
        for(int j=0;j<columnas;j++) {
            cout<<"Digite un numero"<<"["<<""<<i<<""<<"]["<<j<<""<<"]"<<endl;
            cin>>numero[i][j];
        }
    }
    for(int i=0;i<filas;i++) {
        for(int j=0;j<columnas;j++) {
            cout<<numero[i][j]<<" ";
        }
        cout<<"\n";
    }
    cin.get();
    return 0;

}
/*
 * Ejercicio 2: Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz.
 */