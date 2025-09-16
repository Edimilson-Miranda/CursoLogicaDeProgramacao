package estruturaCondicional;

import java.util.Locale;
import java.util.Scanner;

public class troco_verificado {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double preco, dinheiroRecebido, troco, resto;
        int qtdComprada;

        System.out.print("Preço unitário do produto: ");
        preco = sc.nextDouble();
        System.out.print("Quantidade comprada: ");
        qtdComprada = sc.nextInt();
        System.out.print("Dinheiro recebido: ");
        dinheiroRecebido = sc.nextDouble();

        if (dinheiroRecebido >= (preco * qtdComprada)){
            troco = dinheiroRecebido - preco * qtdComprada;
            System.out.printf("TROCO = %.2f%n", troco);
        }
        else {
            resto = preco * qtdComprada - dinheiroRecebido;
            System.out.printf("DINHEIRO INSUFICIENTE. FALTAM %.2f%n", resto);
        }

        sc.close();
    }
}
