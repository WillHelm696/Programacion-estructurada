/*
 * Esribe un programa qu lea los valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0
 * El progrma debe entregar la suma de los valores mayores a 0 introducidos
 */

#include <iostream>
using namespace std;
int main () {
    int numero,suma=0;
    do {
        cout<<"Ingrese un numero: ";cin>>numero;
        if (numero>0) {
            suma += numero;
        }

    }while (((numero < 20) || (numero > 30)) && (numero != 0 ));
    cout<<"La suma es: "<<suma<<endl;
    cin.ignore();
    return 0;
}

/*
 * 6 Escriba un programa que calcule x^y donde tanto x como y son enteros positivos, sin utilizar la funcion pow.
 */