#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int h = 0; 
    int j = 0; 
    int h_mul = 1; 
    int j_mul = 1; 
    for (int i = num_list_len-1; i >= 0; i--) {
        if (num_list[i]%2 == 0) {
            j += num_list[i]*j_mul;
            j_mul *= 10;
        } else {
            h += num_list[i]*h_mul;
            h_mul *= 10; 
        }
    }
    return j+h;
}