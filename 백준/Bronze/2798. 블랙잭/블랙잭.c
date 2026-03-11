#include <stdio.h>

int main(void) {
	int n, size;
	scanf("%d %d", &n, &size);
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	int sum = 0, max = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int l = 0; l < n; l++) {
				if (i == j && j == l) {
					continue;
				} else if (i == j || j == l || l == i) {
					continue;
				}
				sum = arr[i] + arr[j] + arr[l];
				if (sum <= size && sum > max) {
					max = sum;
				}
			}
		}
	}
	
	printf("%d\n", max);
	return 0; 
}