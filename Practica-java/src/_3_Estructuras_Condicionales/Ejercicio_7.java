package _3_Estructuras_Condicionales;
import java.util.Scanner;
public class Ejercicio_7 {
    public static void main(String[] arg){
        Scanner entrada = new Scanner(System.in);
        int edad;
        System.out.println("Digite su edad");
        edad=entrada.nextInt();
        if(edad>=18 && edad<=25) {
            System.out.println("Su edad esta en el Rango");
        }else {
            System.out.println("Su edad no esta en el Rango");
        }
    }
}
