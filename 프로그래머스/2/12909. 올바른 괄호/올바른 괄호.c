#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool solution(const char* s) {
    if (s[0] == ')' || s[strlen(s)-1] == '(') {
        return false;
    } 
    int check = 0; 
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '(') {
            check++;
        } else {
            check--;
        }
        
        if (check < 0) {
            return false;
        }
    }
    if (!check) {
        return true;
    } else {
        return false;
    }
}