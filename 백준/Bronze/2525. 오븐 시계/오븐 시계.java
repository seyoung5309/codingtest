import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();
        
        int time3 = (b + c) / 60;
	    int time1 = (a + time3) % 24;
	    int time2 = (b + c) % 60;
        
        System.out.print(time1+" ");
        System.out.println(time2);

    }
}
