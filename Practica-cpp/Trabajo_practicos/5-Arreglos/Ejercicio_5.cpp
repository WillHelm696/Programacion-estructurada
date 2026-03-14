/*
* Ejercicio 5: Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor elemento del vector.
 */
#include <iostream>
using namespace std;
int main() {
    int numero[100],n,mayor=0;
    cout << "Digite el numero de elementos del arreglo:";
    cin >> n;
    for(int i=0;i<n;i++) {
        cout << i+1<<"Digite un numrto:";
        cin >> numero[i];

        if (numero[i]>mayor) {
            mayor = numero[i];
        }

    }
    cout << "El mayor elemento es"<<mayor << endl;

}
/*
 * Ejercicio 6: Escribe un programa que defina un vector de números y calcule si existe algún número en el vector cuyo valor equivale a la suma del resto de números del vector.
 */