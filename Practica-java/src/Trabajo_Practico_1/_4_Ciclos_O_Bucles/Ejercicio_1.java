package Trabajo_Practico_1._4_Ciclos_O_Bucles;
import java.util.Scanner;
/*
 * getch()	std::cin.get()
 * clrscr()	Usar system("clear") en Linux/Mac o system("cls") en Windows (aunque no es lo más recomendado)
 * kbhit()	Librerías como ncurses en Linux o en Windows
 * 1. Realice un programam que solicite una entrada estandar un entero 1 al 10 y muestre en la salida estandar su tabla de multiplicar
 */

public class Ejercicio_1 {
    public static void main(String[] arg){
        int numero;
        Scanner entrada= new Scanner(System.in);
        do{
            System.out.println("DIGITE O NUMERO:");
            numero=entrada.nextInt();
        }while((numero<1) || (numero>10));

        for(int i=1; i<=20; i++) {
            System.out.println(numero+"*"+i+"="+numero*i);
        }
    }
}
