class Solution {
    public int solution(int[] d, int budget) {
        int answer = 0;
        int tmp;
        for (int i = 0; i < d.length; i++) {
            for (int j = 0; j < d.length; j++) {
                if (d[i] < d[j]) {
                    tmp = d[j];
                    d[j] = d[i];
                    d[i] = tmp;
                }
            }
        }
        
        
        for (int i = 0; i < d.length; i++) {
            answer += d[i];
            if (answer > budget) {
                return i;
            }
        }
        
        return d.length;
    }
}