#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = n; i > 0; i--) {
		for (int j = n; j > i; j--) {
			printf(" ");
		}
		for (int l = 0; l < i; l++) {
			printf("*");
		}
		printf("\n");
	}
}