class Solution {
    public String solution(String n_str) {
        String answer = "";
        if(n_str.charAt(0) != '0') {
            answer += n_str.charAt(0);
            return n_str;
        }
        for (int i = 1; i < n_str.length(); i++) {
            if(n_str.charAt(i) == '0' && n_str.charAt(i-1) == n_str.charAt(i)) {
                continue;
            }
            answer += n_str.charAt(i);
        }
        return answer;
    }
} 