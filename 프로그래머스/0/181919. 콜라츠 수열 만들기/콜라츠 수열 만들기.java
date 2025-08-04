class Solution {
    public int[] solution(int n) {
        int[] num = new int[1000];
        num[0] = n;
        
        int count = 1; 
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
                num[count] = n;
            } else {
                n = 3 * n + 1;
                num[count] = n;
            }
            count++;
        } 
        
        int []answer = new int[count];
        
        for (int i = 0; i < count; i++) {
            answer[i] = num[i];
        }
        
        return answer;
    }
}