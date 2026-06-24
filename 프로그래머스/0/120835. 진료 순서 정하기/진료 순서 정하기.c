#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int emergency[], size_t emergency_len) {
    int* answer = (int*)malloc(sizeof(int) * emergency_len);
    int count = emergency_len; 
    while (count != 0) {
        for (int i = 0; i < emergency_len; i++) {
            if (--emergency[i] == 0) {
                answer[i] = count--;
            }
        }
    }
    return answer;
}