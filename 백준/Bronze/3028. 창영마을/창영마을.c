#include <stdio.h>
#include <string.h>

int main(void) {
	int arr[3] = {1, 0, 0};
	int save;
	
	char str[51] = {'\0'};
	fgets(str, 51, stdin);
	
	for (int i = 0; i < strlen(str)-1; i++) {
		switch (str[i]) {
			case 'A': 
				save = arr[0];
				arr[0] = arr[1];
				arr[1] = save;
				break;
			case 'B':
				save = arr[1];
				arr[1] = arr[2];
				arr[2] = save;
				break;
			default: 
				save = arr[2];
				arr[2] = arr[0];
				arr[0] = save;
		}
	}
	
	for (int i = 0; i < 3; i++) {
		if (arr[i] == 1) {
			printf("%d\n", i+1);
		}
	}
	
	return 0; 
}