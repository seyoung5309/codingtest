#include <stdio.h>

int add(int, int);

int main(void) {
	int n1, n2, n3, m1, m2, m3;
	scanf("%d %d %d", &n1, &n2, &n3);
	scanf("%d %d %d", &m1, &m2, &m3);
	
	int result = 0; 
	result += add(n1, m1);
	result += add(n2, m2);
	result += add(n3, m3);
	
	printf("%d", result);	
	return 0; 
}

int add(int a, int b) {
	return (a > b) ? 0 : -1 * (a - b);
}