#include <stdio.h>

int main(void) {
	char arr[1000];
	int num; 
	
	for (int i = 0; i < 1000; i++) {
		arr[i] = getchar();
		if (arr[i] == '\n') {
			break;
		}
	}
	
	scanf("%d", &num);
	printf("%c", arr[num-1]);

	return 0; 
}