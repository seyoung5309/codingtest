#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	
	int count = 0, c = 1;
	while (1) {
		if ((c & 1) == 0) {
			int j = c;
			for (int i = 1; i <= c; i++) {
				count++;
				if (count == n) {
					printf("%d/%d\n", i, j);
					return 0; 
				}
				j--;
			}
			c++;
		} else {
			int j = 1;
			for (int i = c; i >= 1; i--) {
				count++;
				if (count == n) {
					printf("%d/%d\n", i, j);
					return 0; 
				}
				j++; 
			}
			c++;
		}
	}
}