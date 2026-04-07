package Trabajo_Practico_3.ArrayClasico;
//(NumTerminados4.java) Leer 10 números enteros, almacenarlos en un arreglo y
//determinar en qué posiciones se encuentran los números terminados en 4

public class NumTerminados4 {
    public NumTerminados4() {}

    public static void main(String[] args){
        int[] numeros= new int[10];
        NumMayor mayor = new NumMayor();
        System.out.println("Ingrese 10 Numeros enteros");
        mayor.llenarArr(numeros);

        System.out.println("Posisiones de Numeros Terninados en 4");
        posTerminados4(numeros);

    }
    public static void posTerminados4(int[] arr){
        int n=arr.length;
        for (int i=0; i<n;i++){
            int num=arr[i];
            while (num >= 9){
                num%=10;
            }
            if (num == 4)
                System.out.println(">"+i);
        }
    }
}
