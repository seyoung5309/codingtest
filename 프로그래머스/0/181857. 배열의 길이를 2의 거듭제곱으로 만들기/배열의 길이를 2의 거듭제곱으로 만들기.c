#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    
    int num = 2;
    for (int i = 1; ; i++) {
        if (num >= arr_len) {
            break;
        }
        num *= 2; 
    }
    
    int* answer = (int*)malloc(sizeof(int)*num);
    for (int i = 0; i < num; i++) {
        if (i > arr_len-1) {
            answer[i] = 0; 
            continue;
        }
        answer[i] = arr[i];
    }
    
    return answer;
}