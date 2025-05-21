#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int num1[1000000];
	int num2[1000000];
	int num[1000000];

	int h;
	scanf("%d", &h);

	for (int i = 0; i <= h-1; i++) {
		scanf("%d %d", &num1[i], &num2[i]);
		num[i] = num1[i] + num2[i];
	}
	
	for (int i = 0; i <= h-1; i++) {
		printf("%d\n", num[i]); 
	}
	return 0;
}