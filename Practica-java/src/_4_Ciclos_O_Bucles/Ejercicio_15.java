package _4_Ciclos_O_Bucles;
import java.util.Scanner;
import java.util.Random;
/*
 * Ejercicio 15: Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100. El programa
 * debe generar un numero aleatorio en ese mismo rango[1-100],e indicarle al usuario si el numero que dígito es menor o
 * mayor al numero aleatorio, así hasta que lo adivine. y por ultimo mostrarle el numero de intentos que le llevo.
 */


/*
 * Ejercicio 16: Realice un programa que calcule la descomposición en factores primos de un número entero.
 * Por ejemplo: 20 = 2*2*5.
 */
public class Ejercicio_15 {
    public static void main(String[] arg){
        Scanner entrada = new Scanner(System.in);
        Random rand = new Random();

        int numero, dato, contador=0;

        dato = 1 + rand.nextInt(100);
        do {
            System.out.println("Ingresa un numero: ");
            numero = entrada.nextInt();

            if (numero > dato) {
                System.out.println("Digite un numero menor");
            } if (numero < dato) {
                System.out.println("Digite un numero mayor");
            }
            contador++;
        }while(numero != dato);
        System.out.println("Felicidade Adivinaste el numero");
        System.out.println("Numero de intentos:"+contador);

    }
}
