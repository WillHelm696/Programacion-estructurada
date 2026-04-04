package Trabajo_Practico_1._4_Ciclos_O_Bucles;
import java.util.Scanner;
/*
 * 13 Hacer un programa que realice la serie fibonaci -> 1 2 3 5 8 13...n
 */
public class Ejercicio_13 {
    public static void main(String[] arg) {
        Scanner entrada = new Scanner(System.in);
        int n = 1, x = 0, y = 1, z = 1;
        System.out.println("digite el numero de elementos: ");
        n = entrada.nextInt();
        System.out.println(z + " ");
        for (int i = 1; i < n; i++) {
            z = x + y;
            System.out.println(z + " ");
            x = y;
            y = z;
        }
    }
}
/*
 * En una clase de 5 alumnos se an realizado 3 examenes y se requiere determinae el numero de:
 * a) Alumnos que aprobaron todos los examenes
 * b) Alumnos que aprobaron almenos un examen
 * c) Alumnos que aprobaron unicamente el ultimo examen
 * Reaice un programa que permita la lectura de los datos y l calculo de las estadisticas
 */
