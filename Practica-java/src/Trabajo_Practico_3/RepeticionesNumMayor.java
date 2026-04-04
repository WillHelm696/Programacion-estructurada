package Trabajo_Practico_3;

//(RepeticionesNumMayor.java) Leer 10 números enteros, almacenarlos en un
//arreglo y determinar cuántas veces está repetido el mayor.

public class RepeticionesNumMayor {
    public static void main(String[] args){
        int[] numeros= new int[10];
        NumMayor mayor = new NumMayor();
        System.out.println("Ingrese 10 Numeros enteros");
        mayor.llenarArr(numeros);
        int numMayor = numeros[mayor.posMayor(numeros)];

        System.out.println("Cantidad de repeticiones del numero mayor :"+numMayor);
        int cant = numRepecion(numMayor,numeros);
        System.out.println(">"+cant);
    }
    public static int numRepecion(int num, int[] arr){
        int n=arr.length;
        int rep=0;
        for (int i=0;i<n;i++){
            if (arr[i]==num)
                rep+=1;
        }
        return rep;
    }
}
