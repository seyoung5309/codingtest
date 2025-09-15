#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	
	int x[T];
	int count[T];
	char arr[T][20];
	
	for (int i = 0; i < T; i++) {
        count[i] = 0; 
		scanf("%d ", &x[i]);
		for (int j = 0; j < 20; j++) {
			arr[i][j] = getchar();
			if (arr[i][j] == '\n') {
				break;
			}
			count[i]++;
		}
	}
	for (int i = 0; i < T; i++) {
		for (int j = 0; j < count[i]; j++) {
			for (int u = 0; u < x[i]; u++)	{
				printf("%c", arr[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0; 
}