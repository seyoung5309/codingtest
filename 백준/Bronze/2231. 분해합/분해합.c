#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str[8];
    scanf("%7s", str);

    int num = atoi(str);
    int result = 0;

    for (int i = 0; i < num; i++) {
        int sum = i;
        int n = i;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        if (sum == num) {
            result = i;
            break;
        }
    }

    printf("%d", result);
    return 0;
}
