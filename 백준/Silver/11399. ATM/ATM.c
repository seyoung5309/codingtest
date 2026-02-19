#include <stdio.h>

void function(int);

int main(void) {
	int n;
	scanf("%d", &n);
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	int save = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (arr[j] > arr[i]) {
				save = arr[j];
				arr[j] = arr[i];
				arr[i] = save;
			}
		}
	}
	
	int sum = 0; 
	for (int i = n-1; i >= 0; i--) {
		for (int j = n-1; j >= i; j--) {
			sum += arr[j];
		}
	}
	
	printf("%d", sum);
	return 0; 
}