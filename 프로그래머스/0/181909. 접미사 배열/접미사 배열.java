import java.util.Arrays;

class Solution {
    public String[] solution(String my_string) {
        String[] answer = new String[my_string.length()];
        
        for (int i = 0; i < answer.length; i++) {
            answer[i] = "";
            for (int j = my_string.length()-1; j >= i; j--) {
                answer[i] = my_string.charAt(j) + answer[i];
            }
        }
        
        Arrays.sort(answer);
        
        return answer;
    }
}