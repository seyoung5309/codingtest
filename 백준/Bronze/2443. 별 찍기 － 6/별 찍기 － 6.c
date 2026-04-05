#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int l = n; l > i; l--) {
			if (l == n) {
				printf("*");
				continue;
			}
			printf("**");
		}
		printf("\n");
	}
	return 0; 
}