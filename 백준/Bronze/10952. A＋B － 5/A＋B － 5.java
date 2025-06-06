import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int count = -1;
        int arr_1[] = new int[100000];
        int arr_2[] = new int[100000];

        do {
            count++;
            arr_1[count] = scan.nextInt();
            arr_2[count] = scan.nextInt();
        } while (arr_1[count] != 0 && arr_2[count] != 0);

        for (int i = 0; i < count; i++) {
            System.out.println(arr_1[i] + arr_2[i]);
        }
    }
}