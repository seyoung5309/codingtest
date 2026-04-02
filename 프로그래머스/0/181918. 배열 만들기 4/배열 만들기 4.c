#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    int* stk = (int*)malloc(sizeof(int) * 1);
    int index = 0; 
    for (int i = 0; i < arr_len; i++) {
        if (index == 0) {
            stk = realloc(stk, sizeof(int) * ++index);
            stk[index - 1] = arr[i];
        } else if (index != 0 && stk[index - 1] < arr[i]) {
            stk = realloc(stk, sizeof(int) * ++index);
            stk[index - 1] = arr[i];
        } else {
            stk = realloc(stk, sizeof(int) * --index);
            i--;
        }
    }
    return stk;
}