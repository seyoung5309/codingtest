#include <stdio.h>
#include <string.h>

int main(void) {
	char num1[3];
	char num2[3];
	
	int A = 0;
	int B = 0;
	
	scanf("%s %s", &num1, &num2);
	
	int mul = 1; 
	for (int i = 0; i < 3; i++) {
		A += (int)((num1[i] - '0')*mul);
		B += (int)((num2[i] - '0')*mul);
		mul *= 10;
	}
	
	if (A > B) {
		printf("%d", A);
	} else {
		printf("%d", B);
	}
	
	return 0; 
}