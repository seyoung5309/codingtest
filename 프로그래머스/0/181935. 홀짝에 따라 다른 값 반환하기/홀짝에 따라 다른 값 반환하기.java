class Solution {
    public int solution(int n) {
        int answer = 0;
        for (int i = n; i > 0; i--) {
            if (n%2==0) {
                if (i%2 == 0) {
                    answer += i*i;
                }
            } else {
                if (i%2 != 0) {
                    answer += i;
                }
            }
        }
        return answer;
    }
}