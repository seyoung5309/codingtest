#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* solution(const char* s) {
    int len = strlen(s);
    char* answer = (char*)malloc(sizeof(char) * (len + 1));
    answer[len] = '\0';

    int count = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == ' ') {
            answer[i] = ' ';
            count = 0;
        } else {
            if (count % 2 == 0) {
                answer[i] = toupper(s[i]);
            } else {
                answer[i] = tolower(s[i]);
            }
            count++;
        }
    }

    return answer;
}