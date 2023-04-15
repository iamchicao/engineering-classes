import java.util.Scanner;

public class scanner {
    public static void main(String[] args) {
        System.out.println("Digite um 3 números e entre eles aperte a tecla ENTER");
        Scanner sc = new Scanner(System.in);
        System.out.println("Dados Digitados: ");
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        String s3 = sc.nextLine();

        System.out.println(s1);
        System.out.println(s2);
        System.out.println(s3);

        sc.close();
    }
}
