import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int start = scan.nextInt();
        int[] value = new int[100];
        for (int i = 0; i <= start-1; i++) {
            value[i] = scan.nextInt();
        }
        int a = scan.nextInt();
        int b = 0;
        for (int i = 0; i <= start - 1; i++) {
            if (a == value[i]) {
                b += 1;
            }
        }
        System.out.print(b);
    }
}