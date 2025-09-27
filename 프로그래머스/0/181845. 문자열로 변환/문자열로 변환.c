#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    char* answer = (char*)malloc(sizeof(char)*5);
    for (int i = 0; ; i++) {
        if (n == 0) {
            answer[i] = '\0';
            break;
        }
        answer[i] = n%10 + '0';
        n /= 10;
    }
    
    char save;
    int le = strlen(answer)-1;
    for (int i = 0; i < strlen(answer)/2; i++) {
        save = answer[i];
        answer[i] = answer[le];
        answer[le] = save;
        
        le--;
    }
    
    return answer;
}