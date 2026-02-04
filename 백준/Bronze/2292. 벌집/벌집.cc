#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n); 
	
	if (n == 1) {
		printf("1\n");
		return 0; 
	}

	for (int i = 1; i ; i++) {
		n -= i * 6;
		if (n <= 1) {
			printf("%d\n", i + 1);
			return 0; 
		}
	}
}