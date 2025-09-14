  #include <stdio.h>

int main(void) {
	int arr[10];
	int count = 10; 
	
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		arr[i] = arr[i]%42;
		for (int j = 0; j < i; j++) {
			if (arr[j] == arr[i]) {
				count--;
				break;
			}
		}
	}
	
	printf("%d", count);
	
	return 0; 
}