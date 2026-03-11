#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char arr[3][9] = {'\0'};
	for (int i = 0; i < 3; i++) {
		scanf(" %s", &arr[i]);
	}
	
	char ab[9] = {'\0'};
	strcpy(ab, arr[0]);
	strcat(ab, arr[1]);
	
	int sum1 = atoi(ab) - atoi(arr[2]);
	
	printf("%d\n", atoi(arr[0]) + atoi(arr[1]) - atoi(arr[2]));
	printf("%d\n", sum1);
	
	return 0; 
}