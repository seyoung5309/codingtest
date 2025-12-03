#include <stdio.h>
#include <stdlib.h>

int c(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(void) {
	int n; 
	scanf("%d", &n);
	
	int * arr = (int *)malloc(sizeof(int)*n);
	int save; 
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	qsort(arr, n, sizeof(int), c);
	
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	free(arr);
	return 0; 
}