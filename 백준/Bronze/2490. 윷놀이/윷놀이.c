#include <stdio.h>

int main(void) {
	int arr[3] = {0};
	int n;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &n);
			if (n == 0) {
				arr[i]++;
			}
		}
	}
	
	for (int i = 0; i < 3; i++) {
		switch (arr[i]) {
			case 0: 
				printf("E\n");
				break;
			case 4: 
				printf("D\n");
				break;
			case 3: 
				printf("C\n");
				break;
			case 2:
				printf("B\n");
				break;
			case 1:
				printf("A\n");
		}
	}
	
	return 0; 
}