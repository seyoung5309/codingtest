class Solution {
    public int solution(int[] common) {
        int answer = 0;
        int count;
        if (common[1] - common[0] == common[2] - common[1]) {
            count = common[1] - common[0]; 
        } else {
            count = common[1] / common[0];
            answer = 1;
        }
        if (answer == 1) {
            answer = count * common[common.length-1];
        } else {
            answer = count + common[common.length-1];
        }
        return answer;
    }
}