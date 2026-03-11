/*
* getch()	std::cin.get()
* clrscr()	Usar system("clear") en Linux/Mac o system("cls") en Windows (aunque no es lo más recomendado)
* kbhit()	Librerías como ncurses en Linux o en Windows
* 1. Realice un programam que solicite una entrada estandar un entero 1 al 10 y muestre en la salida estandar su tabla de multiplicar
*/
#include <iostream>
using namespace std;
int main() {
    int numero;
    do{
        cout<<"DIGITE O NUMERO: ";cin>>numero;
    }while((numero<1) || (numero>10));

    for(int i=1; i<=20; i++) {
        cout<<numero<<"*"<<i<<"="<<numero*i<<endl;
    }
    cin.get();
    return 0;
}