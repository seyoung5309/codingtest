#include <stdio.h>

struct xy {
	int x;
	int y;
};

int main(void) {
	struct xy xy[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &xy[i].x, &xy[i].y);
	}
	
	int x = xy[0].x;
	if (x == xy[1].x) {
		x = xy[2].x;
	} else {
		if (x == xy[2].x) {
			x = xy[1].x;
		}
	}
	
	int y = xy[0].y;
	if (y == xy[1].y) {
		y = xy[2].y;
	} else {
		if (y == xy[2].y) {
			y = xy[1].y;
		}
	}
	
	printf("%d %d", x, y);
	return 0; 
}

