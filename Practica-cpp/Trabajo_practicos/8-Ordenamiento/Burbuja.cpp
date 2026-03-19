//
#include <iostream>
#include <vector>
using namespace std;

void imprimir(int arr[], int);


int main() {
    int arr[] = {9, 5, 7 , 6, 3, 1, 2, 8, 0};
    int aux;
    cout << "Areglo: " << endl;
    imprimir(arr, 9);

    for (int i = 0; i < 9; i++) {
        for (int j = 0 ; j < 8-i; j++) {
            if (arr[j] > arr[j+1]) {
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
    cout << "Ordenamiento por Bubuja: Acendente"<<endl;
    imprimir(arr, 9);

    for (int i = 0; i < 9; i++) {
        for (int j = 0 ; j < 8-i; j++) {
            if (arr[j] < arr[j+1]) {
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
    cout << "Ordenamiento por Bubuja: Decendente"<<endl;
    imprimir(arr, 9);


    cin.get();
    return 0;
}

void imprimir(int arr[], int n) {
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i < n-1 ? ", " : "]\n");
    }
}