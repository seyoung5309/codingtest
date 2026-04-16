#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int n, a, b;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", lcm(a, b));        
    }

    return 0;
}
