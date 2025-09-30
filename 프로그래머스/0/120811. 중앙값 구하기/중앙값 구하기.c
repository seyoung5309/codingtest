#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int array[], size_t array_len) {
    int answer = 0;
    int save = 0; 
    
    for (int i = 0; i < array_len; i++) {
        for (int j = i; j < array_len; j++) {
            if (array[i] > array[j]) {
                save = array[i];
                array[i] = array[j];
                array[j] = save;
            }
        }
    }
    
    return array[array_len/2];
}