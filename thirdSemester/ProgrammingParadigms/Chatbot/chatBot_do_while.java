import java.util.Scanner;

public class chatBot_do_while {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int dia = 0;
        do {
            System.out.println("""
                    \nQual o seu dia da semana favorito?
                    1 - Segunda
                    2 - Terça
                    3 - Quarta
                    4 - Quinta
                    5 - Sexta
                    6 - Sábado
                    7 - Domingo
                    0 - Pra Sair
                        """);

            String str = scanner.next();
            dia = Integer.parseInt(str);

            switch (dia) {
                case 0:
                    System.out.println("Saindo do Java");
                    break;
                case 1:
                    System.out.println("Você gosta de Segunda-feira!");
                    break;
                case 2:
                    System.out.println("Você gosta de Terça-feira!");
                    break;
                case 3:
                    System.out.println("Você gosta de Quarta-feira!");
                    break;
                case 4:
                    System.out.println("Você gosta de Quinta-feira!");
                    break;
                case 5:
                    System.out.println("Você gosta de Sexta-feira!");
                    break;
                case 6:
                    System.out.println("Você gosta de Sábado!");
                    break;
                case 7:
                    System.out.println("Você gosta de Domingo!");
                    break;
                default:
                    System.out.println("Dia não reconhecido");
                    break;
            }
        } while (dia != 0);

        scanner.close();
    }
}
