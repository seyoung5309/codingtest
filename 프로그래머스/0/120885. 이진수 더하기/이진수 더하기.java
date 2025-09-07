class Solution {
    public String solution(String bin1, String bin2) {
        String answer = "";
        
        int num1 = 0; 
        int num2 = 0; 
        
        int mul = 1; 
        
        for (int i = bin1.length()-1; i >= 0; i--) {
            int num = bin1.charAt(i)-'0';
            num1 += num * mul;
            mul *= 2; 
        }
        
        mul = 1; 
        
        for (int i = bin2.length()-1; i >= 0; i--) {
            int num = bin2.charAt(i)-'0';
            num2 += num * mul;
            mul *= 2; 
        }
        
        int result = num1 + num2; 
        
        if (result == 0) {
            return "0";
        }
        
        while (result > 0) {
            answer = (result % 2) + answer;
            result /= 2;
        }
        
        return answer;
    }
}