#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);

	int A[100], B[100];

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A[i], &B[i]);
	}
	for (int i = 0; i < T; i++) {
		printf("Case #%d: %d\n", i+1, A[i] + B[i]);
	}
	return 0; 
}