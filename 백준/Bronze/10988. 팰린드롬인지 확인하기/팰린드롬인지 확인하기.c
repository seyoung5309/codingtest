#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
	char en[100];
	bool ch = true;
	
	gets(en);
    int len = strlen(en);
	int count = strlen(en)-1;
	
	for (int i = 0; i < len; i++) {
		if (en[i] != en[count]) {
			ch = false;
			break;
		}
		count--;
	}
	
	if (ch) {
		printf("1");
	} else {
		printf("0");
	}
	
	return 0;
}