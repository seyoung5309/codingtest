#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = n; i <= m; i++) {
        if (i < 2) continue;
        int check = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                check = 0;
                break;
            }
        }
        if (check)
            printf("%d\n", i);
    }

    return 0;
}
