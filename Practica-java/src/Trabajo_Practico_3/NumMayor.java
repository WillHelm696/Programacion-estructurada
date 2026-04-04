package Trabajo_Practico_3;
import java.util.Scanner;
//(NumMayor.java) Leer 10 enteros, almacenarlos en un arreglo y determinar en qué
//posición del arreglo está el mayor número leído.

public class NumMayor {

    public NumMayor() {}

    public static void main(String[] arg){
        int numeros[] = new int[10];
        System.out.println("Ingrese 10 Numeros enteros");
        llenarArr(numeros);
        int pos = posMayor(numeros);
        System.out.println("La pocision del mayor numero es : "+ pos);
    }

    public static void llenarArr(int[] arr){
        Scanner sc = new Scanner(System.in);
        for (int i=0 ; i < 10;i++){
            System.out.print(i+":");
            arr[i]= sc.nextInt();
        }
    }
    public static int posMayor(int[] numeros){
        int mayor=numeros[0];
        int pos=0;
        for (int i=1; i< numeros.length ;i++){
            if (mayor < numeros[i]){
                mayor=numeros[i];
                pos=i;
            }
        }
        return pos;
    }

}
