#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);

        if (x >= y) {
            printf("MMM BRAINS\n");
        } else {
            printf("NO BRAINS\n");
        }
    }

    return 0;
}
