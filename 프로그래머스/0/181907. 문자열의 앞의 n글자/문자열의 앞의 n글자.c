#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int n) {
    char* answer = (char*)malloc((n)*sizeof(char)+1);
    int i = 0; 
    for (i; i < n; i++) {
        answer[i] = my_string[i];
    }
    answer[i] = '\0';
    return answer;
}