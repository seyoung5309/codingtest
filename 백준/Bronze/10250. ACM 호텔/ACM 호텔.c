#include <stdio.h>

int main(void) {
    int p;
    scanf("%d", &p);

    while (p--) {
        int w, h, n;
        scanf("%d %d %d", &w, &h, &n);

        int floor = (n - 1) % w + 1;
        int room = (n - 1) / w + 1;

        printf("%d%02d\n", floor, room);
    }

    return 0;
}
