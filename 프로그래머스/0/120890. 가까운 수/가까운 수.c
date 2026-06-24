#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int array[], size_t array_len, int n) {
    int answer = 200;
    int index = 0;
    int ResultArray[array_len];
    for (int i = 0; i < array_len; i++) {
        ResultArray[i] = array[i] - n;
        if (ResultArray[i] < 0) {
            ResultArray[i] *= -1;
        }
        if (ResultArray[i] == answer) {
            if (array[i] < array[index]) {
                answer = ResultArray[i];
                index = i;
            }
        } else if (ResultArray[i] < answer) {
            answer = ResultArray[i];
            index = i;
        }
    }
    return array[index];
}