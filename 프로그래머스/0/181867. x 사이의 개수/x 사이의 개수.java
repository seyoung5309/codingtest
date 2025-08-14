class Solution {
    public int[] solution(String myString) {
        int size = 1;
        int sum = 0; 
        
        for (int i = 0; i < myString.length(); i++) {
            if (myString.charAt(i) == 'x') {
                size++; 
            }
        }
        
        int[] answer = new int[size];
        
        int count = 0; 
        
        for (int i = 0; i < myString.length(); i++) {
            if (myString.charAt(i) == 'x') {
                answer[count] = sum;
                sum = 0; 
                count++;
            } else {
                sum++; 
            }
        }
        if (sum != 0) {
            answer[size-1] = sum;
        }
        return answer;
    }
}