class Solution {
    public String solution(String my_string) {
        String answer = "";
        char []en = {'a', 'e', 'i', 'o', 'u'};
        int cheak = 0; 
        
        for (int i = 0; i < my_string.length(); i++) {
            for (int j = 0; j < en.length; j++) {
                if(my_string.charAt(i) != en[j]) {
                    cheak++;
                }
            }
            if (cheak == 5) {
                answer += my_string.charAt(i);
            }
            cheak = 0; 
        }
        
        return answer;
    }
}