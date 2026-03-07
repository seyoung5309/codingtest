#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int * arr = (int *)malloc(sizeof(int)*1);
	int index = 1; int sum = 0; 
	
	if (arr == NULL) {
		return -1;
	}
	
	while (scanf("%d", &n), n != -1) {
		printf("%d ", n);
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				arr[index++-1] = i;
				arr = realloc(arr, sizeof(int)*index);
				sum += i;
			}
		}
		if (n == sum) {
			printf("= ");
			for (int i = 0; i < index-1; i++) {
				if (index-2 == i) {
					printf("%d", arr[i]);
				} else {
					printf("%d + ", arr[i]);
				}
			}
			printf("\n");
		} else {
			printf("is NOT perfect.\n");
		}
		
		arr = realloc(arr, sizeof(int)*1);
		index = 1; sum = 0; 
	}
	
	free(arr);
	return 0;
}