class Solution {
    public String solution(String myString) {
        String answer = "";

        for (int i = 0; i < myString.length(); i++) {
            char ch = myString.charAt(i);

            if (ch >= 'A' && ch <= 'Z') {
                ch = (char)(ch + 32);
            }

            if (ch == 'a') {
                answer += 'A';
            } else {
                answer += ch;
            }
        }

        return answer;
    }
}
