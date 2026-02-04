#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		int arr[4] = {0};
		scanf("%d", &arr[3]);
		while (1) {
			if (arr[3] < 25) break;
			arr[3] -= 25; arr[0]++;
		}
		while (1) {
			if (arr[3] < 10) break;
			arr[3] -= 10; arr[1]++;
		}
		while (1) {
			if (arr[3] < 5) break;
			arr[3] -= 5; arr[2]++;
		}
		for (int i = 0; i < 4; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	
	return 0; 
}