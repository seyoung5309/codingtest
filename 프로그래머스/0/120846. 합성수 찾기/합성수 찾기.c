#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0, check = 0;
    for (int i = 2; i <= n; i++) {
        check = 0; 
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                check++;
            }
            if (check == 3) {
                answer++;
                printf("%d", i);
                break;
            }
        }
    }
    return answer;
}