class Solution {
    public int solution(int[] numbers) {
        int num1 = 0;
        int num2 = 0; 
        int count = 0;
        
        for (int i = 0; i < numbers.length; i++) {
            if(num1 < numbers[i]) {
                num1 = numbers[i];
                count = i;
            }
        }
        
        
        for (int i = 0; i < count; i++) {
            if (num2 < numbers[i] && numbers[i] <= num1) {
                num2 = numbers[i];
            }
        }
        if (count+1 != numbers.length) {
            for (int i = count+1; i < numbers.length; i++) {
            if (num2 < numbers[i] && numbers[i] <= num1) {
                num2 = numbers[i];
            }
        }
        }
        int answer = num1 * num2;
        return answer;
    }
}