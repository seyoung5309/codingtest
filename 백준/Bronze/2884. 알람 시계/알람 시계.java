import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int h = scan.nextInt();
        int m = scan.nextInt();
        
        if (m >= 45) {
            m-= 45;
            System.out.print(h+" ");
            System.out.print(m);
        } else {
            m += 15;
            if(h==0)
                h = 23;
            else 
                h -= 1;
            System.out.print(h);
            System.out.print(" "+m);
        }
    }
}