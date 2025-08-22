class Solution {
    public String solution(int age) {
        String answer = "";
        int num = 0; 
        int le = 0; 
        
        if (age == 1000) {
            le = 4;
        } else if (age >= 100) {
            le = 3;
        } else if (age >= 10) {
            le = 2;
        } else if (age >= 1) {
            le = 1;
        }
        
        char []en = new char[26];
        
        for (int i = 0; i < 26; i++) {
            en[i] = (char)('a'+i);
        }
        
        for (int i = 0; i < le; i++) {
            num = age%10;
            age /= 10;
            
            answer = en[num] + answer;
        }
        return answer;
    }
}