#include <stdio.h>
#include <stdlib.h>

int size = 0, index = 0; 
int * arr = NULL;
void one(), two(), three(), four(), five();

int main(void) {
	int n, m;
	scanf("%d", &n);
	for (int i= 0; i < n; i++) {
		scanf("%d", &m);
		switch (m) {
			case 1: 
				one();
				break;
			case 2: 
				two();
				break;
			case 3: 
				three();
				break;
			case 4: 
				four();
				break;
			default:
				five();
		}
	}
	return 0; 
}

void one() {
	int n;
	scanf("%d", &n);
	arr = (int *)realloc(arr, sizeof(int) * ++size);
	arr[index++] = n;
}

void two() {
	if (size != 0) {
		printf("%d\n", arr[--index]);
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