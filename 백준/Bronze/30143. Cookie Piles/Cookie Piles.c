#include <stdio.h>

double result(double a, double b, double c);

int main(void) {
	int n;
	scanf("%d", &n);
	int arr[n][3];
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
	}
	for (int i = 0; i < n; i++) {
		printf("%.lf\n", result((double)arr[i][0], (double)arr[i][1], (double)arr[i][2]));
	}
	return 0;
}

double result(double a, double b, double c) {
	return (a / 2) * ((2 * b) + (a - 1) * c);
}