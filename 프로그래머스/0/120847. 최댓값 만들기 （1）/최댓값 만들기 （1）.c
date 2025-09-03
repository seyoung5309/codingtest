#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int num1 = -1;
    int num2 = -1;
    int count = 0;
    
    for (int i = 0; i < numbers_len; i++) {
        if (num1 <= numbers[i]) {
            num1 = numbers[i];
            count = i;
        } 
    }
    
    for (int i = 0; i < count; i++) {
        if (num2 < numbers[i]) {
            num2 = numbers[i];
        }
    }
    
    for (int i = count+1; i < numbers_len; i++) {
        if (num2 < numbers[i]) {
            num2 = numbers[i];
        }
    }
    answer = num1 * num2;
    return answer;
}