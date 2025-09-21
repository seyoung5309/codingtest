#include <stdio.h>
#include <string.h>

int main(void) {
	char ch[15];
	int num = 0; 
	char c = ' '; 
	
	gets(ch);
	
	for (int i = 0; i < strlen(ch); i++) {
		c = ch[i];
		if (c == 'A' || c == 'B' || c == 'C') {
			num += 3;
		} else if (c == 'D' || c == 'E' || c == 'F') {
			num += 4;
		} else if (c == 'G' || c == 'H' || c == 'I') {
			num += 5; 
		} else if (c == 'J' || c == 'K' || c == 'L') {
			num += 6; 
		} else if (c == 'M' || c == 'N' || c == 'O') {
			num += 7; 
		} else if (c == 'P' || c == 'Q' || c == 'R' || c == 'S') {
			num += 8; 
		} else if (c == 'T' || c == 'U' || c == 'V') {
			num += 9;
		} else {
			num += 10; 
		}
	}
	
	printf("%d", num);
	return 0; 
}