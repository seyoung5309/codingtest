class Solution {
    public int[] solution(int[] arr) {
        int len = arr.length-1;
        
        if (len == 0) {
            int[] answer = {-1};
            return answer;
        }
        
        int[] answer = new int[len];
        
        int count = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (count > arr[i]) {
                count = arr[i];
            }
        }
        
        int ch = 0; 
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == count) {
                continue;
            }
            answer[ch] = arr[i];
            ch++;
        }
        return answer;
    }
}