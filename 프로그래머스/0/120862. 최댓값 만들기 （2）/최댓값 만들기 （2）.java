import java.util.Arrays;

class Solution {
    public int solution(int[] numbers) {
        int c = numbers.length;
        
        Arrays.sort(numbers);
        
        int num1 = numbers[c-1] * numbers[c-2];
        int num2 = numbers[0] * numbers[1];
        
        if (num1 > num2) {
            return num1;
        } else {
            return num2;
        }
    }
}