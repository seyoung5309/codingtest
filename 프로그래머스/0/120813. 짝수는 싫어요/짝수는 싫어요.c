#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int num = 0; 
    if (n%2 == 0) {
        num = n/2;
    } else {
        num = n/2+1;
    }
    int* answer = (int*)malloc(num * sizeof(int));
    int count = 0; 
    
    for (int i = 0; i <= n; i++) {
        if (i%2 == 0) {
            continue;
        }
        answer[count] = i;
        count++;
    }
    return answer;
}