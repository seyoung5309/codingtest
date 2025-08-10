class Solution {
    public int[] solution(int[] numbers, String direction) {
        int []answer = new int[numbers.length];
        switch (direction) {
            case "right" :
                answer[0] = numbers[numbers.length-1];
                for (int i = 0; i < numbers.length-1; i++) {
                    answer[i+1] = numbers[i];
                } 
                break;
            case "left" : 
                for (int i = 1; i < numbers.length; i++) {
                    answer[i-1] = numbers[i];  
                } 
                answer[numbers.length-1] = numbers[0];
                break;
        }
        return answer;
    }
}