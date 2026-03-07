package _3_Estructuras_Condicionales;
import java.util.Scanner;
public class Ejercicio_5 {
    public static void main(String[] arg){
        Scanner entrada = new Scanner(System.in);
        char letra;
        System.out.println("Ingrese un caracter: ");
        letra=entrada.next().charAt(0);

        switch(letra) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':System.out.println("Es una vocal minuscula"); break;
            default: System.out.println("No es una vocal minuscula"); break;
        }
    }
}
