#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    int check = -1; 
    int count = 0; 
    for (int i = 0; i < arr_len; i++) {
        if (arr[i] == 2 && check == -1) {
            check = i; 
        }
        if (check != -1) {
            count++;
        }
    }
    
    if (check == -1) {
    int* answer = malloc(sizeof(int));
    answer[0] = -1;
    return answer;
    }
    
    int* answer = (int*)malloc(sizeof(int)*count);
    
    int c = 0; 
    for (int i = check; i < check+count; i++) {
        answer[c] = arr[i];
        c++;
    }
    
    return answer;
}