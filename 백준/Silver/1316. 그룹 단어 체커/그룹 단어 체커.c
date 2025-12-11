#include <stdio.h>
#include <string.h>

int main(void) {
	int n, count = 0, check = 1; 
	char str[101];
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", str);
		for (int j = 1; j < strlen(str); j++) {
			if (str[j] == str[j-1]) {
				continue;
			} else {
				for (int l = 0; l < j; l++) {
					if (str[j] == str[l]) {
						check = 0; 
						break;
					}
				}
			}
		}
		if (check == 1) {
			count++;
		}
		check = 1; 
	}
	
	printf("%d", count);
	return 0; 
}