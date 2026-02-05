#include <stdio.h>
#include <string.h>

int main(void) {
	int n; 
	scanf("%d", &n);
	
	char str[51] = {'\0'};
	for (int i = 0; i < n; i++) {
		scanf(" %s", &str);
		int index = 0, count = 0;
		for (int j = 0; j < strlen(str); j++) {
			if (str[j] == '(') {
				index++;
			} else if (str[j] == ')') {
				if (index <= 0) {
					printf("NO\n");
					count = 1;
					break;
				} else {
					index--;
				}
			}
		}
		if (count) continue;
		if (index > 0) {
			printf("NO\n");
		} else {
			printf("YES\n");
		}
	}
	
	return 0; 
}