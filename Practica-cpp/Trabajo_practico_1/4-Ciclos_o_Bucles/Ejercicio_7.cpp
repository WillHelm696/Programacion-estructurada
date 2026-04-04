/*
 * . Escriba un programa que calcule el valor de 1+2+3+...+n
 */
#include <iostream>
using namespace std;
int main() {
    int n,suma=0;
    cout<<"Digite el numero de elementos: ";cin>>n;
    for(int i=1; i<=n; i++) {
        suma+=i;
    }
    cout<<"Suma de elementos es: "<<suma<<endl;
}

/*
 * 8. Escriba un progrma que calcule el valor de:
 * 1+3+5+...+2n-1
 */