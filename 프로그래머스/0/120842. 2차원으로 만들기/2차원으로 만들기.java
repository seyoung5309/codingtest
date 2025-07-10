class Solution {
    public int[][] solution(int[] num_list, int n) {
        int num = num_list.length;
        int[][] answer = new int[num/n][n];
        int count = 0; 
        for (int i = 0; i < num/n; i++) {
            for (int j = 0; j < n; j++) {
                answer[i][j] = num_list[count];
                count++;
            }
        }
        return answer;
    }
}