package estruturaSequencial;

import java.util.Locale;
import java.util.Scanner;

public class circulo {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double r, area;

        System.out.print("Digite o valor do raio do circulo: ");
        r = sc.nextDouble();

        area = Math.PI * r * r;

        System.out.println("AREA = " + String.format("%.3f", area));

        sc.close();
    }
}
