import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num1 = scan.nextInt();
        if (100>= num1 && num1 >= 90) {
            System.out.print("A");
        } else if (89>=num1 && num1 >= 80) {
            System.out.print("B");
        } else if (79 >= num1 && num1 >= 70) {
            System.out.print("C");
        } else if (69>= num1 && num1 >= 60) {
            System.out.print("D");
        } else {
            System.out.print("F");
        }
    }
}