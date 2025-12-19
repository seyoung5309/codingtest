#include <stdio.h>
#include <string.h>

int main(void) {
	char str[101] = {'\0'};
	int arr[5] = {0};
	int check = 0; 
	
	scanf("%s", &str);
	
	if (strchr(str, 'M')) {
		arr[0] = 1;
	}
	if (strchr(str, 'O')) {
		arr[1] = 1;
 	}
	 if (strchr(str, 'B')) {
 		arr[2] = 1;
	}
	if (strchr(str, 'I')) {
		arr[3] = 1;
	}
	if (strchr(str, 'S')) {
		arr[4] = 1;
	}
	
	for (int i = 0; i < 5; i++) {
		check += arr[i];
	}	

	if (check == 5) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	
	return 0; 
}