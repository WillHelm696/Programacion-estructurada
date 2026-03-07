/*
 * 5. Escriba un programaque lea la entrada estandar de un caracter e indique en la salida esandar si el
 * caracter es una vocal minusculo o no
 */

#include <iostream>
using namespace std;
int main() {
    char letra;
    cout<<"Ingrese un caracter: ";cin>>letra;

    switch(letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':cout<<"Es una vocal minuscula"; break;
        default: cout<<"No es una vocal minuscula"; break;
    }

    return 0;
}

/*
 * 6. Escriba un programa que lea la entrada estandar un caracter e indique en la
 * salida estandar si el caracter es una vocal minuscula, es una vocal mayuscula
 * o no es una vocal
 */

