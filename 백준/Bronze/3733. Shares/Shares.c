#include <stdio.h>

int main(void) {
    int n;
    long long s;

    while (scanf("%d %lld", &n, &s) == 2) {
        long long x = s / (n + 1);
        printf("%lld\n", x);
    }

    return 0;
}
