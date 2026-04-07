package Trabajo_Practico_3.ArrayList;
//(NumTerminados4.java) Leer 10 números enteros, almacenarlos en un arreglo y
//determinar en qué posiciones se encuentran los números terminados en 4

import java.util.ArrayList;

public class NumTerminados4 {
    public NumTerminados4() {}

    public static void main(String[] args){
        ArrayList<Integer> numeros = new ArrayList<>();
        NumMayor mayor = new NumMayor();
        System.out.println("Ingrese 10 Numeros enteros");
        mayor.llenarArr(numeros,10);

        System.out.println("Posisiones de Numeros Terninados en 4");
        posTerminados4(numeros);

    }
    public static void posTerminados4(ArrayList<Integer> arr){
        for (int i=0; i<arr.size();i++){
            int num=arr.get(i);
            while (num >= 9){
                num%=10;
            }
            if (num == 4)
                System.out.println(">"+i);
        }
    }
}
