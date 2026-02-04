#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	getchar();
	
	long long result = 0; long mul = 1;
	for (int i = 1; i <= n; i++) {
		char c;
		scanf("%c", &c);
		result += (c - 'a' + 1) * mul;
		mul *= 31;
	}
    
	printf("%d", result);
	return 0; 
}