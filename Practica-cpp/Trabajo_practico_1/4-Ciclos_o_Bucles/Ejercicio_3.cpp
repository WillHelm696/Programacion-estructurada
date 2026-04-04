/*
 * Realice un programam que calcule y muestre en la salida estandar la suma de los cuadrados de los 10 primeros enteros mayores que cero
 */

#include <iostream>
using namespace std;
int main() {
    int suma = 0,cuadrado;

    for (int i = 1; i <= 10; i++) {
        cuadrado = i * i;
        suma+=cuadrado;

    }
    cout << "EL resultado de la suma es:"<<suma << endl;
    cin.get();
    return 0;
}