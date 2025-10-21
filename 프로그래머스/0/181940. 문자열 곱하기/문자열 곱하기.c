#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* my_string, int k) {
    char* answer = (char*)malloc(strlen(my_string)*k*sizeof(char)+1);
    for (int i = 0; i < strlen(answer); i++) {
        answer[i] = '\0';
    }
    for (int i = 0; i < k; i++) {
        strcat(answer, my_string);
    }
    return answer;
}