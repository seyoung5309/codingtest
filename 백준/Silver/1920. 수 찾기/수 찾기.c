#include <stdio.h>
#include <stdlib.h>

int cmp(const void* p1, const void* p2) {
    int x = *(int*)p1;
    int y = *(int*)p2;
    return (x > y) - (x < y);
}

int main(void) {
    int n, m;
    scanf("%d", &n);

    int* a = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    int* b = (int*)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    qsort(a, n, sizeof(int), cmp);

    for (int i = 0; i < m; i++) {
        int l = 0, r = n - 1, ok = 0;

        while (l <= r) {
            int mid = (l + r) / 2;

            if (b[i] == a[mid]) {
                ok = 1;
                break;
            } else if (b[i] < a[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        printf("%d\n", ok);
    }

    free(a);
    free(b);
    return 0;
}
