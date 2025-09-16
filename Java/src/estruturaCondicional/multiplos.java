package estruturaCondicional;

import java.util.Scanner;

public class multiplos {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x, y;

        System.out.println("Digite dois numeros inteiros: ");
        x = sc.nextInt();
        y = sc.nextInt();

        if (x % y == 0 || y % x == 0){
            System.out.println("São multiplos");
        }
        else {
            System.out.println("Não são multiplos");
        }

        sc.close();
    }
}
