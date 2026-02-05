#include <stdio.h>

int isPrime(int n);

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    int sum = 0, min = 0;
    for (int i = n; i <= m; i++) {
        if (isPrime(i)) {
            min = i;
            break;
        }
    }

    if (min == 0) {
        printf("-1\n");
        return 0;
    }

    for (int i = min; i <= m; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    printf("%d\n%d\n", sum, min);
    return 0;
}

int isPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}
