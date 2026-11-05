#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int sides[], size_t sides_len) {
    int a = sides[0];
    int b = sides[1];

    int answer = a + b - abs(a - b) - 1;

    return answer;
}