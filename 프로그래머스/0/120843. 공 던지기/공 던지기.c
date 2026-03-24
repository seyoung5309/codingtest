#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int numbers[], size_t numbers_len, int k) {
    int answer = 0;
    for (int i = 0; i < k-1; i++) {
        if (answer == numbers_len) {
            answer = 0;
        }
        answer++;
        if (answer == numbers_len) {
            answer = 0;
        }
        answer++;
    }
    return numbers[answer];
}