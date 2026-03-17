/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package Ejercicio_En_Clase;
import java.util.Scanner;

public class Burbuja{
    public static void main(String[] arg) {
        Scanner entrada = new Scanner(System.in);
        int[] arr = new int[10];
        llenar(arr,10);
        System.out.println("Matriz Original");
        imprimir(arr,10);
        System.out.println("Busco Mayor");
        buscarMayor(arr,10);
        System.out.println( "Busco Menor");
        buscarMenor(arr,10);
        System.out.println( "Matriz Oirdenada Mayor a menor");
        burbujaMayorMenor(arr,10);
        imprimir(arr,10);
        System.out.println("Matriz Oirdenada Mayor a menor");
        burbujaMenorMayor(arr,10);
        imprimir(arr,10);
    }
    public static void imprimir(int arr[],int n) {

        System.out.print("[");
        for (int i = 0; i < n; i++) {
            System.out.print( arr[i]+(i < n-1 ? ", " : " "));
        }
        System.out.println( "]");
    }

    public static void burbujaMayorMenor(int arr[], int n) {
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


    public static void burbujaMenorMayor(int arr[],int n) {
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
    public static void buscarMayor(int arr[], int n) {
        int mayor=arr[0];
        for (int j = 0; j < n ; j++) {
            if (arr[j] >= mayor) {
                mayor= arr[j];
            }
        }
        System.out.println(mayor);
    }
    public static void buscarMenor(int arr[], int n) {
        int menor=arr[0];
        for (int j = 0; j < n; j++) {
            if (arr[j] <= menor) {
                menor = arr[j];
            }
        }
        System.out.println( menor);
    }

    public static void llenar(int arr[],int n) {
        int num;
        for (int i = 0; i < n; i++) {
            num = (int)(Math.random() * 50) + 1;
            arr[i] = num;
        }
    }
}

