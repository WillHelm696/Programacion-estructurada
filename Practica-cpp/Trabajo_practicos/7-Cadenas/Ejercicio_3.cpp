//Comparar cadenas - Función strcmp()
#include <iostream>
#include <string.h>
using namespace std;
int main() {

    char cadena1[]="Hola";
    char cadena2[]="Hola";

    if (strcmp(cadena1,cadena2)==0) {
        cout << "Son Iguales" << endl;
    }
/*
 * 3 Pedir al ususario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales , en caso de no serlo
 * cual es el mayor alfabeticamente
 */

    char cadena3[20];
    char cadena4[20];
    cout << "Ingrese una palabra para la cadena 1:";
    cin >> cadena3;
    cout << "Ingrese una palabra para la cadena 2:";
    cin >> cadena4;
    int resultado = strcmp(cadena3,cadena4);

    if (resultado==0) {
        cout << "Las 2 cadenas son iguales " << endl;
    }else if (resultado>0) {
        cout << "La cadena 2 es mayor " << endl;
    }else {
        cout << "La cadena 1 es mayor " << endl;
    }
    cin.get();
    return 0;
}
