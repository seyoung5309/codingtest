class Solution {
    public int[] solution(int[] numbers, int num1, int num2) {
        int a = 0;
            a = num2 - num1 + 1;
        
        int[] answer = new int[a];
        int count = 0;
        
        for (int i = num1; i <=num2; i++) {
            answer[count] = numbers[i];
            count++;
        }
        
        return answer;
    }
}

