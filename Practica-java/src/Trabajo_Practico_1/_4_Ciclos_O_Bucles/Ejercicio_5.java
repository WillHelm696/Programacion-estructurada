package Trabajo_Practico_1._4_Ciclos_O_Bucles;
import java.util.Scanner;

/*
 * Esribe un programa qu lea los valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0
 * El progrma debe entregar la suma de los valores mayores a 0 introducidos
 */

public class Ejercicio_5 {
    public static void main(String[] arg){
        Scanner entrada = new Scanner(System.in);
        int numero,suma=0;
        do {
            System.out.println("Ingrese un numero: ");
            numero = entrada.nextInt();
            if (numero>0) {
                suma += numero;
            }

        }while (((numero < 20) || (numero > 30)) && (numero != 0 ));
        System.out.println("La suma es:"+suma);
    }
}

/*
 * 6 Escriba un programa que calcule x^y donde tanto x como y son enteros positivos, sin utilizar la funcion pow.
 */