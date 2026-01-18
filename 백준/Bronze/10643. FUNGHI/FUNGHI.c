#include <stdio.h>

int main(void) {
    int arr[8];
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    int pizza = 0;

    for (int i = 0; i < 8; i++) {
        int sum = 0;
        for (int k = 0; k < 4; k++) {
            sum += arr[(i + k) % 8];
        }
        if (sum > pizza) {
            pizza = sum;
        }
    }

    printf("%d\n", pizza);
    return 0;
}
