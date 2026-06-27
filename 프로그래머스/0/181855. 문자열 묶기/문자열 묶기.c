#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* strArr[], size_t strArr_len) {
    int answer = 0;
    int *arr = (int *)malloc(sizeof(int) * 100001);
    for (int i = 0; i < 100001; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < strArr_len; i++) {
        arr[strlen(strArr[i])]++;
    }
    for (int i = 0; i < 100001; i++) {
        if (answer < arr[i]) {
            answer = arr[i];
        }
    }
    free(arr);
    return answer;
}