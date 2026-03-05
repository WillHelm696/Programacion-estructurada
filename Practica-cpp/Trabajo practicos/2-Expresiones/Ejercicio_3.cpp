/*
 * 5. Escriba un fragmento de programa que intercambie los valores de dos variables
 */

#include<iostream>
using namespace std;

int main () {
    int a,b,aux;

    cout<<"Ingrese el primer valor x: ";cin>>a;
    cout<<"Ingrese el primer valor y: ";cin>>b;

    aux=a; a=b; b=aux;

    cout<<"El nuevo valor de x es "<<a<<endl;
    cout<<"El nuevo valor de y es "<<b<<endl;
}

/*
 * 6. Escriba un programa que lea la nota final de cuatro alumno y calcule la nota final media de los cuatro alumno
 */

