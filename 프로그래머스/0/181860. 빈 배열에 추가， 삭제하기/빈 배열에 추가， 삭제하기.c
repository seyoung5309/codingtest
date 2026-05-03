#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, bool flag[], size_t flag_len) {
    int* answer = (int*)malloc(sizeof(int) * 1);
    int size = 0, index = 0;
    for (int i = 0; i < arr_len; i++) {
        if (flag[i]) {
            size += arr[i] * 2;
            answer = (int*)realloc(answer, sizeof(int) * size);
            for (int j = 0; j < arr[i] * 2; j++) {
                answer[index++] = arr[i];
            }
        } else {
            size -= arr[i]; index -= arr[i];
            answer = (int*)realloc(answer, sizeof(int) * size);
        }
    }
    return answer;
}