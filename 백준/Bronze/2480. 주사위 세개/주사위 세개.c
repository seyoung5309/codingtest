#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3); 

    int prize = 0;

    if (num1 == num2 && num2 == num3) {
        prize = 10000 + num1 * 1000;
    }
    else if (num1 == num2 || num2 == num3 || num3 == num1) {
        int same;
        if (num1 == num2 || num1 == num3) {
            same = num1;
        }
        else {
            same = num2;
        }
        prize = 1000 + same * 100;
    }
    else {
        int max = num1;
        if (num2 > max) max = num2;
        if (num3 > max) max = num3;
        prize = max * 100;
    }

    printf("%d\n", prize);
    return 0;
}