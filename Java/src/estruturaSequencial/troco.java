package estruturaSequencial;

import java.util.Locale;
import java.util.Scanner;

public class troco {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double preco, dinheiro, troco;
        int qtdComprada;

        System.out.print("Preco unitario do produto: ");
        preco = sc.nextDouble();
        System.out.print("Quantidade comprada: ");
        qtdComprada = sc.nextInt();
        System.out.print("Dinheiro recebido: ");
        dinheiro = sc.nextDouble();

        troco = dinheiro - preco * qtdComprada;

        System.out.println("Troco = " + String.format("%.2f", troco));

        sc.close();
    }
}
