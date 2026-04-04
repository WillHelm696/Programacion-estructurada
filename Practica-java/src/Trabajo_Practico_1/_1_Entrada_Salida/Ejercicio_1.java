package Trabajo_Practico_1._1_Entrada_Salida;
import java.util.Scanner;
/*
 * 1. Escriba Un programa la entrada estandar de dos numeros y muestre
 * en la salida estandar su suma, resta, multiplicacion y division
 */

public class Ejercicio_1 {
    public static void main(String[] args) {

        int n1,n2, suma=0,resta=0,multiplicacion=0, division=0;
        Scanner entrada = new Scanner(System.in);

        System.out.println("Ingrese 2 numeros: ");

        n1=entrada.nextInt();
        n2=entrada.nextInt();

        suma=n1+n2;
        resta=n1-n2;
        multiplicacion=n1*n2;
        division=n1/n2;

        System.out.println("La suma de "+n1+"+"+n2+" es "+suma);
        System.out.println("La resta de "+n1+" y "+n2 +" es: "+resta);
        System.out.println("La multiplicacion de "+n1+" y "+n2 +" es: "+multiplicacion);
        System.out.println("La division de "+n1+" y "+n2+" es: "+division);
    }

}
