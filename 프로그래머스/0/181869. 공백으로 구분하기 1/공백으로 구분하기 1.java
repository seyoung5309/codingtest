class Solution {
    public String[] solution(String my_string) {
        int count = 0; 
        for (int i = 0; i < my_string.length(); i++) {
            if (my_string.charAt(i) == ' ') {
                count++;
            }
        }
        count++; 
        String[] answer = new String[count];
        count = 0; 
        
        for (int i = 0; i < answer.length; i++) {
            answer[i] = "";
        }
        
        for (int i = 0; i < my_string.length(); i++) {
            if (my_string.charAt(i) == ' ') {
                count++;
                continue;
            }
            answer[count] += my_string.charAt(i);
        }
        
        return answer;
    }
}