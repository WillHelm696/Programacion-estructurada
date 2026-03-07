package _2_Expresiones;
import java.util.Scanner;
/*
 * 3. Escribe la sigiente expresion como expresion en C++:
 *  c) ( a + b/c ) / ( d + e/f )
 */
public class Ejercicio_3 {
    public static void main(String[] arg){
        float a,b,c,d,e,f,resultado;
        Scanner entrada= new Scanner(System.in);
        System.out.println( "Ingrese el valor de a: ");
        a=entrada.nextFloat();
        System.out.println("Ingrese el valor de b: ");
        b=entrada.nextFloat();
        System.out.println("Ingrese el valor de c: ");
        c=entrada.nextFloat();
        System.out.println("Ingrese el valor de d: ");
        d=entrada.nextFloat();
        System.out.println("Ingrese el valor de e: ");
        e=entrada.nextFloat();
        System.out.println("Ingrese el valor de f: ");
        f=entrada.nextFloat();

        resultado=( a + b/c ) / ( d + e/f );

        System.out.println("\nResultado: "+resultado);
    }
}
