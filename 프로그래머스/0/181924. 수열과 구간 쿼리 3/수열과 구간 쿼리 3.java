class Solution {
    public int[] solution(int[] arr, int[][] queries) {
        
        int num1 = 0; 
        int num2 = 0; 
        
        int save = 0; 
        
        for (int i = 0; i < queries.length; i++) {
            num1 = queries[i][0];
            num2 = queries[i][1];
            
            save = arr[num1];
            arr[num1] = arr[num2];
            arr[num2] = save;
            
        }
        return arr;
    }
}