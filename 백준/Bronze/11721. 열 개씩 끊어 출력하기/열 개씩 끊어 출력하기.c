#include <stdio.h>
#include <string.h>

int main(void) {
	char str[101] = {'\0'};
	scanf("%s", &str);
	
	int count = 0; 
	for (int i = 0; i < strlen(str); i++) {
		printf("%c", str[i]);
		count++;
		if (count == 10) {
			printf("\n");
			count = 0; 
		}
	}
	
	return 0; 
}