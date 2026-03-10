/*
* 3. Realice un programa que lea la entrada estandar los sigientes datos de una persona:
 *      Edad: dato de tipo entero.
 *      Sexo: dato de tipo caracter.
 *      Altura en metros: dato de tipo real.
 * Tras leer los datos, el programa debe mostrarlos en la salida estandar.
 */

#include <iostream>
using namespace std;
int main() {

    int edad;
    char sexo;
    float altura;

    cout << "Ingrese la Edad, Sexo, Altura: "<<endl;
    cout << "edad:";
    cin >> edad;

    cout << "Sexo:";
    cin >> sexo;

    cout << "Altura:"<<endl;
    cin >> altura;

    cout<< "la edad:"<<edad<< ", sexo:"<<sexo<<", altura:"<<altura<<endl;
    return 0;
}