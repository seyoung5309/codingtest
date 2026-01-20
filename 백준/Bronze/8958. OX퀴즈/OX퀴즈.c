#include <stdio.h>
#include <string.h>

int main(void) {
	int n;
	scanf("%d", &n);
	char str[n][81];
	int arr[100] = {0}; 
	
	for (int i = 0; i < n; i++) {
		scanf("%s", &str[i]);
	}
	
	int count = 0; 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < strlen(str[i]); j++) {
			count++;
			if (str[i][j] != 'O') {
				count = 0;
			}
			arr[i] += count;
		}
		count = 0; 
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	return 0; 
}