import java.util.Scanner;

public class While {

        public static void main(String[] args) {
            Scanner s = new Scanner(System.in);

            while (true){
                System.out.println("digite bom dia");
                String bomdia = s.nextLine();
                if (bomdia.toLowerCase().contains("bom dia")){
                    System.out.println("Tenha um bom dia! :)");
                    break;
                }
                System.out.println("por favor me da bom dia ngm me da bomdia:(");
            }

            s.close();
        }

}
