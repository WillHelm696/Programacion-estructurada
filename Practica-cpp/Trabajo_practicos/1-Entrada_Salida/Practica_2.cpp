/*
 * 2.Escriba un programa que lea la entrada estandar el precio de un producto y muestre en la salida el precio del producto
 * al aplicarle el IVA
 */
#include <iostream>
using namespace std;

int main() {
    float precio;
    float iva=1.21;
    cout<<"Ingrese el precio del producto"<<endl;
    cin>>precio;
    precio = precio *iva;
    cout<<"El precio con IVA es "<<precio<<endl;
    return 0;
}
