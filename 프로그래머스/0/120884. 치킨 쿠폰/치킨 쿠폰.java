class Solution {
    public int solution(int chicken) {
        int answer = 0;
            
        for (int i = 1; i <= chicken; i++) {
            if (i%10 == 0) {
                answer++;
                chicken++;
            }
        }
        
        return answer;
    }
}