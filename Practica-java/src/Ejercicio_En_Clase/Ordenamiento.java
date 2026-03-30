package Ejercicio_En_Clase;

import java.util.Scanner;

public class Ordenamiento {
    public static void main( String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Ingrese la cantidad de elementos: ");
        int n = sc.nextInt();
        int a[] = new int[n];
        int b[] = new int[n];

        Burbuja ord1 = new Burbuja();
        Quicksort ord2 = new Quicksort();

        Persona per1 = new Persona();
        Persona per2 = new Persona();
        Persona pers[] = new Persona[n];



        ord1.llenar(a);
        System.arraycopy(a,0,b,0,n);
        //Quicksort.imprimir(b);
        ord1.imprimir(a);

        System.out.println("Lista Ordenado Burbuja");
        ord1.burbujaMayorMenor(a);
        ord1.imprimir(a);

        System.out.println("Lista Ordenado Quicksort");
        ord2.quicksort(b,0,b.length-1);
        ord2.imprimir(b);
    }
}
