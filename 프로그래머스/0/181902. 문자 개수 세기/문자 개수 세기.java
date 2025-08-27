class Solution {
    public int[] solution(String my_string) {
        char []en1 = new char[26];
        char []en2 = new char[26];
        for (int i = 0; i < 26; i++) {
            en1[i] = (char)('A'+i);
            en2[i] = (char)('a'+i);
        }
        
        int []answer_1 = new int[26];
        int []answer_2 = new int[26];
        
        for (int i = 0; i < my_string.length(); i++) {
            for (int j = 0; j < 26; j++) {
                if (my_string.charAt(i) == en1[j]) {
                    answer_1[j]++;
                }
                if (my_string.charAt(i) == en2[j]) {
                    answer_2[j]++;
                }
            }
        }
        
        int []answer = new int[52];
        for (int i = 0; i < 26; i++) {
            answer[i+26] = answer_2[i];
            answer[i] = answer_1[i];
        }
        
        return answer;
    }
}