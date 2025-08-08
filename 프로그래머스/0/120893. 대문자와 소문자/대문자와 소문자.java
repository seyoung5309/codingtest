class Solution {
    public String solution(String my_string) {
        String answer = "";
        char ch = 'a';
        
        for (int i = 0; i < my_string.length(); i++) {
            ch = my_string.charAt(i);
            
            if (ch >= 'a' && ch <= 'z') {
                answer += (char)(ch-32);
            } else if (ch >= 'A' && ch <= 'Z') {
                answer += (char)(ch+32);
            }
            
        }
        return answer;
    }
}