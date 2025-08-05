import java.util.Arrays;

class Solution {
    public int[] solution(int n) {
        int[] answer = new int[num(n)];
        int count = 0; 
        
        for (int i = 0; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                if (i * j == n) {
                    if (i == j) {
                        answer[count] = i;
                        count++;
                    } else {
                        answer[count] = i;
                        count++;
                        answer[count] = j;
                        count++;
                    }
                }
            }
        }
        Arrays.sort(answer);
        return answer;
    }
    public static int num(int n) {
        int count = 0; 
        for (int i = 0; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                if (i * j == n) {
                    if (i == j) {
                        count++;
                    } else {
                        count += 2;
                    }
                }
            }
        }
        return count;
    }
}