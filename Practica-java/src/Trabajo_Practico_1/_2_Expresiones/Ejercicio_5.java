package Trabajo_Practico_1._2_Expresiones;
import java.util.Scanner;
/*
 * 5. Escriba un fragmento de programa que intercambie los valores de dos variables
 */
public class Ejercicio_5 {
    public static void main(String[] arg){
        int a,b,aux;
        Scanner entrada = new Scanner(System.in);
        System.out.println("Ingrese el primer valor x: ");
        a=entrada.nextInt();
        System.out.println("Ingrese el primer valor y: ");
        b=entrada.nextInt();

        aux=a; a=b; b=aux;

        System.out.println( "El nuevo valor de x es "+a);
        System.out.println( "El nuevo valor de y es "+b);
    }
}
