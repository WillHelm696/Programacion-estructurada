//Copiar el contenido de una cadena a otra - Funcion strcpy()
#include <iostream>
#include <string.h>

using namespace std;
int main() {
    char nombre[]="Alejandro";
    char nombre2[20];

    strcpy(nombre2,nombre);

    cout << nombre2 << endl;
}
/*
 * Pedir al ususario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacia otro arreglo
 * de caracteres.
 */