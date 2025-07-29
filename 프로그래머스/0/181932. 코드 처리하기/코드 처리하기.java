class Solution {
    public String solution(String code) {
        String answer = "";
        int mode = 0; 
        char ch;
        
        for (int i = 0; i < code.length(); i++) {
            ch = code.charAt(i);
            
            if (ch == '1') {
                mode = 1 - mode;
                continue;
            }
            
            if (mode == 0 && i % 2 == 0) {
                answer += ch;
            } else if (mode == 1 && i % 2 != 0) {
                answer += ch;
            }
        }
        
        
        if (answer.equals("")) {
            return "EMPTY";
        } else {
            return answer;
        }
        
    }
}