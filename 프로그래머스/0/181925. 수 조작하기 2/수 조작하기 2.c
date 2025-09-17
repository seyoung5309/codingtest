#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// numLog_len은 배열 numLog의 길이입니다.
char* solution(int numLog[], size_t numLog_len) {
    char* answer = (char*)malloc(numLog_len*sizeof(char));
    
    int c = 0;
    for(int i=1; i< numLog_len; i++){
        if((numLog[i] - numLog[i-1]) == 1){
            answer[c] = 'w';
        }else if((numLog[i] - numLog[i-1]) == -1){
            answer[c] = 's';
        }else if((numLog[i] - numLog[i-1]) == 10){
            answer[c] = 'd';
        }else if((numLog[i] - numLog[i-1]) == -10){
            answer[c] = 'a';
        }
        c++;
    }
    answer[c] = '\0';
    
    return answer;
}