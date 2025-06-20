import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();

        for (int i = 1; i < num; i++) {
            for (int j = num; j > i; j--) {
                System.out.print(" ");
            }
            for (int u = 1; u <= i * 2; u++) {
                if (u / 2 != 0) {
                    System.out.print("*");
                }
            }
            System.out.println();
        }
        for (int i = num; i >= 1; i--) {
            for (int j = i; j < num; j++) {
                System.out.print(" ");
            }
            for (int u = i*2; u > 1; u--) {
                if (u / 2 != 0) {
                    System.out.print("*");
                }
            }
                System.out.println();
        }
    }
}
