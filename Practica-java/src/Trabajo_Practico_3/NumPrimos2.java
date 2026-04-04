package Trabajo_Practico_3;

//(NumPrimos2.java) Almacenar en un arreglo de 10 posiciones los 10 números
//primos comprendidos entre 100 y 300. Luego mostrarlos en pantalla.

public class NumPrimos2 {
    public NumPrimos2() {}

    public static void main(String[] args) {
        int[] primos = new int[10];
        int n = 0;

        System.out.println("Numeros Primos comprendido entre 100 y 300 en un arreglo de 10");

        for (int i = 100; i <= 300; i++) {
            if (esPrimo(i)){
                primos[n] = i;
                n++;
                if (n>=10)
                    break;
            }
        }
        imprimir(primos);
    }
    public static boolean esPrimo(int num ){
        if (num<2) return false;
        for (int i=2 ; i < Math.sqrt(num)+1 ; i++){
            if (num%i==0)
                return false;
        }
        return true;
    }

    public static void imprimir(int[] arr){
        System.out.print("[");
        int n= arr.length;
        for (int i=0 ; i< n ; i++){
            System.out.print( arr[i]+(i < n-1 ? ", " : " ]"));
        }
    }
}
