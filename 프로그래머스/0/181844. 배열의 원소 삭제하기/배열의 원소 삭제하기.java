class Solution {
    public int[] solution(int[] arr, int[] delete_list) {
 
        int count = 0; 
        int num = 0;
        
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < delete_list.length; j++) {
                if (arr[i] == delete_list[j]) {
                    count = 1;
                    continue;
                }
            }
            if (count == 1) {
                count = 0; 
            } else {
                num++;
            }
        }
        
        int[] answer = new int[num];
        num = 0;
        
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < delete_list.length; j++) {
                if (arr[i] == delete_list[j]) {
                    count = 1;
                    continue;
                }
            }
            if (count == 1) {
                count = 0; 
            } else {
                answer[num] = arr[i];
                num++;
            }
        }
        
        return answer;
    }
}