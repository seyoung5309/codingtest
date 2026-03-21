#include <stdio.h>
#include <stdlib.h>

struct XY {
    int x;
    int y;
};

int compare(const void *a, const void *b) {
    struct XY *p1 = (struct XY*)a;
    struct XY *p2 = (struct XY*)b;

    if (p1->y != p2->y)
        return p1->y - p2->y; 

    return p1->x - p2->x;
}

int main(void) {
    int n;
    scanf("%d", &n);

    struct XY xy_n[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &xy_n[i].x, &xy_n[i].y);
    }
    
    qsort(xy_n, n, sizeof(struct XY), compare);

    for (int i = 0; i < n; i++) {
        printf("%d %d\n", xy_n[i].x, xy_n[i].y);
    }

    return 0;
}
