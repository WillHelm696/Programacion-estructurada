/*
 * 1. Escriba Un programa la entrada estandar de dos numeros y muestre
 * en la salida estandar su suma, resta, multiplicacion y division
 */
#include <iostream>
using namespace std;

int main() {
    int n1,n2, suma=0,resta=0,multiplicacion=0, division=0;
    cout<<"Ingrese 2 numeros: "<<endl;
    cin>>n1;
    cin>>n2;

    suma=n1+n2;
    resta=n1-n2;
    multiplicacion=n1*n2;
    division=n1/n2;

    cout<<"La suma de "<<n1<<" y "<<n2 <<" es: "<<suma<<endl;
    cout<<"La resta de "<<n1<<" y "<<n2 <<" es: "<<resta<<endl;
    cout<<"La multiplicacion de "<<n1<<" y "<<n2 <<" es: "<<multiplicacion<<endl;
    cout<<"La division de "<<n1<<" y "<<n2 <<" es: "<<division<<endl;
    return 0;
}