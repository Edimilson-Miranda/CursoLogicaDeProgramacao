package estruturaRepetitivasPara;

import java.util.Locale;
import java.util.Scanner;

public class experiencias {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int n, ratos, sapos, coelhos, qtdcobaias, total;
        char tipo;
        double pratos, psapos, pcoelhos;


        System.out.print("Quantos casos de teste serao digitados? ");
        n = sc.nextInt();

        ratos = 0;
        sapos = 0;
        coelhos = 0;

        for (int i = 0;i< n;i++){
            System.out.print("Quantidade de cobaias: ");
            qtdcobaias = sc.nextInt();
            System.out.print("Tipo de cobaia: ");
            tipo = sc.next().charAt(0);

            if (tipo == 'r'){
                ratos = ratos + qtdcobaias;
            }
            else  if (tipo == 's'){
                sapos = sapos + qtdcobaias;
            }
            else {
                coelhos = coelhos + qtdcobaias;
            }
        }

        total = ratos + sapos + coelhos;
        pcoelhos = (double)(coelhos / total) * 100.0;
        pratos = (double)(ratos / total) * 100.0;
        psapos = (double)(sapos / total) * 100.0;

        System.out.println();
        System.out.println("RELATORIO FINAL:");
        System.out.println("Total: " + total + "  cobaias");
        System.out.println("Total de coelhos: " + coelhos);
        System.out.println("Total de ratos: " + ratos);
        System.out.println("Total de sapos: " + sapos);
        System.out.printf("Percentual de coelhos: %.2f%n", pcoelhos);
        System.out.printf("Percentual de ratos: %.2f%n", pratos);
        System.out.printf("Percentual de sapos: %.2f%n", psapos);

        sc.close();
    }
}
