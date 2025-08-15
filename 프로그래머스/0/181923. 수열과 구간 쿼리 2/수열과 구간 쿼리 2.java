class Solution {
    public int[] solution(int[] arr, int[][] queries) {
        int[] answer = new int[queries.length];
        int num = 1000000; 
        for (int i = 0; i < queries.length; i++) {
            for (int j = queries[i][0]; j <= queries[i][1]; j++) {
                if (arr[j] > queries[i][2] && arr[j] < num) {
                    num = arr[j];
                }
            }
            if (num == 1000000) {
                answer[i] = -1;
            } else {
                answer[i] = num;  
            }
            num = 1000000;
        }
        return answer;
    }
}