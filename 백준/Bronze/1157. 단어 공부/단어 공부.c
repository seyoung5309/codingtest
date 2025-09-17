#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(void) {
	char ch[1000000];
	int en[26] = {0};
	
	gets(ch);
	int len = strlen(ch);
	
	for (int i = 0; i < len; i++) {
		ch[i] = tolower(ch[i]); 
		en[ch[i]-'a']++;
	}
	
	int result[2] = {0};
	for (int i = 0; i < 26; i++) {
		if (en[i] > result[1]) {
			result[0] = i;
			result[1] = en[i];
		}
	}
	
	bool b = false;
	for (int i = 0; i < 26; i++) {
		if (i == result[0]) {
			continue;
		}
		if (result[1] == en[i]) {
			b = true;
			break;
		}
	}
	
	if (!b) {
		printf("%c", 'A'+result[0]);
	} else {
		printf("?");
	}
	
	return 0; 
}