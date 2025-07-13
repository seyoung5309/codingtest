#include <stdio.h>

int main(void) {
    int num;
    int answer = 1; 
    scanf("%d", &num);
    if (num == 0) {
        printf("%d", answer);
    } else {
        for (int i = 1; i <= num; i++) {
            answer *= i;
        }
        printf("%d", answer);
    }
    return 0; 
}