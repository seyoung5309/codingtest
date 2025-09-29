#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    int count = 0; 
    int save = num; 
    int* arr = (int*)malloc(7 * sizeof(int));
    
    for (int i = 0; ; i ++) {
        if (save == 0) {
            break;
        }
        arr[i] = save%10;
        save /= 10;
        count++;
    }
    
    int count_1 = 0; 
    
    for (int i = count-1; i >= 0; i--) {
        if (arr[i] == k) {
            return count_1+1;
        }
        count_1++;
    }
    
    return -1;
}