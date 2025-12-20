#include <stdio.h>

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	int count = 1; 
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d", count);
			if (j != m-1) {
				printf(" ");
			}
			count++;
		}
		printf("\n");
	}
	
	return 0; 
}