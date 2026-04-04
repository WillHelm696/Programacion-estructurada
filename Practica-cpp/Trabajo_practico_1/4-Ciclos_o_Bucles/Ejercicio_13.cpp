/*
 * 13 Hacer un programa que realice la serie fibonaci -> 1 2 3 5 8 13...n
 */

#include <iostream>
using namespace std;
int main() {
    int n=1 , x=0, y=1, z=1;
    cout<<"igite el numero de elementos: ";cin>>n;
    cout<<z<<" ";
    for(int i=1;i<n;i++) {
        z=x+y;
        cout<<z<<" ";
        x=y;
        y=z;
    }
}
/*
 * En una clase de 5 alumnos se an realizado 3 examenes y se requiere determinae el numero de:
 * a) Alumnos que aprobaron todos los examenes
 * b) Alumnos que aprobaron almenos un examen
 * c) Alumnos que aprobaron unicamente el ultimo examen
 * Reaice un programa que permita la lectura de los datos y l calculo de las estadisticas
 */