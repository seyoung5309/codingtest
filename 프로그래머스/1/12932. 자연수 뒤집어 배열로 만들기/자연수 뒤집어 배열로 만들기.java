class Solution {
    public int[] solution(long n) {
        long save = n;
        int count = 0;
        for (int i = 0; ; i++) {
            if (save == 0) {
                break;
            }
            save /= 10; 
            count++;
        }
        
        int[] answer = new int[count];
        
        for (int i = 0; i < count; i++) {
            answer[i] = (int)(n%10);
            n /= 10;
        }
        return answer;
    }
}