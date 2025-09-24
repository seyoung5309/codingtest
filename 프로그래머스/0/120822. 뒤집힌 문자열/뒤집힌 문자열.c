#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    char* answer = (char*)malloc(strlen(my_string)*sizeof(char));
    
    int count = 0; 
    for (int i = strlen(my_string)-1; i >= 0; i--) {
        answer[count] = my_string[i];
        count++;
    }
    
    answer[strlen(my_string)] = '\0';
    
    return answer;
}