#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int a[10000];
	int b, c;
	scanf("%d %d", &b, &c);
		
	for (int i = 0; i <= b - 1; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i <= b - 1; i++) {
		if (a[i] < c) {
			printf("%d ", a[i]);
		}
	}
	return 0; 
}

