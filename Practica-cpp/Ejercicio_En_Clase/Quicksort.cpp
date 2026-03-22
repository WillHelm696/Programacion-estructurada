#include <iostream>
using namespace std;

void miSwap(int array[],int a, int b) {
    int aux= array [a];
    array[a]=array[b];
    array[b]=aux;
}

int particion(int arr[], int bajo, int alto) {
    int pivot = arr[alto];
    int i= bajo-1;
    for (int j=bajo; j<alto; j++) {
        if (arr[j] <= pivot) {
            i++;
            miSwap(arr,i,j);
/*            cout <<j<<"[";
            for (int i = 0; i < 10; i++) {
                cout << arr[i] << (i < 9 ? ", ":" ]\n");
            }
*/
        }
    }
    miSwap(arr,i+1,alto);
    return(i+1);
}

void quicksort(int arr[], int bajo, int alto) {
    if (bajo < alto) {
        int pivot = particion(arr,bajo,alto);
//        cout << "pivot: " << pivot<< " de " << bajo<<" - "<<alto<<endl;
        quicksort(arr,bajo,pivot-1);
        quicksort(arr,pivot+1,alto);
    }
}

void imprimir(int arr[], int n) {
    cout <<"[";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i < n-1 ? ", ":" ]\n");
    }
}
int main() {
    int arr[10]={6,1,3,7,9,4,8,5,2};
    cout<<"Quicksort"<<endl;
    cout<<"Array : "<<endl;
    imprimir(arr,10);
    cout<<"Array Quicksort"<<endl;
    quicksort(arr,0,9);
    imprimir(arr,10);
    cin.get();
    return 0;
}