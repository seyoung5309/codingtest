class Solution {
    public int solution(String my_string) {
        int answer = 0;
        int num = 0; 
        int mul = 1; 
        for (int i = my_string.length()-1; i >= 0; i--) {
            if (my_string.charAt(i) >= '0' && my_string.charAt(i) <= '9') {
                num += (my_string.charAt(i) - '0') * mul;
                mul *= 10; 
            } else if (num != 0) {
                if (my_string.charAt(i) < '0' || my_string.charAt(i) > '9') {
                    answer += num;
                    num = 0; 
                    mul = 1; 
                }
            }
        }
        answer += num;
        return answer;
    }
}