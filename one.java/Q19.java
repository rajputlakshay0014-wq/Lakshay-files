import java.util.Scanner;

public class Q19 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter fuel type (1=Petrol, 2=Diesel, 3=Electric): ");
        int type = sc.nextInt();

        switch(type) {
            case 1: System.out.println("Petrol"); break;
            case 2: System.out.println("Diesel"); break;
            case 3: System.out.println("Electric"); break;
            default: System.out.println("Invalid choice");
        }
        sc.close();
    }
}
