package Trabajo_Practico_1._3_Estructuras_Condicionales;
import java.util.Scanner;
public class Ejercicio_3 {
    public static void main(String[] arg){
        Scanner entrada = new Scanner(System.in);
        int numero;
        System.out.println("Ingrese un numero: ");
        numero=entrada.nextInt();
        if (numero%2==0) {
            System.out.println("El numero es Par");
        }else if (numero%2==1) {
            System.out.println("El numero es Impar");
        }else {
            System.out.println("El numero es 0");
        }
    }
}
