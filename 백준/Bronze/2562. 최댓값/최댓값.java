import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int []arr = new int[9];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = scan.nextInt();
        }
        int []arr1 = Arrays.copyOf(arr, arr.length);
        Arrays.sort(arr);
        System.out.println(arr[8]);
        for (int i = 0; i < arr1.length; i++) {
            if (arr1[i] == arr[8]) {
                    System.out.println(i+1);
            }
        }
    }
}