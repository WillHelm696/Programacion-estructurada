package _2_Expresiones;
import java.util.Scanner;
/* 1. Escribe la sigiente expresion como expresion en C++:
*  a) a/b + 1
*/
public class Ejercicio_1 {
    public static void main(String[] arg) {
        float a,b,resultado;
        Scanner entrada = new Scanner(System.in);
        System.out.println( "Ingrese el valor de a: ");
        a=entrada.nextFloat();
        System.out.println( "Ingrese el valor de b: ");
        b=entrada.nextFloat();

        resultado = a/b + 1;
        System.out.println("Resultado: "+resultado);
    }
}
