#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int size = 0, index_c = 0; 
int * arr = NULL;
void one(), two(), three(), four(), five();

int main(void) {
	int n; char c[10] = {'\0'};
	scanf("%d", &n);
	for (int i= 0; i < n; i++) {
		scanf("%s", &c);
        if (strcmp(c, "push") == 0) one();
        else if (strcmp(c, "pop") == 0) two();
        else if (strcmp(c, "size") == 0) three();
        else if (strcmp(c, "empty") == 0) four();
        else five();
	}
	return 0; 
}

void one() {
	int n;
	scanf("%d", &n);
	arr = (int *)realloc(arr, sizeof(int) * ++size);
	arr[index_c++] = n;
}

void two() {
	if (size != 0) {
		printf("%d\n", arr[--index_c]);
		arr = (int *)realloc(arr, sizeof(int) * --size);
	} else {
		printf("-1\n");
	}
}

void three() {
	printf("%d\n", size);
}

void four() {
	if (size == 0) {
		printf("1\n");
	} else {
		printf("0\n");
	}
}

void five() {
	if (size == 0) {
		printf("-1\n");
	} else {
		printf("%d\n", arr[size - 1]);
	}
}