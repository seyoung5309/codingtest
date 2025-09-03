class Solution {
    public int solution(String s) {
        int answer = 0;
        int mul = 1; 
        for (int i = s.length()-1; i >= 0; i--) {
            if (s.charAt(i)=='-') {
                answer -= answer * 2;
                continue;
            } else if (s.charAt(i) == '+') {
                continue;
            }
            answer += (int)(s.charAt(i)-'0')*mul;
            mul *= 10;
        }
        return answer;
    }
}