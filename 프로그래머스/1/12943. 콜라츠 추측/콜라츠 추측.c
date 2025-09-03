#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;
    
    if (num == 1) {
        return 0; 
    }
    
    while (num != 1) {
        if (num%2 == 0) {
            num /= 2;
        } else {
            num *= 3; 
            num++;
        }
        answer++;
        
        if (answer >= 400) {
            return -1; 
        }
        // 문제 오류 있는 듯
    }
    return answer;
}