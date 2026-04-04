/*
* Ejercicio 3: Escribe un programa que lea de la entrada estándar un vector de números y muestre en la
* salida estándar los números del vector con sus índices asociados.
 */
#include <iostream>
using namespace std;
int main() {
    int numero[100],n;
    cout << "Digite en numero de elemntos que va a tener el arreglo: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout<<"Digite un numero: ";
        cin >> numero[i];
    }
    for (int i = 0; i < n; i++) {
        cout << i<<"->"<<numero[i];
    }
}
/*
 * Ejercicio 4: Escribe un programa que defina un vector de números y muestre en la salida estándar el vector
 * en orden inverso—del último al primer elemento.
 */