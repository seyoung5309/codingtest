#include <stdio.h>
// BRONZESILVER

int main(void) {
	int n; scanf("%d", &n);
	char str[1000] = {'\0'};	scanf(" %s", str);
	int en[26] = {0};
	
	for (int i = 0; i < n; i++) {
		en[str[i] - 'A']++;
	}

	int count = 0; 	
	while (1) {
		if (en['B' - 'A'] > 0) {
		    en['B' - 'A']--;
		} else {
		    break;
		}
		
		if (en['R' - 'A'] > 0) {
		    en['R' - 'A']--;
		} else {
		    break;
		}
		
		if (en['O' - 'A'] > 0) {
		    en['O' - 'A']--;
		} else {
		    break;
		}
		
		if (en['N' - 'A'] > 0) {
		    en['N' - 'A']--;
		} else {
		    break;
		}
		
		if (en['Z' - 'A'] > 0) {
		    en['Z' - 'A']--;
		} else {
		    break;
		}
		
		if (en['E' - 'A'] > 0) {
		    en['E' - 'A']--;
		} else {
		    break;
		}
		
		if (en['S' - 'A'] > 0) {
		    en['S' - 'A']--;
		} else {
		    break;
		}
		
		if (en['I' - 'A'] > 0) {
		    en['I' - 'A']--;
		} else {
		    break;
		}
		
		if (en['L' - 'A'] > 0) {
		    en['L' - 'A']--;
		} else {
		    break;
		}
		
		if (en['V' - 'A'] > 0) {
		    en['V' - 'A']--;
		} else {
		    break;
		}
		
		if (en['E' - 'A'] > 0) {
		    en['E' - 'A']--;
		} else {
		    break;
		}
		
		if (en['R' - 'A'] > 0) {
		    en['R' - 'A']--;
		} else {
		    break;
		}

		count++;
	}
	
	printf("%d", count);
	return 0; 
}