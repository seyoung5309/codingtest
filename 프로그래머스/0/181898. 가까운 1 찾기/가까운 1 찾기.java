class Solution {
    public int solution(int[] arr, int idx) {
        int answer = -1;
        for (int i = arr.length-1; i >= 0; i--) {
            if (arr[i] == 1 && i >= idx) {
                answer = i; 
            }
        }
        return answer;
    }
}