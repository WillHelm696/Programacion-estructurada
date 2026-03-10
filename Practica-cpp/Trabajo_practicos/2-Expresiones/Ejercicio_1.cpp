/*
* 1. Escribe la sigiente expresion como expresion en C++:
 *  a) a/b + 1
 */
#include <iostream>
using namespace std;

int main() {
 float a,b,resultado;
 cout<<"Ingrese el valor de a: ";cin>>a;
 cout<<"Ingrese el valor de b: ";cin>>b;

 resultado = a/b + 1;
 cout.precision(2);
 cout<<"Resultado: "<<resultado;

 return 0;;
}

/*
 * 2. Escribe la sigiente expresion como expresion en C++:
 *  b) (a+b)/(c+d)
 */
