#include <stdio.h>

int main(void) {
	int c_ch[] = {1, 1, 2, 2, 2, 8};
	int c[6];
	for (int i = 0; i < 6; i++) {
		scanf("%d", &c[i]);
	}
	for (int i = 0; i < 6; i++) {
		printf("%d ", c_ch[i]- c[i]);
	}
	return 0; 
}