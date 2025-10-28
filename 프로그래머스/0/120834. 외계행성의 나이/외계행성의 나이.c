#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int age) {
    int n = 0; 
    
    if (age >= 1000) {
        n = 4;
    } else if (age >= 100) {
        n = 3;
    } else if (age >= 10) {
        n = 2;
    } else {
        n = 1;
    }
    char* answer = (char*)malloc(sizeof(char)*n);
    for (int i = 0; i < n*2; i++) {
        answer[i] = '\0';
    }
    
    int le = n;
    int le_2 = n;
    n--;
    
    int num = age;
    
    for (int i = 0; i < le; i++) {
        num = age%10;
        age /= 10;
        answer[n] = (char)('a'+num);
        n--;
    }

    return answer;
}