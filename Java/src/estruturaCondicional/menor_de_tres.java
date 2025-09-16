package estruturaCondicional;

import java.util.Scanner;

public class menor_de_tres {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int nota1, nota2, nota3, menor;

        System.out.print("Primeiro valor: ");
        nota1 = sc.nextInt();
        System.out.print("Segundo valor: ");
        nota2 = sc.nextInt();
        System.out.print("Terceiro valor: ");
        nota3 = sc.nextInt();

        if (nota1 < nota2 && nota1 < nota3){
            menor = nota1;
        }
        else if (nota2 < nota3){
            menor = nota2;
        }
        else {
            menor = nota3;
        }

        System.out.println("MENOR = " + menor);

        sc.close();
    }
}
