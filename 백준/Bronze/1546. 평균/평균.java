import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        double[] score = new double[num];
        double max = 0;

        for (int i = 0; i < num; i++) {
            score[i] = scan.nextDouble();
            if (score[i] > max) {
                max = score[i];
            }
        }
        
        double sum = 0;
        for (int i = 0; i < num; i++) {
            score[i] = (score[i] / max) * 100;
            sum += score[i];
        }

        System.out.println(sum / num);
    }
}