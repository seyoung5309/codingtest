#include <stdio.h>

int main(void) {
	int n, a, answer = 0;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		answer += a;
	}
	
	printf("%d", answer);
	return 0; 
}