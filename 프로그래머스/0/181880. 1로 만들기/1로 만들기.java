class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        int ch = 0;
        for (int i = 0; i < num_list.length; i++) {
            ch = num_list[i];
            while (true) {
                if(ch == 1) {
                    break;
                }
                if (ch%2==0) {
                    ch /= 2;
                    answer++;
                } else {
                    ch = (ch-1)/2;
                    answer++;
                }
            }
        }
        return answer;
    }
}