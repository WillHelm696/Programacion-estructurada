package _1_Entrada_Salida;
import java.util.Scanner;
/*
 * 3. Realice un programa que lea la entrada estandar los sigientes datos de una persona:
 *      Edad: dato de tipo entero.
 *      Sexo: dato de tipo caracter.
 *      Altura en metros: dato de tipo real.
 * Tras leer los datos, el programa debe mostrarlos en la salida estandar.
 */

public class Ejercicio_3 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int edad;
        char sexo;
        float altura;
        System.out.println( "Ingrese su Edad, Sexo, Altura: ");

        System.out.println("edad: ");
        edad=entrada.nextInt();

        System.out.println("Sexo: ");
        // .next() lee la palabra y .charAt(0) toma el primer carácter
        sexo=entrada.next().charAt(0);

        System.out.println( "Altura: ");
        altura=entrada.nextFloat();

        System.out.println("la edad: "+edad+", sexo:"+sexo+", altura:"+altura);

    }
}

/*
 * 4. Ejecute el programa del ejercicio anterior con entradas erroneas. Por ejemplo, introdusca un dato de tipo caracter
 * cuando se espera un dato de tipo entero.
 */
