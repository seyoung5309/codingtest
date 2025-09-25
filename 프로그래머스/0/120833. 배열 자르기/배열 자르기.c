#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    int* answer = (int*)malloc(sizeof(int)*num2);
    int count = 0; 
    for (int i = num1; i <= num2; i++) {
        answer[count] = numbers[i];
        count++;
    }
    return answer;
}