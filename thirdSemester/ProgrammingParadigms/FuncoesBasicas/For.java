import java.util.Scanner;

public class For {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("digite 5 coisas");

        for (int i = 0; i < 5; i++) {
            System.out.printf("[%d] valor: ",i);
            s.nextLine();
        }


    }
}
