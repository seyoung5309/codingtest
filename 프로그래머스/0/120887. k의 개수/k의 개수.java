class Solution {
    public int solution(int i, int j, int k) {
        int answer = 0;
        int count = 0; 
        for (int a = i; a <= j; a++) {
            count = a; 
            while (true) {
                if (count == 0) {
                    break;
                }
                if (count%10 == k) {
                    answer++;
                }
                count /= 10;
            }
        }
        return answer;
    }
}