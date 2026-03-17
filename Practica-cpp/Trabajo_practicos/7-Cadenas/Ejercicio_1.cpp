// Longitud de una cadenas de caracteres - Función strlen()
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char palabra[]="hola que tal";
    int longitud=0;


    longitud=strlen(palabra);
    cout<<"El numero de elementos de la cadena es: "<<longitud<<endl;
    cin.get();
    return 0;
}

/*
 * Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verifique la longitud de la
 * cadena, y si esta a 10 caracteres mostrarla en pantalla, caso contrario no mostrarlo
 */