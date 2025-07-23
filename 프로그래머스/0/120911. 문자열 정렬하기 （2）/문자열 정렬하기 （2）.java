import java.util.Arrays;

class Solution {
    public String solution(String my_string) {
        String answer = "";
        char []en1 = new char[26];
        char []en2 = new char[26];
        char []end = new char[my_string.length()];
        
        for (int i = 0; i < 26; i++) {
            en1[i] = (char)('A'+i);
            en2[i] = (char)('a'+i);
        }
        
        for (int i = 0; i < my_string.length(); i++) {
            for (int j = 0; j < 26; j++) {
                if (my_string.charAt(i) == en1[j]) {
                    end[i] += en2[j];
                    break;
                }
                if (my_string.charAt(i) == en2[j]) {
                    end[i] += en2[j];
                    break;
                }
            }
        }
        Arrays.sort(end);
        
        for (int i = 0; i < end.length; i++) {
            answer += end[i];
        }
        
        return answer;
    }
}