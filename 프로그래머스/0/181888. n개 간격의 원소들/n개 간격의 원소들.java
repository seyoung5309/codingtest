class Solution {
    public int[] solution(int[] num_list, int n) {
        int num = 0; 
        if (num_list.length%n == 0) {
            num = num_list.length/n;
        } else {
            num = num_list.length/n+1;
        }
        int[] answer = new int[num];
        
        num = 0; 
        
        for (int i = 0; i < num_list.length; i++) {
            if (i%n == 0) {
                answer[num] = num_list[i];
                num++; 
            }
        }
        return answer;
    }
}