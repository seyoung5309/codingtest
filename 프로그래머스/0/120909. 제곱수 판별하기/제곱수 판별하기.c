#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 2;
    for (int i = 1; i*i <= n; i++) {
        if (n == i*i) {
            answer = 1;
            break;
        }
    }
    return answer;
}