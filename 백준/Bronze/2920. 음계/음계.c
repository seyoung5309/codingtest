#include <stdio.h>

int main(void) {
    int arr[8];
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    int asc = 1, desc = 1;

    for (int i = 0; i < 7; i++) {
        if (arr[i] + 1 != arr[i + 1]) asc = 0;
        if (arr[i] - 1 != arr[i + 1]) desc = 0;
    }

    if (asc) printf("ascending\n");
    else if (desc) printf("descending\n");
    else printf("mixed\n");

    return 0;
}
