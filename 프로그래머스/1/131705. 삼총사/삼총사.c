#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number[], size_t number_len) {
    int sum = 0, answer = 0; 
    for (int i = 0; i < number_len; i++) {
        for (int j = i; j < number_len; j++) {
            for (int l = j; l < number_len; l++) {
                if (i == j || j == l) {
                    continue;
                }
                sum = number[i] + number[j] + number[l];
                if (sum == 0) {
                    printf("[%d %d %d]\n", number[i], number[j], number[l]);
                    answer++;
                }
            }
        }
    }
    return answer;
}