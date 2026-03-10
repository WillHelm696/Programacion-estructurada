/*
 * 11. Hacer un programa que simula un cajero automatico con un saldo inicial de 1000 Dolares.
 */

#include <iostream>
using namespace std;
int main() {
    int saldo_inicia =1000 ,opc;
    float saldo, extra,retiro;
    cout << "Bienvenida a su carejo Virtual "<<endl;
    cout << "1. Ingresar dinero en cuenta "<<endl;
    cout << "2. Retirar dinero en cuenta "<<endl;
    cout << "3. Salir "<<endl;
    cout << "Ingrese una opcion: ";cin >> opc;

    switch(opc) {
        case 1:
            cout<<"Digite la cantidad de dinero a ingresar: ";cin>>extra;
            saldo = saldo_inicia + extra;
            cout<<"Dinero de la cuenta: "<<saldo<<endl;break;
        case 2:
            cout<<"Digite la cantidad de dinero que va a retirar";
            cin>>retiro;

            if (saldo_inicia < retiro) {
                cout<<"No tiene es cantidad de dinero";
            }else {
                saldo = saldo_inicia - retiro;
                cout<<"Dinero de la cuenta: "<<saldo<<endl;
            }
        case 3:
            break;
    }
    return 0;
}