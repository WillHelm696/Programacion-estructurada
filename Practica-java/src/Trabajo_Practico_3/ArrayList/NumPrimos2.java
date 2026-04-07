package Trabajo_Practico_3.ArrayList;

//(NumPrimos2.java) Almacenar en un arreglo de 10 posiciones los 10 números
//primos comprendidos entre 100 y 300. Luego mostrarlos en pantalla.

import java.util.ArrayList;

public class NumPrimos2 {
    public NumPrimos2() {}

    public static void main(String[] args) {
        ArrayList<Integer> primos = new ArrayList<>();
        System.out.println("Numeros Primos comprendido entre 100 y 300 en un arreglo de 10");
        NumMayoPrimo mayoPrimo = new NumMayoPrimo();
        for (int i = 100; i <= 300; i++) {
            if (mayoPrimo.esPrimo(i)){
                primos.add(i);
                if (primos.size()>=10)
                    break;
            }
        }
        imprimir(primos);
    }

    public static void imprimir(ArrayList<Integer> arr){
        System.out.print("[");
        int n= arr.size();
        for (int i=0 ; i< n ; i++){
            System.out.print( arr.get(i)+(i < arr.size()-1 ? ", " : " ]"));
        }
    }
}
