import java.util.Scanner;

public class weekSwitchCase {
    public static void main(String[] args) {
        System.out.println("Seja bem-vindo a escolha de dias semanais");
        System.out.println("Digite um número de 1 a 7:");
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        String dia;

        switch (x) {
            case 1:
                dia = "Domingo";
                break;
            case 2:
                dia = "Segunda";
                break;
            case 3:
                dia = "Terça";
                break;
            case 4:
                dia = "Quarta";
                break;
            case 5:
                dia = "Quinta";
                break;
            case 6:
                dia = "Sexta";
                break;
            case 7:
                dia = "Sábado";
                break;
            default:
                dia = "O valor digitado é inválido";
                break;
        }
        System.out.println("Dia da semana: " + dia);
        sc.close();
    }
}
