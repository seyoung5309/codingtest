#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int result = n;
    int count = 0;

    while (1) {
        int a = n / 10;     
        int b = n % 10;     
        int sum = a + b;

        n = (b * 10) + (sum % 10); 

        count++;

        if (n == result)  {
            break;
        }
    }

    printf("%d\n", count);
    return 0;
}
