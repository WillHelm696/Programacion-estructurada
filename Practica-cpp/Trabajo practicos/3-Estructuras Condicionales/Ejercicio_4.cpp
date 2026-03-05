/*
 * 7. Escriba un programa que solisite una edad (un entero) e indique en la salida
 * si la edad introducida esta en el rango [18-25].
 */
#include <iostream>
using namespace std;
int main() {

    int edad;
    cin>>"Digite su edad";
    cout<<edad;
    if(edad>=18 && edad<=25) {
        cout<<"Su edad esta en el Rango";
    }else {
        cout<<"Su edad no esta en el Rango";
    }
    return 0;
}

/*
 * 8. Escribe un programa que lea de la entrada estandar tres numeros. Despues debe leer un cuarto numero e indicar si
 * el numero coincide con alguno con anterioridad
 */