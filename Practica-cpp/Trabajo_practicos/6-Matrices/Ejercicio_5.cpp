/*
* Ejercicio 5: Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. La matriz traspuesta es
* aquella en la que la columna i era la fila i de la matriz original.
 */
#include <iostream>
using namespace std;
int main() {
    int numeros[3][3];
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<"Digite un numero"<<"["<<i<<"]["<<j<<"]:";cin>>numeros[i][j];
        }
    }
    cout<<"Matriz original"<<endl;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<numeros[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matriz Transpuesta"<<endl;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<numeros[j][i]<<" ";
        }
        cout<<endl;
    }
    cin.get();
    return 0;
}
/*
 * Ejercicio 6: Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.
 */