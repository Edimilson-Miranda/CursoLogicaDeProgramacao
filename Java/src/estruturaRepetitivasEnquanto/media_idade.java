package estruturaRepetitivasEnquanto;

import java.util.Locale;
import java.util.Scanner;

public class media_idade {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double media;
        int idade, soma, cont;

        System.out.println("Digite as idades: ");
        idade = sc.nextInt();

        soma = 0;
        cont = 0;

        while (idade >= 0){
            soma = soma + idade;
            cont ++;

            idade = sc.nextInt();
        }

        if (cont == 0){
            System.out.println("IMPOSSIVEL CALCULAR");
        }
        else {
            media = (double) soma / cont;
            System.out.printf("MEDIA = %.2f%n", media);
        }

        sc.close();
    }
}
