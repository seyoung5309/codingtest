#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0;
    int count = 0; 
    for (int i = left; i <= right; i++) {
        count = 0; 
        for (int j = 1; j <= i; j++) {
            for (int u = j; u <= j; u++) {
                if (j * u == i) {
                    count++;
                    continue;
                }
            }
        }
        if (count % 2 == 0) {
            answer += i;
        } else {
            answer -= i;
        }
    }
    return answer;
}