#include <stdio.h>

int main(void) {
	int N, M;
	scanf("%d %d", &N, &M);
	
	int arr[N];
	
	for (int i = 0; i < N; i++) {
		arr[i] = i+1;
	}
	
	int i, j, save; 
	for (int a = 0; a < M; a++) {
		scanf("%d %d", &i, &j);
		save = arr[i-1];
		arr[i-1] = arr[j-1];
		arr[j-1] = save;
	}
	
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0; 
}