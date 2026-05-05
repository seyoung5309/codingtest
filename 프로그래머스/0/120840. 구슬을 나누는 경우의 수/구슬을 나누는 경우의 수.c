#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int balls, int share) {
    long long result = 1;

    for (int i = 1; i <= share; i++) {
        result = result * (balls - i + 1) / i;
    }

    return result;
}