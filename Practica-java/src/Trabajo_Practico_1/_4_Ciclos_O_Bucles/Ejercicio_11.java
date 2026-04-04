package Trabajo_Practico_1._4_Ciclos_O_Bucles;
import java.util.Scanner;
import java.lang.Math;
/*
 * 11. Escriba un programa que calcule el valor de 2^1+2^2+2^3+...+2^n
 */
public class Ejercicio_11 {
    public static void main(String[] arg){
        Scanner entrada = new Scanner(System.in);
        int elevacion=0,suma=0,n;
        System.out.println("Ingrese un numero de elementos a sumar : ");
        n=entrada.nextInt();

        for(int i=1;i<=n;i++) {
            elevacion = (int) Math.pow(2,i);
            suma+=elevacion;
        }
        System.out.println("El la suma total es es: "+suma);
    }
}

/*
 * Hacer un programa que calcule el rsultao de la sigiente expresion: 1-2+3-4+5-6+...n
 */

