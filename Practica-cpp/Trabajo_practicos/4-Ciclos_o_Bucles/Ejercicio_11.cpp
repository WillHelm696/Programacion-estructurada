/*
 * 11. Escriba un programa que calcule el valor de 2^1+2^2+2^3+...+2^n
 */
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int elevacion=0,suma=0,n;
    cout<<"Ingrese un numero de elementos a sumar : ";cin>>n;

    for(int i=1;i<=n;i++) {
        elevacion=pow(2,i);
        suma+=elevacion;
    }
    cout<<"El la suma total es es: "<<suma<<endl;
    cin.get();
    return 0;
}
/*
 * Hacer un programa que calcule el rsultao de la sigiente expresion: 1-2+3-4+5-6+...n
 */