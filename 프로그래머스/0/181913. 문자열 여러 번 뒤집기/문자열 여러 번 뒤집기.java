class Solution {
    public String solution(String my_string, int[][] queries) {
        String answer = "";
        char []ans1 = new char[my_string.length()];
        char []ans2 = new char[my_string.length()];
        for (int i = 0; i < my_string.length(); i++) {
            ans1[i] = my_string.charAt(i);
            ans2[i] = my_string.charAt(i);
        }
        
        int count = 0; 
        
        for (int i = 0; i < queries.length; i++) {
            count = queries[i][0];
            for (int j = queries[i][1]; j >= queries[i][0]; j--) {
                ans1[count] = ans2[j];
                count++;
            }
            for (int u = 0; u < ans1.length; u++) {
                ans2[u] = ans1[u];
            }
            count = 0; 
        }
        
        for (int i = 0; i < ans1.length; i++) {
            answer += ans1[i];
        }
        
        return answer;
    }
}