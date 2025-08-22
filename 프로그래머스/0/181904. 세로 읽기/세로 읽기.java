class Solution {
    public String solution(String my_string, int m, int c) {
        String answer = "";
        int num = c-1;
        for (int i = 0; i < my_string.length(); i++) {
            if (i == num) {
                answer += my_string.charAt(i);
                num += m;
            }
        }
        return answer;
    }
}