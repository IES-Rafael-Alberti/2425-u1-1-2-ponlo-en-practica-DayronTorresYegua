import java.util.Scanner;

public class programa {
    public static String entrdanombre() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Introduce el nombre de usuario: ");
        String nombre = scanner.nextLine();
        scanner.close();
        return nombre;
    }

    public static void salidaNombre(String nombre) {
        System.out.println("Hola " + nombre + ". Este programa está hecho en el lenguaje de programación: Java");
    }

    public static void main(String[] args) {
        // Entrada
        String nombre = entrdanombre();
        // Salida
        salidaNombre(nombre);
    }
}