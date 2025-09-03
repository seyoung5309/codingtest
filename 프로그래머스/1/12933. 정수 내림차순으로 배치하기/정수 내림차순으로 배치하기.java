import java.util.Arrays;

class Solution {
    public long solution(long n) {
        long answer = 0;
        long save = n;
        while (save != 0) {
            answer++;
            save /= 10;
        }
        long []arr = new long[(int)answer];
        answer = 0;
        
        for (int i = 0; i < arr.length; i++) {
            arr[i] = n%10;
            n /= 10;
        }
        
        Arrays.sort(arr);
        int mul = 1; 
        
        for (int i = 0; i < arr.length; i++) {
            answer += arr[i]*mul;
            mul *= 10; 
        }
    
        
        return answer;
    }
}