package Trabajo_Practico_1._3_Estructuras_Condicionales;
import java.util.Scanner;

/*
 * 11. Hacer un programa que simula un cajero automatico con un saldo inicial de 1000 Dolares.
 */

public class Ejercicio_11 {
    public static void main(String[] arg) {
        Scanner entrada = new Scanner(System.in);

        int saldo_inicia = 1000, opc;
        float saldo, extra, retiro;

        System.out.println("Bienvenida a su carejo Virtual ");
        System.out.println("1. Ingresar dinero en cuenta ");
        System.out.println("2. Retirar dinero en cuenta ");
        System.out.println("3. Salir ");
        System.out.print("Ingrese una opcion: ");
        opc = entrada.nextInt();

        switch(opc) {
            case 1:
                System.out.println("Digite la cantidad de dinero a ingresar: ");
                extra = entrada.nextFloat();

                saldo = saldo_inicia + extra;
                System.out.println("Dinero de la cuenta: " + saldo);

                break;
            case 2:
                System.out.println("Digite la cantidad de dinero que va a retirar");
                retiro=entrada.nextFloat();

                if (saldo_inicia < retiro) {
                    System.out.println("No tiene es cantidad de dinero");
                } else {
                    saldo = saldo_inicia - retiro;
                    System.out.println("Dinero de la cuenta: " + saldo);
                }
            case 3:
                break;
        }
    }
}


