import java.util.Scanner;
import java.util.Arrays;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int []n = new int[30];
        for (int i = 0; i < 28; i++) {
			n[i] = scan.nextInt();
		}
		Arrays.sort(n);
		
		int []ch = new int[30];
		for (int i = 0; i < 30; i++) {
			ch[i] = i + 1;
		}
		
		for (int i = 0; i < 30; i++) {
			for (int j = 0; j < 30; j++) {
				if (n[i] == ch[j]) {
					ch[j] = 0; 
				}
			}
		} 
		
		for (int i = 0; i < 30; i++) {
			if (ch[i] != 0) {
				System.out.println(ch[i]);
			}
		}
	}
}