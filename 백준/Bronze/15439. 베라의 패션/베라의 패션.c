#include <stdio.h>

int main(void) {

	int n; 
	scanf("%d", &n);
	
	int answer = n * (n-1);
	printf("%d\n", answer);
	
	return 0; 
}