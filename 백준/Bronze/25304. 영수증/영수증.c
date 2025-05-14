#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int X, N;
	int a[100], b[100];
	scanf("%d", &X);
	scanf("%d", &N);
	for (int i = 0; i <= N-1; i++) {
		scanf("%d %d", &a[i], &b[i]);
	}

	int num = 0;

	for (int i = 0; i <= N-1; i++) {
		num += a[i] * b[i];
	}
	
	(X == num) ? printf("Yes") : printf("No"); 

	return 0;
}