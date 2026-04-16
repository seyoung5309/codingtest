#include <stdio.h>

int func(int);

int main(void) {
	int n;
	scanf("%d", &n);
	int m[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &m[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", func(m[i]));
	}
	return 0;
}

int func(int n) {
	if (n == 0) { return 1; }
	if (n == 1) { return 1; }
	
	if (n >= 3) {
		return func(n-3) + func(n-2) + func(n-1);
	} else if (n >= 2) {
		return func(n-2) + func(n-1);
	} else {
		return func(n);
	}
}