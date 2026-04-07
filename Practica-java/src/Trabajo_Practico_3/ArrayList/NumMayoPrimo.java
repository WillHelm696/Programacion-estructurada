package Trabajo_Practico_3.ArrayList;

import java.util.ArrayList;

//(NumMayoPrimo.java) Leer 10 enteros, almacenarlos en un arreglo y determinar en
//qué posición del arreglo está el mayor número primo leído.
public class NumMayoPrimo {
    public static void main(String[] arg){
        ArrayList<Integer> numeros = new ArrayList<>();
        System.out.println("Ingrese 10 Numeros enteros");
        NumMayor mayor = new NumMayor();
        mayor.llenarArr(numeros,10);
        int pos=mayorPrimo(numeros);
        if (pos<0){
            System.out.println("No hay primos en el Arreglo");
        }else{
            System.out.println("La posicion del mayor Primo es: "+pos);
        }
    }

    public static int mayorPrimo(ArrayList<Integer> arr){
        int pos = -1;
        int primo = 2;
        int n=arr.size();
        for (int i=0;i<n;i++){
            if(esPrimo(arr.get(i)))
                if (primo<=arr.get(i)){
                    primo=arr.get(i);
                    pos=i;
                }
        }
        return pos;
    }
    public static boolean esPrimo(int num ){
        if (num<2) return false;
        for (int i=2 ; i < Math.sqrt(num)+1 ; i++){
            if (num%i==0)
                return false;
        }
        return true;
    }
}
