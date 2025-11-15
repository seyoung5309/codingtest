// 백준 - 2577 - 숫자의 개수

#include <stdio.h>
#include <string.h>

int main(void) {
	
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	int num_int = A * B * C;
	
	char num_char[11] = { "\0" };
	sprintf(num_char, "%d", num_int);
	
	char num[10] = {0};
	
	for (int i = 0; i < strlen(num_char); i++) {
		num[(num_char[i] - '0')]++;
	}
	
	for (int i = 0; i < 10; i++) {
		printf("%d\n", num[i]);
	}

	return 0; 
} 