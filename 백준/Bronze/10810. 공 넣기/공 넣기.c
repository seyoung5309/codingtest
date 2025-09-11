#include <stdio.h>

int main(void) {
	int N, M;
	scanf("%d %d", &N, &M);
	int arr[N];
	int i, j, k;
	
	for (int i = 0; i < N; i++) {
		arr[i] = 0;
	}
	
	for (int a = 0; a < M; a++) {
		scanf("%d %d %d", &i, &j, &k);
		for (i; i <= j; i++) {
			arr[i-1] = k;
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	return 0; 
}