import java.util.Scanner;

public class Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a character: ");
        char ch = sc.next().charAt(0);

        if (Character.isUpperCase(ch)) {
            System.out.println("Uppercase");
        } else {
            System.out.println("Not uppercase");
        }
        sc.close();
    }
}
