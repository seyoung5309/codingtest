#include <stdio.h>

int main(void) {
	int length;
	scanf("%d", &length);
	getchar();
	
	char arr[length][1000];
	int count[length];
	
	for (int i = 0; i < length; i++) {
		count[i] = 0;
		for (int j = 0; j < 1000; j++) {
			arr[i][j] = getchar();
			if (arr[i][j] == '\n') {
				break;
			}
			count[i]++;
		}
	}
	
	for (int i = 0; i < length; i++) {
		printf("%c%c\n", arr[i][0], arr[i][count[i]-1]);
	}
	
	return 0; 
}