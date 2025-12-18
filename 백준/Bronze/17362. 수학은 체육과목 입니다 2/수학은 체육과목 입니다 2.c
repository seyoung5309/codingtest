#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    n %= 8;
    if (n > 5 || !n) {
        printf("%d", (10-n)%8);
    } else {
        printf("%d", n);
    }
    
    return 0;
}