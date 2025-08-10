class Solution {
    public int solution(int n) {
        int answer = 1;
        for (int i = 1; ; i++) {
            answer = i;
            if ((6*i)%n == 0) {
                break;
            }
        }
        return answer;
    }
}