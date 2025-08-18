class Solution {
    public String[] solution(String[] strArr) {
        String[] answer = new String[strArr.length];
        String cheak = "";
        int count = 0; 
        int arr = 0; 
        int c = 0; 
        int n = 0; 
        String str = "";
        for (int i = 0; i < strArr.length; i++) {
            for (int j = 1; j < strArr[i].length(); j++) {
                str = strArr[i];
                n = j - 1;
                cheak =  "" +str.charAt(n) + str.charAt(j);
                if (cheak.equals("ad")) {
                    count = 1;
                } 
            }
            if (count == 1) {
                count = 0; 
            } else {
                answer[arr] = strArr[i];
                c++;
                arr++;
            }
        }
        
        String []end = new String[c];
        for (int i = 0; i < c; i++) {
            end[i] = answer[i];
        }
        
        return end;
    }
}