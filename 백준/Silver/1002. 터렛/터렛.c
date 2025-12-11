#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x1, y1, r1, x2, y2, r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

        int dx = x1 - x2;
        int dy = y1 - y2;
        int d2 = dx*dx + dy*dy; 

        int sum = r1 + r2;
        int dif = r1 > r2 ? r1 - r2 : r2 - r1;

        if (x1 == x2 && y1 == y2 && r1 == r2) {
            printf("-1\n"); 
        } else if (d2 == sum*sum || d2 == dif*dif) {
            printf("1\n"); 
        } else if (d2 < sum*sum && d2 > dif*dif) {
            printf("2\n");
        } else {
            printf("0\n");
        }
    }
    return 0;
}
