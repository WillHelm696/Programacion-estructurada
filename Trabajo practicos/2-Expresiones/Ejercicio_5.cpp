/*
 * 9. Realize un programa que calcule el valor que toma la sigiente funcion para unos valores dados de x e y:
 */

#include<iostream>
#include<math.h>
using namespace std;
int main() {
    float x,y, resultado;
    cout<<"Ingrese el valor de x: ";cin>>x;
    cout<<"Ingrese el valor de y: ";cin>>y;
    resultado=(sqrt(x))/(pow(y,2)-1);
    cout<<"El resultado es: "<<resultado<<endl;
    return 0;
}
/*
 * 10. Escriba un programa que que calcule las soluciones de una ecuacion d esegundo grado de la forma ax²+bx+c=0
 * teniendo en cuenta que:
 * x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a)
 * x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a)
*/