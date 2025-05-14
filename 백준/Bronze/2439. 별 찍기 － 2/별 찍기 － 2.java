import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        for (int i = num; i>= 1; i--) {
            for (int j = 1; j<=i-1; j++) {
                System.out.print(" ");
            }
            for (int l = i; l <= num; l++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
