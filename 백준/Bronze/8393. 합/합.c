#include <stdio.h>
#define _CRT_SECURE_NO_WARNING

int main(void) {
	int a;
	int b = 0;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		b += i;
	}
	printf("%d", b);
	return 0;
}