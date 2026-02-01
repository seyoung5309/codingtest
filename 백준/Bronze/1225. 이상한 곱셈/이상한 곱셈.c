#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[100001] = {'\0'}, str2[100001] = {'\0'};
	scanf("%s %s", str1, str2);
	
	long long result = 0;
	for (int i = 0; i < strlen(str1); i++) {
		for (int j = 0; j < strlen(str2); j++) {
			result += (str1[i] - '0') * (str2[j] - '0');
		}
	}
	
	printf("%lld", result);
	return 0; 
}