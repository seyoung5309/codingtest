import java.util.Arrays;

class Solution {
    public int solution(int[] array) {
        Arrays.sort(array);
        
        int answer = 0;
        
        if (array.length == 3) {
            answer = array[array.length%2];
        } else {
            answer = array[array.length/2];
        }
        return answer;
    }
}