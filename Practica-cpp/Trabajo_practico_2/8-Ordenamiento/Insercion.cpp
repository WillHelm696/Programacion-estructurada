//
#include <iostream>
using namespace std;

void imprimir(int arr[], int n);

int main () {
    int arr[10]={5, 6, 7, 9, 4, 3, 1, 8, 2};
    int pos,aux;
    cout << "Arreglo: "<< endl;
    imprimir(arr,10);

    for (int i = 0; i < 10; i++) {
        pos = i;
        aux = arr[i];
        while ((pos>0) && arr[pos-1] > aux) {
            arr[pos] = arr[pos-1];
            pos--;
        }
        arr [pos] = aux;
    }
    cout << "Arreglo Ordenado por insercio: Acendente"<< endl;
    imprimir(arr,10);
    for (int i = 0; i < 10; i++) {
        pos = i;
        aux = arr[i];
        while ((pos>0) && arr[pos-1] < aux) {
            arr[pos] = arr[pos-1];
            pos--;
        }
        arr [pos] = aux;
    }
    cout << "Arreglo Ordenado por insercio: Decendente"<< endl;
    imprimir(arr,10);
    cin.get();
    return 0;
}

void imprimir(int arr[], int n) {
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i < n-1 ? ", " : "]\n");
    }
}