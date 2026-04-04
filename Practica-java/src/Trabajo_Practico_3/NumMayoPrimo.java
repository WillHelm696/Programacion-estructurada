package Trabajo_Practico_3;
//(NumMayoPrimo.java) Leer 10 enteros, almacenarlos en un arreglo y determinar en
//qué posición del arreglo está el mayor número primo leído.
public class NumMayoPrimo {
    public static void main(String[] arg){
        int[] numeros= new int[10];
        NumMayor mayor = new NumMayor();
        System.out.println("Ingrese 10 Numeros enteros");
        mayor.llenarArr(numeros);
        int pos=mayorPrimo(numeros);
        if (pos<0){
            System.out.println("No hay primos en el Arreglo");
        }else{
            System.out.println("La posicion del mayor Primo es: "+pos);
        }
    }

    public static int mayorPrimo(int[] arr){
        NumPrimos2 primos = new NumPrimos2();
        int pos = -1;
        int primo = 2;
        int n=arr.length;
        for (int i=0;i<n;i++){
            if(primos.esPrimo(arr[i]))
                if (primo<=arr[i]){
                    primo=arr[i];
                    pos=i;
                }
        }
        return pos;
    }

}
