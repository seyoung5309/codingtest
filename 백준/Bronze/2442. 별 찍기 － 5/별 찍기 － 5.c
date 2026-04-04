#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = n; j > i + 1; j--) {
			printf(" ");
		}
		for (int l = 0; l < (i + 1) * 2 - 1; l++) {
			printf("*");
		}
		printf("\n");
	}
}