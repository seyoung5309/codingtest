class Solution {
    public int solution(int n, int k) {
        int s = n/10;
        int answer = 12000*n + 2000*k - 2000*s;
        return answer;
    }
}