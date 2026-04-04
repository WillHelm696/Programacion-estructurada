/*
* Ejercicio 15: Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100. El programa
* debe generar un numero aleatorio en ese mismo rango[1-100],e indicarle al usuario si el numero que dígito es menor o
* mayor al numero aleatorio, así hasta que lo adivine. y por ultimo mostrarle el numero de intentos que le llevo.
 */
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
    int numero, dato, contador=0;
    srand(time(NULL));
    dato = 1 + rand()%(100);
    do {
        cout << "Ingresa un numero: ";cin >> numero;
        if (numero > dato) {
            cout << "Digite un numero menor"<<endl;
        } if (numero < dato) {
            cout << "Digite un numero mayor"<<endl;
        }
        contador++;
    }while(numero != dato);
    cout <<"Felicidade Adivinaste el numero"<<endl;
    cout <<"Numero de intentos:"<<contador<<endl;
    system("pause");
    return 0;
}


/*
* Ejercicio 16: Realice un programa que calcule la descomposición en factores primos de un número entero.
* Por ejemplo: 20 = 2*2*5.
 */