#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, k;
	scanf("%d %d", &n, &k);
	int *arr = malloc(sizeof(int) * 1);
	
	int index = 1; 
	for (int i = 1; i <= n; i++) {
		if (n%i == 0) {
			arr[index-1] = i;
			arr = realloc(arr, sizeof(int) * ++index);
		}
	}
	
	if (index > k) {
		printf("%d", arr[k-1]);	
	} else {
		printf("0");
	}
    
	return 0; 
}