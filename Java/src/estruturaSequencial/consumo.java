package estruturaSequencial;

import java.util.Locale;
import java.util.Scanner;

public class consumo {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        // declarando as variaveis.
        int distanciaPercorrida;
        double combustivelGastos, comsumo;

        // solicitando para usuario digita os dados.
        System.out.print("Distancia percorrida: ");
        distanciaPercorrida = sc.nextInt();
        System.out.print("Combustivel gastos: ");
        combustivelGastos = sc.nextDouble();

        comsumo = distanciaPercorrida / combustivelGastos;

        System.out.println("Consumo medio = " + String.format("%.3f",comsumo));

        sc.close();

    }
}
