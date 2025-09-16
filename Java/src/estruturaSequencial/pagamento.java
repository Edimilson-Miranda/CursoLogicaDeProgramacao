package estruturaSequencial;

import java.util.Locale;
import java.util.Scanner;

public class pagamento {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double valorHora, pagamento;
        int horasTrabalhadas;
        String nome;

        System.out.print("Nome: ");
        nome = sc.nextLine();
        System.out.print("Valor por hora: ");
        valorHora = sc.nextDouble();
        System.out.print("Horas trabalhadas: ");
        horasTrabalhadas = sc.nextInt();


        pagamento = valorHora * horasTrabalhadas;

        System.out.println("O pagamento para " + nome + " deve ser " + String.format("%.2f", pagamento));

        sc.close();
    }
}
