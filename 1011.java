import java.io.IOException;
import java.util.Scanner; 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        /**
         * Escreva a sua solução aqui
         * Code your solution here
         * Escriba su solución aquí
         */
    Scanner sc = new Scanner(System.in);
    double r = sc.nextDouble();   
    double x = (4.0/3.0) * 3.14159 * r*r*r ;
    System.out.printf("VOLUME = %.3f\n",x);
    }
 
}