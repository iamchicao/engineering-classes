import java.util.Scanner;

public class week {
    public static void main(String[] args) {
        System.out.println("Seja bem-vindo a escolha de dias semanais");
        System.out.println("Digite um número de 1 a 7:");
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        String dia;

        if(x == 1) {
            dia = "Domingo";
        }
        else if( x == 2) {
            dia = "Segunda";
        }
        else if( x == 3) {
            dia = "Terça";
        }
        else if( x == 4) {
            dia = "Quarta";
        }
        else if( x == 5) {
            dia = "Quinta";
        }
        else if( x == 6) {
            dia = "Sexta";
        }
        else if( x == 7) {
            dia = "Sábado";
        }
        else {
            dia = "O valor digitado é inválido";
        }
        System.out.println("Dia da semana: " + dia);
        sc.close();
    }
}
