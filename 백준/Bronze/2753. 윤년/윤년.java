import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int year = scan.nextInt();
        if (year % 400 == 0) {
            System.out.print("1");
        } else if (year % 100 == 0) {
            System.out.print("0");
        } else if (year % 4 == 0)  {
            System.out.print("1");
        } else {
            System.out.print("0");
        } 

    }
}

