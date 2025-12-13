#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	
	int answer = 1;
	for (int i = 0; i < n; i++) {
		answer *= 2;
	}
	
	printf("%d", answer);
	return 0; 
}