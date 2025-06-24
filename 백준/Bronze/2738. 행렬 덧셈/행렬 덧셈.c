#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	int arr1[100][100];
	int arr2[100][100];

	for (int i = 0; i < num1; i++) {
		for (int j = 0; j < num2; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}
	for (int i = 0; i < num1; i++) {
		for (int j = 0; j < num2; j++) {
			scanf("%d", &arr2[i][j]);
		}
	}
	for (int i = 0; i < num1; i++) {
		for (int j = 0; j < num2; j++) {
			printf("%d ", arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}