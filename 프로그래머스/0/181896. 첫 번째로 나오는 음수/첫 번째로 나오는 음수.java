class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        int cheak  = 0; 
        for (int i = 0; i < num_list.length; i++) {
            if ( num_list[i] < 0 ) {
                answer = i; 
                cheak = 1; 
                break;
            }
        }
        if ( cheak != 1 ) {
            answer = -1;
        }
        return answer;
    }
}