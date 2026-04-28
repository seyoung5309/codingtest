#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int count = 1;

    while (B > A) {
        if (B % 10 == 1) {
            B /= 10;
        } else if (B % 2 == 0) {
            B /= 2;
        } else {
            break;
        }
        count++;
    }

    if (B == A) printf("%d\n", count);
    else printf("-1\n");

    return 0;
}
