class Solution {
    public int[] solution(int[] arr) {
        int num = 0; 
        for (int i = 0; i < arr.length; i++) { 
            num += arr[i];
        }
        int[] answer = new int[num];
        int count = 0; 
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i]; j++) {
                answer[count] = arr[i];
                count++;
            }
        }
        return answer;
    }
}