class Solution {
    boolean solution(String s) {
        boolean answer = false;
        int p = 0; 
        int y = 0; 
        
        
        String ch = s.toUpperCase();
        
        for (int i = 0; i < s.length(); i++) {
            if (ch.charAt(i) == 'P') {
                p++;
            }
            if (ch.charAt(i) == 'Y') {
                y++;
            }
        }
        if (p == y) {
            answer = true;
        }

        return answer;
    }
}