//Copiar el contenido de una cadena a otra - Funcion strcpy()
#include <iostream>
#include <string.h>

using namespace std;
int main() {
    char nombre[]="Alejandro";
    char nombre2[20];

    strcpy(nombre2,nombre);

    cout << nombre2 << endl;
    /*
     * 2.Pedir al ususario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacia otro arreglo
     * de caracteres.

    char cadena1[50];
    char cadena2[50];

    cout<<"Ingrese una palabra para la cadena :";
    cin.getline(cadena2,50,'\n');
    strcpy(cadena1,cadena2);
    cout << cadena1 << endl;
    */
    cin.get();
    return 0;
}
