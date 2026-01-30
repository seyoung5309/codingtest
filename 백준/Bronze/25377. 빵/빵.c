#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int min = INT_MAX;

    while (n-- > 0) {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a > b) continue;
        if (b < min) min = b;
    }

    if (min == INT_MAX)
        printf("-1\n");
    else
        printf("%d\n", min);

    return 0;
}
