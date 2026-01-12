#include <stdio.h>
#include <string.h>

int main(void) {
	int arr[4] = {-1, 0, 0, 1};
	char str[201] = {'\0'};
	int save = 0; 
	
	scanf(" %s", str);
	int i = 0; 
	while (str[i] != '\0') {
		switch (str[i]) {
			case 'A': 
				save = arr[0];
				arr[0] = arr[1];
				arr[1] = save;
				break; 
			case 'B': 
				save = arr[0];
				arr[0] = arr[2];
				arr[2] = save;
				break;
			case 'C': 
				save = arr[0];
				arr[0] = arr[3];
				arr[3] = save;
				break;
			case 'D': 
				save = arr[1];
				arr[1] = arr[2];
				arr[2] = save;
				break;
			case 'E': 
				save = arr[1];
				arr[1] = arr[3];
				arr[3] = save;
				break;
			default: 
				save = arr[2];
				arr[2] = arr[3];
				arr[3] = save;
		}
		i++;
	}
	
	int big, small;
	for (int i = 0; i < 4; i++) {
		if (arr[i] == -1) {
			small = i+1;
		} 
		if (arr[i] == 1) {
			big = i+1;
		}
	}
	printf("%d\n%d", small, big);
	return 0; 
}