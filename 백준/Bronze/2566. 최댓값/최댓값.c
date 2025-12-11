#include <stdio.h>

int main(void) {
	int arr[9][9] = {0};
	int score = 0, p1, p2;
	for (int i = 0; i < 9; i++) { 
		for (int j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
			for (int n = 0; n <= i; n++) {
				for (int m = 0; m < 9; m++) {
					if (score <= arr[n][m]) {
						score = arr[n][m];
						p1 = n; 
						p2 = m;
					}
				}
			}
		}
	}
	printf("%d\n%d %d", score, p1+1, p2+1);
	return 0; 
}