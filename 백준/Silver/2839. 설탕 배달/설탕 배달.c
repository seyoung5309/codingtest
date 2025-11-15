#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int N;
	bool check = false;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if ((i*3)+(j*5) == N) {
				printf("%d", i+j);
				check = true; 
				break;
			}
		}
		if (check) {
			break;
		}
	}
	if (!check) {
		printf("-1");
	}
}