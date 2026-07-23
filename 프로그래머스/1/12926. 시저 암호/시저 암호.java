class Solution {
    public String solution(String s, int n) {
        String answer = "";
        char[] en = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        char[] EN = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        int check = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) >= 'a' && s.charAt(i) <= 'z') {
                for (int j = 0; j < 26; j++) {
                    if (s.charAt(i) == en[j]) {
                        answer += en[(j + n) % 26];
                        check = 1;
                        break;
                    }
                }
                if (check != 1) {
                        answer += " ";
                    }
                check = 0;
            } else {
                for (int j = 0; j < 26; j++) {
                    if (s.charAt(i) == EN[j]) {
                        answer += EN[(j + n) % 26];
                        check = 1;
                        break;
                    }
                }
                if (check != 1) {
                        answer += " ";
                    }
                check = 0;
            }
        }
        return answer;
    }
}