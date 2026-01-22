#include <stdio.h>

int main(void) {
	int person[4];
	for (int i = 0; i < 4; i++) {
		scanf("%d", &person[i]);
	}
	
	int x, y, r;
	scanf("%d %d %d", &x, &y, &r);
	
	for (int i = 0; i < 4; i++) {
		if (person[i] == x) {
			printf("%d", i+1);
			return 0;
		}
	}
	
	printf("0");
	return 0; 
}