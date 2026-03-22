// Transformar una cadena a números - Función atoi() y atof()
#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    char cad[]="123";
    int numero;

    char cad2[]="123.4";
    float numeroFloat;

    numero = atoi(cad);
    numeroFloat = atof(cad2);
    cout << numero << endl;
    cout << numeroFloat << endl;

    /* Pedir al ususario 2 cadenas de caracteres de numeros, uno entero y el otro real, convertirlos a sus
    * respectivos valore y por ultimo sumarlos
    */
    cin.get();
    return 0;
}
