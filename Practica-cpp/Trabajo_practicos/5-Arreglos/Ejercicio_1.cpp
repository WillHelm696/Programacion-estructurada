/*
* Ejercicio 1: Escribe un programa que defina un vector de números y calcule la suma de sus elementos.
 */
#include <iostream>
using namespace std;
int main() {
    int numeros[5]={1,2,3,4,5};
    int suma = 0;
    for (int i=0; i<5; i++) {
        suma = suma + numeros[i];
    }
    cout << "La suma de los elemnto del vector es:"<<suma << endl;

    cin.get();
    return 0;

}

/*
 * Ejercicio 2: Escribe un programa que defina un vector de números y calcule la multiplicación acumulada de sus elementos.
 */