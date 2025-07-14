class Solution {
    public int solution(int a, int b) {
        int answer = 0;
        String ab = String.valueOf(a) + String.valueOf(b);
        int math = 2 * a * b;
        Integer ba = Integer.parseInt(ab);
        
        if(ba > math) {
            answer = ba;
        } else {
            answer = math;
        }
        return answer;
    }
}