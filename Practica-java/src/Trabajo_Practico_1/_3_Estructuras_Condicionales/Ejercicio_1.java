package Trabajo_Practico_1._3_Estructuras_Condicionales;
import java.util.Scanner;
public class Ejercicio_1 {
    public static void main(String[] arg){
        Scanner entrada = new Scanner(System.in);
        int numero1, numero2;

        System.out.println("Ingrese un numero a: ");
        numero1=entrada.nextInt();
        System.out.println("Ingrese un numero b: ");
        numero2=entrada.nextInt();

        if (numero1 > numero2) {
            System.out.println("El numero "+numero1+" es mayor que "+numero2);
        }else if (numero2==numero1) {
            System.out.println("Los dos Numeros Son Iguales ");
        }else {
            System.out.println("El numero "+numero2+" es mayor que "+numero1);
        }

    }
}
