class Solution {
    public String solution(String my_string) {
        
        char []arr = new char[my_string.length()];
        for (int i = 0; i < my_string.length(); i++) {
            arr[i] = my_string.charAt(i);
        }
        
        String answer = "";
        for (int i = my_string.length()-1; i >= 0; i--) {
            answer = answer + arr[i];
        }
        
        return answer;
    }
}