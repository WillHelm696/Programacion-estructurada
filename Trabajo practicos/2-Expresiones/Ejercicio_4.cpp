/*
 * 7. La calificación final de un estudiante es la media ponderada de tres notas: La nota de prácticas que cuenta un 30%
 * del total, la nota teórica que cuenta un 60% y La nota de participación que cuenta el 10% restante. Escriba un
 * programa que Lea de La entrada estándar Las tres notas de un alumno y escriba en la salida estándar su nota final.
 */

#include <iostream>
using namespace std;

int main () {
    float  practica, teorica, participacion, final;

    cout<<"Ingrese el valor de practica: ";cin>>practica;
    cout<<"Ingrese el valor de teorica: ";cin>>teorica;
    cout<<"Ingrese el valor de participacion: ";cin>>participacion;

    final = practica*0.3 + teorica*0.6 + participacion*0.1;

    cout<<"La nota final es: "<<final<<endl;
    return 0;
}

/*
 * 8.Escriba un programam que lea de la entrada estandar los dos catetos de un triangulo rectangulo y escriba en la
 * salida estandar su hipotenusa
 */