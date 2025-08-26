class Solution {
    public boolean solution(int x) {
        boolean answer = false;
        int x_save = x;
        int save = 0; 
        
        while (true) {
            if(x == 0) {
                break;
            }
            save += x%10;
            x /= 10;
        }
        if (x_save%save == 0) {
            answer = true;
        }
        
        return answer;
    }
}