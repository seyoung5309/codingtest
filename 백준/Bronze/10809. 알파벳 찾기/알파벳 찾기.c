#include <stdio.h> 

int main(void) {
	char arr[1000];
	int count = 0; 
	for (int i = 0; i < 1000; i++) {
		arr[i] = getchar();
		if (arr[i] == '\n') {
			break;
		}
		count++;
	}
	
	int en[26];
	for (int i = 0; i < 26; i++) {
		en[i] = -1;
	}
	
	for (int i = 0; i < count; i++) {
		if (en[arr[i] - 'a'] != -1) {
			continue;
		}
		en[arr[i] - 'a'] = i;
	}
	
	for (int i = 0; i < 26; i++) {
		printf("%d ", en[i]);
	}
	
	return 0; 
}