import java.util.Scanner;

public class Q13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter three numbers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        if (a <= b && a <= c) {
            System.out.println("Smallest: " + a);
        } else if (b <= c) {
            System.out.println("Smallest: " + b);
        } else {
            System.out.println("Smallest: " + c);
        }
        sc.close();
    }
}
