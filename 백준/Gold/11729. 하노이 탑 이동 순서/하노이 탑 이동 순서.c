#include <stdio.h>

void HanoiTower(int n, int a, int b, int c);

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%d\n", (1 << n) - 1);
    HanoiTower(n, 1, 2, 3);

    return 0;
}

void HanoiTower(int n, int a, int b, int c)
{
    if (n == 1)
        printf("%d %d\n", a, c);
    else
    {
        HanoiTower(n - 1, a, c, b);
        printf("%d %d\n", a, c);
        HanoiTower(n - 1, b, a, c);
    }
}