#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int start;
	scanf("%d", &start);
	int value[100];
	for (int i = 0; i <= start - 1; i++) {
		scanf("%d", &value[i]);
	}
	int a;
	int b = 0;
	scanf("%d", &a);
	for (int i = 0; i <= start - 1; i++) {
		if (a == value[i]) {
			b += 1;
		}
	}
	printf("%d", b);

	return 0;
}