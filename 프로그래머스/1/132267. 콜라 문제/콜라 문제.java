class Solution {
    public int solution(int a, int b, int n) {
        int answer = 0;
        int temp = 0;
        while (true) {
            temp = (n / a) * b;
            n %= a;
            n += temp;
            answer += temp;
            if (n < a) {
                break;
            }
        }
        
        return answer;
    }
}