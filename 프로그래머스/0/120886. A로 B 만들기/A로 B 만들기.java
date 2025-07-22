import java.util.Arrays;

class Solution {
    public int solution(String before, String after) {
        int answer = 1;
        char []be = new char[before.length()];
        char []af = new char[after.length()];
        
        for (int i = 0; i < before.length(); i++) {
            be[i] = before.charAt(i);
            af[i] = after.charAt(i);
        }
        
        Arrays.sort(be);
        Arrays.sort(af);
        
        for (int i = 0; i < be.length; i++) {
            if (be[i] != af[i]) {
                answer = 0; 
                break;
            }
        }
        
        return answer;
    }
}