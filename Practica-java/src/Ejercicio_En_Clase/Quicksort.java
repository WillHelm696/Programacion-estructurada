package Ejercicio_En_Clase;

public class Quicksort {
    public static void main() {
        int[] arr={6,1,3,7,9,4,8,5,2};
        System.out.println("Quicksort");
        System.out.println("Array : ");
        imprimir(arr);
        System.out.println("Array Quicksort");
        quicksort(arr,0,8);
        imprimir(arr);
    }
    public static void miSwap(int array[],int a, int b) {
        int aux= array [a];
        array[a]=array[b];
        array[b]=aux;
    }

    public static int particion(int arr[], int bajo, int alto) {
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

    public static void quicksort(int arr[], int bajo, int alto) {
        if (bajo < alto) {
            int pivot = particion(arr,bajo,alto);
//        cout << "pivot: " << pivot<< " de " << bajo<<" - "<<alto<<endl;
            quicksort(arr,bajo,pivot-1);
            quicksort(arr,pivot+1,alto);
        }
    }

    public static void imprimir(int arr[]) {
        int n = arr.length;
        System.out.print("[");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + (i < n-1 ? ", ":" ]\n"));
        }
    }
}
