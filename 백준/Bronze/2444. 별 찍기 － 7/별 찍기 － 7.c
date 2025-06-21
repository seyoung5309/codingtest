#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);
    for (int i = 1; i < num; i++) {
        for (int j = num; j > i; j--) {
            printf(" ");
        }
        for (int u = 1; u <= i * 2; u++) {
            if (u / 2 != 0) {
                printf("*");
            }
        }
        printf("\n");
    }
    for (int i = num; i >= 1; i--) {
        for (int j = i; j < num; j++) {
            printf(" ");
        }
        for (int u = i * 2; u > 1; u--) {
            if (u / 2 != 0) {
                printf("*");
            }
        }
        printf("\n");
    }
}
