package estruturaCondicional;

import java.util.Locale;
import java.util.Scanner;

public class dardo {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double distacia1, distancia2, distancia3, maior;


        System.out.println("Digite as tres distancias: ");
        distacia1 = sc.nextDouble();
        distancia2 = sc.nextDouble();
        distancia3 = sc.nextDouble();

        if (distacia1 > distancia2 && distacia1 > distancia3){
            maior = distacia1;
        }
        else if (distancia2 > distancia3) {
            maior = distancia2;
        }
        else {
            maior = distancia3;
        }

        System.out.printf("MAIOR DISTANCIA = %.2f%n", maior);

        sc.close();
    }
}
