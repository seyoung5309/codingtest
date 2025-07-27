class Solution {
    public int solution(String my_string, String is_prefix) {
        int answer = 0;
        
        String []st = new String[my_string.length()];
        for (int i = 0; i < my_string.length(); i++) {
            st[i] = "";
            for (int j = 0; j <= i; j++) {
                st[i] += my_string.charAt(j);
            }
        }
        
        for (int i = 0; i < st.length; i++) {
            if (st[i].equals(is_prefix)) {
                answer = 1; 
                break;
            }
        }
        return answer;
    }
}