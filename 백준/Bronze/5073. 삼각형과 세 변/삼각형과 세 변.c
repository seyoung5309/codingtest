#include <stdio.h>
#include <stdlib.h>

int sort_ab(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(void) {
	int arr[3];
	int tmp;
	while (1) {
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
			break;
		}
		qsort(arr, 3, sizeof(int), sort_ab);
		if (arr[0] + arr[1] <= arr[2]) {
			printf("Invalid\n");
		} else if (arr[0] == arr[1] && arr[1] == arr[2]) {
			printf("Equilateral\n");
		} else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[2] == arr[0]) {
			printf("Isosceles\n");
		} else {
			printf("Scalene\n");
		}
	}
	return 0; 
}