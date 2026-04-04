package Trabajo_Practico_1._2_Expresiones;
import java.util.Scanner;
/*
 * 7. La calificación final de un estudiante es la media ponderada de tres notas: La nota de prácticas que cuenta un 30%
 * del total, la nota teórica que cuenta un 60% y La nota de participación que cuenta el 10% restante. Escriba un
 * programa que Lea de La entrada estándar Las tres notas de un alumno y escriba en la salida estándar su nota final.
 */
public class Ejercicio_7 {
    public static void main(String[] arg){
        float  practica, teorica, participacion, n_final;
        Scanner entrada = new Scanner(System.in);
        System.out.println( "Ingrese el valor de practica: ");
        practica=entrada.nextFloat();
        System.out.println( "Ingrese el valor de teorica: ");
        teorica=entrada.nextFloat();
        System.out.println( "Ingrese el valor de participacion: ");
        participacion=entrada.nextFloat();

        n_final = (float) (practica*0.3 + teorica*0.6 + participacion*0.1);

        System.out.println( "La nota final es: "+n_final);
    }
}
