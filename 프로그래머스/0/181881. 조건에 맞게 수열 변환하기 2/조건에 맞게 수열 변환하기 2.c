#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr[], size_t arr_len) {
    int answer = 0;
    int arr_save[arr_len];
    int count = 0; 
    
    for (int i = 0; i < arr_len; i++) {
        arr_save[i] = arr[i];
    }
        
    while (1) {
        count = 0; 
        for (int i = 0; i < arr_len; i++) {
            if (arr[i] >= 50 && arr[i] % 2 == 0) {
                arr[i] /= 2; 
            } else if (arr[i] < 50 && arr[i] % 2 != 0) {
                arr[i] = arr[i] * 2 + 1; 
            }
        }
        for (int j = 0; j < arr_len; j++) {
            if (arr[j] != arr_save[j]) {
                count++;
                break;
            }
        }
        if (count == 0) {
            break;
        }
        for (int i = 0; i < arr_len; i++) {
            arr_save[i] = arr[i];
        }
        answer++;
    }
    
    return answer;
}