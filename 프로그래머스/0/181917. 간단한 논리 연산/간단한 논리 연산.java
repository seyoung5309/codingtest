class Solution {
    public boolean solution(boolean x1, boolean x2, boolean x3, boolean x4) {
        boolean answer = true;
        boolean a = true; 
        boolean b = true;
        if (x1 == true || x2 == true) {
            a = true;
        } else {
            a = false;
        }
        if (x3 == true || x4 == true) {
            b = true;
        } else {
            b = false;
        }
        
        if (a == true && b == true) {
            answer = true;
        } else {
            answer = false;
        }
        
        return answer;
    }
}