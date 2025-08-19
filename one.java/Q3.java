import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter password: ");
        String pass = sc.next();

        if (pass.equals("admin123")) {
            System.out.println("Welcome");
        } else {
            System.out.println("Invalid password");
        }
        sc.close();
    }
}
