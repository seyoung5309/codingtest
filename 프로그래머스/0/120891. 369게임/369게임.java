class Solution {
    public int solution(int order) {
        int answer = 0;
        int cheak = 0; 
        
        while (true) {
            if(order == 0) {
                break;
            }
            cheak = order%10;
            if (cheak == 3 || cheak == 6 || cheak == 9) {
                answer++;
            }
            order /= 10;
        }
        
        return answer;
    }
}