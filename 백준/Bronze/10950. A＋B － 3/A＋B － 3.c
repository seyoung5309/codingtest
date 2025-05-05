#include <stdio.h>
#define _CRT_SECURE_NO_WARNING

int main(void) {
	int a;
	scanf("%d", &a);
	int b[256], c[256]; 
	for (int i = 0; i <= a-1; i++) {
		scanf("%d %d", &b[i], &c[i]);
	}
	for (int i = 0; i <= a-1; i++) {
		printf("%d\n", b[i] + c[i]);
	}
	return 0;
}