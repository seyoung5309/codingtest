#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    int count = 0; 
    int answer; 

	for (int i = 0; i < n; i++) {
		int check = 1;
		scanf("%d", &answer);
		if (answer == 1) continue;
		for (int j = 2; j < answer; j++) {
			if (answer % j == 0) {
				check = 0;
				break;
			}
		}
		if (check) {
			count++;
		}
	}
	
	printf("%d\n", count);
	
    return 0;
}
