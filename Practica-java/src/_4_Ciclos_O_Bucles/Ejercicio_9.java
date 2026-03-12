package _4_Ciclos_O_Bucles;
import java.util.Scanner;
/*
 * 9 Escriba un programa que calcule el valor 1*2*3*...*n (factorial)
 */


public class Ejercicio_9 {
    public static void main(String[] arg){
        Scanner entrada = new Scanner(System.in);

        int numero, factorial = 1;
        System.out.println("Ingrese un numero: ");
        numero = entrada.nextInt();

        for(int i = 1; i <= numero; i++) {
            factorial *= i;
        }
        System.out.println("El factorial es: "+factorial);
    }
}
/*
 * Escriba un programa que calcule el valor de: 1!+2!+3!+...+n!
 * (Suma de factoriales)
 */