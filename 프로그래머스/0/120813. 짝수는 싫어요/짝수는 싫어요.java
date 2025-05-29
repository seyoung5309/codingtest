class Solution {
    public int[] solution(int n) {
        int count = 1;
        
        for (int i = 1; i < n; i++) {
            if (i%2 != 0) {
                ++count;
            }
        }
        if (n % 2 == 0) {
            count--;
        }
        
        int answer[] = new int[count];
        count = 0;
        
        for (int i = 1; i <= n; i++) {
            if (i%2 != 0) {
                answer[count] = i;
                count++;
            }
        }
        return answer;
    }
}