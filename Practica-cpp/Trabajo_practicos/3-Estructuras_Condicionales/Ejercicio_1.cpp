/*
 * 1. Escriba un programa que lea dos numeros y determine cual de ellos es el mayor
 */

#include <iostream>
using namespace std;
int main() {
    int numero1, numero2;

    cout<<"Ingrese un numero a: ";cin>>numero1;
    cout<<"Ingrese un numero b: ";cin>>numero2;

    if (numero1 > numero2) {
        cout<<"El numero "<<numero1<<" es mayor que "<<numero2<<endl;
    }else if (numero2==numero1) {
        cout << "Los dos Numeros Son Iguales " <<endl;
    }else {
        cout<<"El numero "<<numero2<<" es mayor que "<<numero1<<endl;
    }
    return 0;
}

/*
 * 2. Escriba un programa que lea tres numeros y determine cual de ellos es el mayor
 */
