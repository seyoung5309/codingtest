#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* myString, const char* pat) {
    char *s = malloc(sizeof(char)*strlen(myString)); 
    for (int i = 0; i < strlen(myString); i++) {
        if (myString[i] == 'A') {
            s[i] = 'B';
        } else {
            s[i] = 'A';
        }
    }
    if (strstr(s, pat)) {
        return 1; 
    } else {
        return 0; 
    }
}