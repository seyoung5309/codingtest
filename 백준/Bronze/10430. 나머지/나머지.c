#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C); 
	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d\n", ((A % C) * (B % C)) % C);
	return 0; 
}