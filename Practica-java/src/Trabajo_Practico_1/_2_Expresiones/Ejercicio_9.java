package Trabajo_Practico_1._2_Expresiones;
import java.util.Scanner;
/*
 * 9. Realize un programa que calcule el valor que toma la sigiente funcion para unos valores dados de x e y:
 */

public class Ejercicio_9 {
    public static void main(String[] arg){
        float x,y, resultado;
        Scanner entrada = new Scanner(System.in);

        System.out.println("Ingrese el valor de x: ");
        x=entrada.nextFloat();
        System.out.println("Ingrese el valor de y: ");
        y=entrada.nextFloat();

        resultado= (float) ((Math.sqrt(x))/(Math.pow(y,2)-1));
        System.out.println("El resultado es: "+resultado);
    }
}
