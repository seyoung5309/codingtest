#include <stdio.h>

long long fact(int);

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%lld\n", fact(n));
    return 0;
}

long long fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}
