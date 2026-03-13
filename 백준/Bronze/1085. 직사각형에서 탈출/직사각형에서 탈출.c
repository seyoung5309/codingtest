#include <stdio.h>

int main(void) {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	int arr[4]; 
	arr[0] = x;
	arr[1] = y;
	arr[2] = w - x;
	arr[3] = h - y;
	int n = 1000; 
	
	for (int i = 0; i < 4; i++) {
		if (n > arr[i]) {
			n = arr[i];
		}
	}
	
	printf("%d", n);
	return 0; 
}