import java.util.Scanner;

public class DoWhile {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int a = 0;

        do {
            System.out.println("digite o numero 1: ");
            try {
//                a = s.nextInt();
                a = Integer.parseInt(s.nextLine());
            }catch (Exception e){
                System.out.println("opa voce não digitou um numero");
//                s.next();
            }
            if (a!=1){
                System.out.println("e nao digitou o numero 1, tente denovo");
            }
        } while(a!=1);

        System.out.println("\n");

    }
}
