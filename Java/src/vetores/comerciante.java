package vetores;

import java.util.Locale;
import java.util.Scanner;

public class comerciante {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);


        int N, abaixo, entre, acima;
        double vTotalCompra, vTotalVenda, lucroTotal;

        System.out.print("Serao digitados dados de quantos produtos? ");
        N = sc.nextInt();

        String[] nomes = new String[N];
        double[] pcompras = new double[N];
        double[] pvendas = new double[N];
        double[] porcentagemLucro = new double[N];

        for (int i = 0;i < N; i++){
            System.out.printf("Produto: %d\n", i + 1);
            System.out.print("Nome: ");
             nomes[i] = sc.next();
            System.out.print("Preco de compra: ");
            pcompras[i] = sc.nextDouble();
            System.out.print("Preco de venda: ");
            pvendas[i] = sc.nextDouble();
        }

        for (int i = 0;i < N;i++){
            porcentagemLucro[i] = (double)(pvendas[i] - pcompras[i]) / pcompras[i] * 100.0;
        }

        abaixo = 0;
        entre = 0;
        acima = 0;
        for (int i = 0;i < N;i++){
            if (porcentagemLucro[i] < 10.0){
                abaixo ++;
            }
            else if (porcentagemLucro[i] < 20.0){
                entre ++;
            }
            else{
                acima ++;
            }
        }

        vTotalCompra = 0;
        vTotalVenda = 0;
        for (int i = 0; i < N; i++){
            vTotalCompra = vTotalCompra + pcompras[i];
            vTotalVenda = vTotalVenda + pvendas[i];
        }

        lucroTotal = vTotalVenda - vTotalCompra;

        System.out.println();
        System.out.println("RELATORIO:");
        System.out.println("Lucro abaixo de 10%: " + abaixo);
        System.out.println("Lucro entre 10% e 20%: " + entre);
        System.out.println("Lucro acima de 20%: " + acima);
        System.out.printf("Valor total de compra: %.2f%n", vTotalCompra);
        System.out.printf("Valor total de venda: %.2f%n", vTotalVenda);
        System.out.printf("Lucro total: %.2f%n", lucroTotal);

        sc.close();
    }
}
