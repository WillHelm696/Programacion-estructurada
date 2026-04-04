/*
* Ejercicio 7: Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz
* es simétrica si es cuadrada y si es igual a su matriz transpuesta.
 */
#include <iostream>
using namespace std;
int main() {
    int numeros[100][100],filas,columnas;
    bool flag=true;
    cout<<"Ingrese el numero de filas: ";cin>>filas;
    cout<<"Digite el numero de columnas: ";cin>>columnas;

    for(int i=0; i<filas; i++) {
        for(int j=0; j<columnas; j++) {
            cout<<"Digite un numero"<<"["<<i<<"]["<<j<<"]:";
            cin>>numeros[i][j];
        }
        cout<<endl;
    }
    if (filas==columnas) {
        for(int i=0; i<filas; i++) {
            for(int j=0; j<columnas; j++) {
                cout<<numeros[i][j]<<" "<<numeros[j][i]<<endl;
                if(numeros[i][j] != numeros[j][i]) {
                    flag=false;
                    break;
                }
            }
            if (!flag) break;
        }
    }

    if(flag==true) {
        cout<<"La matriz es Simetrica"<<endl;
    }else {
        cout<<"La matriz no es Simetrica"<<endl;
    }
    cin.get();
    return 0;
}
/*
 * Ejercicio 8: Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.
 */