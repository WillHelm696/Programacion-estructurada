#include <iostream>
using namespace std;

void cuadrado (int vect[], int tam) {
    for (int i = 0; i < tam; i++) {
        vect[i] = vect[i] * vect[i];
    }
}

void imprimir (int vect[], int tam) {
    cout << "[";
    for (int i = 0; i < tam; i++) {
        cout << vect[i] << (i == tam - 1 ? "" : ", ");
    }
    cout << "]" << endl;
}

int main() {
    const int TAM = 5;
    int vect[TAM] = {1, 2, 3, 4, 5};
    cout << "Vector original:" << endl;
    imprimir(vect, TAM);
    cuadrado(vect, TAM);
    cout << "Nuevo vector (al cuadrado):" << endl;
    imprimir(vect, TAM);
    cin.get();
    return 0;
}
