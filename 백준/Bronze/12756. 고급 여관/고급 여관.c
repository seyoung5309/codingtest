#include <stdio.h>

struct PLAYER {
	int at;
	int hp;
	int re;
};

int main(void) {
	struct PLAYER play[2];
	scanf("%d %d %d %d", &play[0].at, &play[0].hp, &play[1].at, &play[1].hp);
	play[0].re = play[0].hp;
	play[1].re = play[1].hp;
	
	while (1) {
		play[0].re -= play[1].at;
		play[1].re -= play[0].at;
		
		if (play[0].re <= 0 && play[1].re <= 0) {
			printf("DRAW\n");
			break;
		} else if (play[0].re > 0 && play[1].re <= 0) {
			printf("PLAYER A\n");
			break;
		} else if (play[0].re <= 0 && play[1].re > 0) {
			printf("PLAYER B\n");
			break;
		}
	}
	
	return 0; 
}