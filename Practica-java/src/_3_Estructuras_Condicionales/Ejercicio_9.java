package _3_Estructuras_Condicionales;
import java.util.Scanner;

public class Ejercicio_9 {
    public static void main(String[] arg){
        Scanner entrada = new Scanner(System.in);
        int numero,unidad,centena, decena,millar;
        System.out.println("Ingrese un numero: ");
        numero=entrada.nextInt();

        unidad = numero % 10;numero /= 10;
        decena = numero % 10;numero /= 10;
        centena = numero % 10;numero /= 10;
        millar = numero % 10;numero /= 10;

        switch (millar) {
            case 1:System.out.print("M");break;
            case 2:System.out.print("MM");break;
            case 3:System.out.print("MMM");break;
        }
        switch (centena) {
            case 1:System.out.print("C");break;
            case 2:System.out.print("CC");break;
            case 3:System.out.print("CCC");break;
            case 4:System.out.print("CD");break;
            case 5:System.out.print("D");break;
            case 6:System.out.print("DC");break;
            case 7:System.out.print("DCC");break;
            case 8:System.out.print("DCCC");break;
            case 9:System.out.print("CM");break;
        }
        switch (decena) {
            case 1:System.out.print("X");break;
            case 2:System.out.print("XX");break;
            case 3:System.out.print("XXX");break;
            case 4:System.out.print("XL");break;
            case 5:System.out.print("L");break;
            case 6:System.out.print("LX");break;
            case 7:System.out.print("LXX");break;
            case 8:System.out.print("LXX");break;
            case 9:System.out.print("XC");break;
        }
        switch (unidad) {
            case 1:System.out.print("I");break;
            case 2:System.out.print("II");break;
            case 3:System.out.print("III");break;
            case 4:System.out.print("IV");break;
            case 5:System.out.print("V");break;
            case 6:System.out.print("VI");break;
            case 7:System.out.print("VII");break;
            case 8:System.out.print("VIII");break;
            case 9:System.out.print("IX");break;
        }
    }
}
