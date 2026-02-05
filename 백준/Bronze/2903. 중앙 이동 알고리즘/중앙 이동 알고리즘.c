
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int l = 2;
    int sum = 0;

    for(int i=1; i<=n; i++) {
        sum = l + 1;
        sum *=sum;
        l = l * 2;
    }

    printf("%d\n", sum);
    return 0;
}