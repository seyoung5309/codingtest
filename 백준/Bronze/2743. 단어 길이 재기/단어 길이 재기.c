#include <stdio.h>

int main(void) {
	int arr[100];
	int count = 0; 
	for (int i = 0; i < 100; i++) {
		arr[i] = getchar();
		if (arr[i] == '\n') {
			break;
		}
		count++;
	}
	printf("%d", count);
}