package _4_Ciclos_O_Bucles;
import java.util.Scanner;
/*
 * Realice un programam que calcule y muestre en la salida estandar la suma de los cuadrados de los 10 primeros enteros mayores que cero
 */
public class Ejercicio_3 {
    public static void main(String[] arg){
        Scanner entrada = new Scanner(System.in);
        int suma = 0,cuadrado;

        for (int i = 1; i <= 10; i++) {
            cuadrado = i * i;
            suma+=cuadrado;

        }
        System.out.println("EL resultado de la suma es:"+suma);
    }
}
