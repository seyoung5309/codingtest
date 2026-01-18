#include <stdio.h>

int level(int);

int main(void) {
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", level(arr[i]));
	}
	return 0; 
}

int level(int a) {
	if (a >= 300) {
		return 1;
	} else if (a >= 275) {
		return 2;
	} else if (a >= 250) {
		return 3;
	} else {
		return 4; 
	}
}