class Solution {
    public long solution(int a, int b) {
        long answer = 0;
        int num1 = 0;
        int num2 = 0;
        if (b >= a) {
            num1 = b;
            num2 = a;
        } else {
            num1 = a;
            num2 = b;
        }
        for (int i = num2; i <= num1; i++) {
            answer += i;    
        }
        return answer;
    }
}