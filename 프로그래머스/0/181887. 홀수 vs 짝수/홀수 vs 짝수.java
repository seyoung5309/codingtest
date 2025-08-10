class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        int []add = new int[2];
        for (int i = 0; i < num_list.length; i++) {
            if (i%2 == 0) {
                add[0] += num_list[i];
            } else {
                add[1] += num_list[i];
            }
        }
        
        if (add[0] > add[1]) {
            return add[0];
        } else {
            return add[1];
        }
    }
}