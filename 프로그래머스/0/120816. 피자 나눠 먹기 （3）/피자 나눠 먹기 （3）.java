class Solution {
    public int solution(int slice, int n) {
        int answer = (slice+n-1)/slice;
        return answer;
    }
}