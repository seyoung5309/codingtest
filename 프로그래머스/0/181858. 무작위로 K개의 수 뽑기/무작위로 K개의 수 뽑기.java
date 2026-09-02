class Solution {
    public int[] solution(int[] arr, int k) {
        int[] answer = new int[k];
        for (int i = 0; i < k; i++) {
            answer[i] = -1;
        }
        
        int index = 0; 
        int check = 0; 
        
//         int tmp = 0; 
//         for (int i = 0; i < arr.length; i++) {
//             for (int j = 0; j < arr.length; j++) {
//                 if (arr[i] < arr[j]) {
//                     tmp = arr[j];
//                     arr[j] = arr[i];
//                     arr[i] = tmp;
//                 }
//             }
//         }
        
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < answer.length; j++) {
                if (arr[i] == answer[j]) {
                    check = 1;
                }
            }
            if (check == 1) {
                check = 0;
                continue;
            }
            check = 0;
            answer[index++] = arr[i];
            if (index == k) {
                break;
            }
        }
        return answer;
    }
}