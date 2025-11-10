#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* t, const char* p) {
    int answer = 0;
    long num_p = strtol(p, NULL, 10); 
    long t_num = 0; 
    
    char * num = malloc(sizeof(char)*(strlen(p)+1));
    for (int i = 0; i < sizeof(char)*(strlen(p)+1); i++) {
        num[i] = '\0';
    }
    
    for (int i = 0; i < strlen(t)-strlen(p)+1; i++) {
        if (strlen(p) > strlen(t)) {
            break; 
        }   
        for (int j = 0; j < strlen(p); j++) {
            num[j] = t[j+i];
        }
        t_num = strtol(num, NULL, 10); 
        if (t_num <= num_p) {
            answer++;
        }
    }
    
    return answer;
}