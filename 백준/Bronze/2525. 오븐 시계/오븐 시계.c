#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c;

	scanf("%d %d", &a, &b);
	scanf("%d", &c);

	int time3 = (b + c) / 60;
	int time1 = (a + time3) % 24;
	int time2 = (b + c) % 60;

	printf("%d %d", time1, time2);

	return 0;
}