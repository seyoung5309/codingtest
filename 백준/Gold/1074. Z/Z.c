#include <stdio.h>
#include <math.h>

int func(int N, int r, int c);
 
int main() {
    int N, r, c;
    scanf("%d %d %d", &N, &r, &c);
 
    int result = func(N, r, c);
    printf("%d\n", result);
 
    return 0;
}

int func(int N, int r, int c) {
    if (N < 1) return 0;
 
    int m = (int)pow(2, N - 1);
 
    if (r < m && c < m) {
        return func(N - 1, r, c);
    } else if (r < m && c >= m) {
        return m * m + func(N - 1, r, c - m);
    } else if (r >= m && c < m) {
        return m * m * 2 + func(N - 1, r - m, c);
    } else {
        return m * m * 3 + func(N - 1, r - m, c - m);
    }
}