#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    const long long mod = 1234567891;
    long long result = 0, mul = 1;

    for (int i = 0; i < n; i++) {
        char c;
        scanf(" %c", &c);
        result = (result + (c - 'a' + 1) * mul) % mod;
        mul = (mul * 31) % mod;
    }

    printf("%lld", result);
    return 0;
}
