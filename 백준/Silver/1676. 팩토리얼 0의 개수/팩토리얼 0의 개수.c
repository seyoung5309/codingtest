#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }

    printf("%d\n", count);
    return 0;
}
