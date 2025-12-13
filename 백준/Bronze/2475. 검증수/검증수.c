#include <stdio.h>

int main(void) {
	int arr[5];
	int answer = 0; 
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		arr[i] *= arr[i];
		answer += arr[i];
	}
	printf("%d", answer%10);
	return 0; 
}