/*
* Ejercicio 7: Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz
* es simétrica si es cuadrada y si es igual a su matriz transpuesta.
 */
#include <iostream>
using namespace std;
int main() {
    int numeros[100][100],filas,columnas;
    char band='F'
    cout<<"Ingrese el numero de filas: ";cin>>filas;
    cout<<"Digite el numero de columnas";cin>>columnas;

    for(int i=0; i<filas; i++) {
        for(int j=0; j<columnas; j++) {
            cout<<"Digite un numero"<<"["<<i<<"]["<<j<<"]:";
            cin>>numeros[i][j];
        }
        cout<<endl;
    }
    if (filas==columnas) {
        for(int i=0; i<filas; i++) {}
    }


}
/*
 * Ejercicio 8: Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.
 */