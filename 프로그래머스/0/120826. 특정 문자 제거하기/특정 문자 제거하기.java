class Solution {
    public String solution(String my_string, String letter) {
        char []arr = new char[my_string.length()];
        for (int i = 0; i < my_string.length(); i++) {
            arr[i] = my_string.charAt(i);
        }

        char []l = new char[1];
        l[0] = letter.charAt(0);
        
        String answer = "";
        for (int i = 0; i < arr.length; i++) {
            if (l[0] == arr[i]) {
                continue;
            }
            answer = answer + arr[i];
        }
        
        return answer;
    }
}