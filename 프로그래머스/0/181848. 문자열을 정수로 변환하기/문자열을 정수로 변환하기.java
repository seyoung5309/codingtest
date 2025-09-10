class Solution {
    public int solution(String n_str) {
        int answer = 0;
        int num = 1; 
        
        for (int i = 1; i < n_str.length(); i++) {
            num *= 10;
        }
        
        for (int i = 0; i < n_str.length(); i++) {
            answer += (n_str.charAt(i) - '0') * num;
            num /= 10;
        }
        return answer;
    }
}