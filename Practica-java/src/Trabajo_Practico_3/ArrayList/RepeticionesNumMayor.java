package Trabajo_Practico_3.ArrayList;

//(RepeticionesNumMayor.java) Leer 10 números enteros, almacenarlos en un
//arreglo y determinar cuántas veces está repetido el mayor.

import java.util.ArrayList;

public class RepeticionesNumMayor {
    public static void main(String[]     args){
        ArrayList<Integer> numeros = new ArrayList<>();
        NumMayor mayor = new NumMayor();
        System.out.println("Ingrese 10 Numeros enteros");
        mayor.llenarArr(numeros,10);
        int numMayor = numeros.get(mayor.posMayor(numeros));

        System.out.println("Cantidad de repeticiones del numero mayor :"+numMayor);
        int cant = numRepecion(numMayor,numeros);
        System.out.println(">"+cant);
    }
    public static int numRepecion(int num, ArrayList<Integer> arr){
        int n=arr.size();
        int rep=0;
        for (int i=0;i<n;i++){
            if (arr.get(i)==num)
                rep+=1;
        }
        return rep;
    }
}
