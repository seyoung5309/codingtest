import java.util.Arrays;
import java.util.Scanner;

public class Main {
   public static void main(String[] args) {
       
       Scanner scan = new Scanner(System.in);
       int count = scan.nextInt();
       int []arr = new int[count];
       
       for (int i = 0; i < arr.length; i++) {
           arr[i] = scan.nextInt();
       }
       Arrays.sort(arr);
       
       System.out.print(arr[0]+" "+arr[arr.length-1]);
    }
}
