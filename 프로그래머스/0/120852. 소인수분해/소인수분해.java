import java.util.ArrayList;

class Solution {
    public int[] solution(int n) {
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                list.add(i);
            }
        }
        
        for (int i = 0; i < list.size(); i++) {
            for (int j = 2; j <= list.get(i); j++) {
                if ((list.get(i) % j == 0) && list.get(i) != j) {
                    list.remove(i--);
                    break;
                }
            }
        }
        
        int[] answer = new int[list.size()];
        for (int i = 0; i < list.size(); i++) {
            answer[i] = list.get(i);
        }       
        
        return answer;
    }
}