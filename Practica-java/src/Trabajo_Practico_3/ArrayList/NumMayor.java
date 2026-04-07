package Trabajo_Practico_3.ArrayList;
import java.util.ArrayList;
import java.util.Scanner;
//(NumMayor.java) Leer 10 enteros, almacenarlos en un arreglo y determinar en qué
//posición del arreglo está el mayor número leído.

public class NumMayor {

    public NumMayor() {}

    public static void main(String[] arg){
        ArrayList<Integer> numeros = new ArrayList<>();
        System.out.println("Ingrese 10 Numeros enteros");
        llenarArr(numeros,10);
        int pos = posMayor(numeros);
        System.out.println("La pocision del mayor numero es : "+ pos);
    }

    public static void llenarArr(ArrayList<Integer> arr,int length){
        Scanner sc = new Scanner(System.in);
        for (int i=0 ; i < length;i++){
            System.out.print(i+":");
            int num = sc.nextInt();
            arr.add(num);
        }
    }
    public static int posMayor(ArrayList<Integer> arr){
        int mayor=arr.get(0);
        int pos=0;
        for (int i=1; i< arr.size() ;i++){
            if (mayor < arr.get(i)){
                mayor = arr.get(i);
                pos=i;
            }
        }
        return pos;
    }

}
