#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int * arr = NULL; int n;
	scanf("%d", &n);
	
	int index = 0, m;
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		if (m == 0 && index > 0) {
			arr = (int *)realloc(arr, sizeof(int) * --index);
		} else {
			arr = (int *)realloc(arr, sizeof(int) * ++index);
			arr[index-1] = m;
		}
	}
	
	int sum = 0;
	for (int i = 0; i < index; i++) {
		sum += arr[i];
	}
	
	printf("%d", sum);
	return 0; 
}