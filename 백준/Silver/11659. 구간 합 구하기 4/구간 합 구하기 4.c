#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int *arr = (int *)malloc(sizeof(int) * (n + 1));
    int *prefix = (int *)malloc(sizeof(int) * (n + 1));

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    prefix[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int a, b;
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);

        int sum = prefix[b] - prefix[a - 1];
        printf("%d\n", sum);
    }

    return 0;
}
