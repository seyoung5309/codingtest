import java.util.Arrays;

class Solution {
    public int[] solution(String my_string) {
        
        int count = 0;
        String num = "0123456789";
        
        for (int i = 0; i < my_string.length(); i++) {
            for (int j = 0; j < 10; j++) {
                if (my_string.charAt(i) == num.charAt(j)) {
                    count++;
                    break;
                }
            }
        }
        
        int []answer = new int[count];
        
        count = 0; 
        for (int i = 0; i < my_string.length(); i++) {
            for (int j = 0; j < 10; j++) {
                if (my_string.charAt(i) == num.charAt(j)) {
                    answer[count] = j;
                    count++;
                    break;
                }
            }
        }
        
        
        Arrays.sort(answer);
        return answer;
    }
}