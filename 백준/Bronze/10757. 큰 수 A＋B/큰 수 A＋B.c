#include <stdio.h>
#include <string.h>

char num1[1010001];
char num2[1010001];
int num[1010002];

int main(void) {
    scanf("%s %s", num1, num2);

    int i = strlen(num1) - 1;
    int j = strlen(num2) - 1;
    int count = 0;

    while (i >= 0 || j >= 0) {
        int n1 = (i >= 0) ? num1[i] - '0' : 0;
        int n2 = (j >= 0) ? num2[j] - '0' : 0;

        num[count] += n1 + n2;

        if (num[count] >= 10) {
            num[count] -= 10;
            num[count + 1] += 1;
        }

        i--; j--; count++;
    }

    if (num[count] != 0) count++;

    for (int k = count - 1; k >= 0; k--) {
        printf("%d", num[k]);
    }
    printf("\n");

    return 0;
}
