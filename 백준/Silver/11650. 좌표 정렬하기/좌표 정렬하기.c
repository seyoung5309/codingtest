#include <stdio.h>
#include <stdlib.h>

struct xy {
    int x;
    int y;
};

int cmp(const void *a, const void *b) {
    struct xy *p = (struct xy *)a;
    struct xy *q = (struct xy *)b;

    if (p->x != q->x) {
        return p->x - q->x;    	
	} else {
 		return p->y - q->y; 		
	}
}

int main(void) {
    int n;
    scanf("%d", &n);

    struct xy arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, n, sizeof(struct xy), cmp);

    for (int i = 0; i < n; i++) {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
    
    return 0;
}
