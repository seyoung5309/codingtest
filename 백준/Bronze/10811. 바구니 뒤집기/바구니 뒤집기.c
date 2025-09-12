#include <stdio.h>

int main(void) {
	int N, M;
	scanf("%d %d", &N, &M);
	int arr[N];
	for (int i = 0; i < N; i++) {
		arr[i] = i+1;
	}
	
	int i, j, save, count;
	for (int a = 0; a < M; a++) {
		scanf("%d %d", &i, &j);
		count = j-1;
		for (int b = i; b <= (i+j)/2; b++) {
			if (b == j) {
				continue;
			}
			save = arr[b-1];
			arr[b-1] = arr[count];
			arr[count] = save;
			count--;
		}
	}
	
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
}

