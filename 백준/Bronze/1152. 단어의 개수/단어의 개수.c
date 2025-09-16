#include <stdio.h>
#include <string.h>

int main(void) {
	char ch[1000000];
	gets(ch);
	
	int count = 0; 
	for (int i = 0; i < strlen(ch); i++) {
		if (ch[i] == ' ') {
			count++;
		}
	}
	if(ch[0] == ' ' && ch[strlen(ch)-1] == ' ') {
		printf("%d", count-1);
	} else if (ch[0] == ' ' || ch[strlen(ch)-1] == ' ') {
		printf("%d", count);
	} else {
		printf("%d", count+1);
	}
	
	return 0; 
}