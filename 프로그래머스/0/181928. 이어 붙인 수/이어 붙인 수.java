class Solution {
    public int solution(int[] num_list) {
        int add1 = 0;
        int add2 = 0; 
        int mul1 = 1; 
        int mul2 = 1; 
        
        for (int i = 0; i < num_list.length; i++) {
            if (num_list[i]%2 != 0) {
                add1++;
            } else {
                add2++; 
            }
        }
        
        for (int i = 0; i < add1; i++) {
            mul1 *= 10;
        }
        for (int i = 0; i < add2; i++) {
            mul2 *= 10;
        }
        mul1 /= 10;
        mul2 /= 10;
        
        add1 = 0;
        add2 = 0; 
        
        for (int i = 0; i < num_list.length; i++) {
            if (num_list[i]%2 != 0) {
                add1 += num_list[i] * mul1;
                mul1 /= 10;
            } else {
                add2 += num_list[i] * mul2;
                mul2 /= 10; 
            }
        }
        return add1+add2;
    }
}