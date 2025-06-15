class Solution {
    public int solution(int n) {
        int count = 0;
        int num = 1; 
        for (int i = 1; i <= 3628800; i++) {
            num *= i;
            if (num > n) {
                break;
            } else {
                count++;
            }
        }
        
        int answer = count;
        return answer;
    }
}