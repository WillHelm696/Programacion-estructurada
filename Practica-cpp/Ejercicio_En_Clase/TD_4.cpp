#include  <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
void burbujaMayorMenor(int arr[],int);
void burbujaMenorMayor(int arr[],int);
void buscarMayor(int arr[],int);
void buscarMenor(int arr[],int);
void llenar(int arr[],int);
void imprimir(int arr[],int);

int main() {
    int arr[10];
    llenar(arr,10);
    cout<< "Matriz Original"<<endl;
    imprimir(arr,10);
    cout<< "Busco Mayor"<<endl;
    buscarMayor(arr,10);
    cout<< "Busco Menor"<<endl;
    buscarMenor(arr,10);
    cout<< "Matriz Ordenada Mayor a menor"<<endl;
    burbujaMayorMenor(arr,10);
    imprimir(arr,10);
    cout<< "Matriz Ordenada Mayor a menor"<<endl;
    burbujaMenorMayor(arr,10);
    imprimir(arr,10);
    cin.get();
    return 0;


}
void imprimir(int arr[],int n) {
    cout<<"[";
    for (int i = 0; i < n; i++) {
        cout << arr[i]<<(i < n-1 ? ", " : " ");
    }
    cout << "]"<<endl;
}
void burbujaMayorMenor(int arr[], int n) {
    int aux;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}


void burbujaMenorMayor(int arr[],int n) {
    int aux=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] <= arr[j+1]) {
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
}
void buscarMayor(int arr[], int n) {
    int mayor=arr[0];
    for (int j = 0; j < n ; j++) {
        if (arr[j] >= mayor) {
            mayor= arr[j];
        }
    }
    cout <<mayor<<endl;
}
void buscarMenor(int arr[], int n) {
    int menor=arr[0];
    for (int j = 0; j < n; j++) {
        if (arr[j] <= menor) {
            menor = arr[j];
        }
    }
    cout <<menor<<endl;
}

void llenar(int arr[],int n) {
    srand(time(NULL));
    int num;
    for (int i = 0; i < n; i++) {
        int num = rand() % 50 + 1;
        arr[i] = num;
    }
}