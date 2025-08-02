class Solution {
    public String solution(String my_string, int[] indices) {
        String answer = "";
        int count = 0; 
        for (int i = 0; i < my_string.length(); i++) {
            for (int j = 0; j < indices.length; j++) {
                if (i == indices[j]) {
                    count = 1;
                    continue;
                }
                
            }
            if (count == 0) {
                answer += my_string.charAt(i);
            }
            count = 0; 
        }
        return answer;
    }
}