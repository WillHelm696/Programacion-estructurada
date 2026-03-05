/*
 * 3. Realice un programa que lea la entrada estandar los sigientes datos de una persona:
 *      Edad: dato de tipo entero.
 *      Sexo: dato de tipo caracter.
 *      Altura en metros: dato de tipo real.
 * Tras leer los datos, el programa debe mostrarlos en la salida estandar.
 */

#include <iostream>
using namespace std;

int main () {
    int edad;
    char sexo;
    float altura;
    cout << "Ingrese su Edad, Sexo, Altura: "<<endl;

    cout << "edad: "; cin >> edad;
    cout << "Sexo: "; cin >> sexo;
    cout << "Altura: "; cin >> altura;

    cout<<"la edad: "<<edad<<", sexo:"<<sexo<<", altura:"<<altura<<endl;

    return 0;
}

/*
 * 4. Ejecute el programa del ejercicio anterior con entradas erroneas. Por ejemplo, introdusca un dato de tipo caracter
 * cuando se espera un dato de tipo entero.
 */
