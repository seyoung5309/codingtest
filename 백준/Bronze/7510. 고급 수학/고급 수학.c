#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	
	long arr[n][3];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%ld", &arr[i][j]);
			arr[i][j] *= arr[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		printf("Scenario #%d:\n", i+1);
		if (arr[i][1] == arr[i][2] + arr[i][0]) {
			printf("yes\n");
		} else if (arr[i][2] == arr[i][1] + arr[i][0]) {
			printf("yes\n");
		} else if (arr[i][0] == arr[i][2] + arr[i][1]) {
			printf("yes\n");
		} else {
			printf("no\n");
		}
		printf("\n");
	}
	
	return 0; 
}