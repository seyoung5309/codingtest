#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    int* answer = NULL;
    int index = 0;
    for (int i = 0; i < arr_len; i++) {
        if (index == 0) {
            answer = realloc(answer, sizeof(int) * (index+1));
            answer[index++] = arr[i];
        } else if (answer[index-1] == arr[i]) {
            answer = realloc(answer, sizeof(int) * (index));
            index--;
        } else if (answer[index-1] != arr[i]) {
            answer = realloc(answer, sizeof(int) * (index+1));
            answer[index++] = arr[i];
        }
    }
    if (index == 0) {
        answer[0] = -1;
    }
    return answer;
}