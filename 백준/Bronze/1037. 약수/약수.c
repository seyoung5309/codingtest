#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);
	int arr[a];
	
	for (int i = 0; i < a; i++) {
		scanf("%d", &arr[i]);
	}
	
	int save;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] < arr[j]) {
				save = arr[i];
				arr[i] = arr[j];
				arr[j] = save;
			}
		}
	}
	
	printf("%d\n", arr[0] * arr[a-1]);
	return 0; 
}