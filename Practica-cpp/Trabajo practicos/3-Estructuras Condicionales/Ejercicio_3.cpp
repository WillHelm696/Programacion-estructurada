/*
 *  3. Realice un programa que lea un valor entero y determine si se trata de un numero par o impar
 */

#include <iostream>
using namespace std;
int main() {
    int numero;
    cout<<"Ingrese un numero: ";cin>>numero;
    if (numero%2==0) {
        cout<<"El numero es Par";
    }else if (numero%2==1) {
        cout<<"El numero es Impar";
    }else {
        cout<<"El numero es 0";
    }
    return 0;
}

/*
 *  4. Comprobar si un numero digitado por el usuario es positivo o negativo.
 */
