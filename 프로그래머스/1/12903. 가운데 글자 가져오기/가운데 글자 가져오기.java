class Solution {
    public String solution(String s) {
        String answer = "";
        int l = s.length()/2;; 
        if (s.length()%2==0) {
            answer += s.charAt(l-1);
            answer += s.charAt(l);
        } else {
            answer += s.charAt(l);
        }
        return answer;
    }
}