package Trabajo_Practico_1._4_Ciclos_O_Bucles;
import java.util.Scanner;
/*
 * . Escriba un programa que calcule el valor de 1+2+3+...+n
 */
public class Ejercicio_7 {
    public static void main(String[] arg){
        Scanner entrada = new Scanner(System.in);
        int n,suma=0;
        System.out.println("Digite el numero de elementos: ");
        n=entrada.nextInt();
        for(int i=1; i<=n; i++) {
            suma+=i;
        }
        System.out.println("Suma de elementos es: "+suma);
    }
}
/*
 * 8. Escriba un progrma que calcule el valor de:
 * 1+3+5+...+2n-1
 */