class Solution {
    public String solution(String my_string) {
        String answer = "";
        char []arr = new char[my_string.length()];
        for (int i = 0; i < my_string.length(); i++) {
            arr[i] = my_string.charAt(i);
        }
        
        for (int i = 0; i < arr.length; i++) {
            switch (arr[i]) {
                case 'a' : break;
                case 'e' : break;
                case 'i' : break;
                case 'o' : break;
                case 'u' : break;
                    default : answer = answer + arr[i];
                    break;
            }
        }
        return answer;
    }
}