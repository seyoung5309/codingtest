#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		if (i % 4 == 0) {
			printf("long ");
		}
	}
	printf("int");
	return 0;
}