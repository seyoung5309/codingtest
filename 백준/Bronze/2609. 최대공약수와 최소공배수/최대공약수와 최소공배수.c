#include <stdio.h>

int math1(int, int); // 최대공약수 
int math2(int, int); // 최소공배수 

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);

	printf("%d\n", math1(n, m));
	printf("%d\n", math2(n, m));

	return 0; 
}

int math1(int n, int m) {
	int save;

    while (1) {
        save = m;
        m = n % m;
        n = save;
        if (m == 0) {
        	break;
		}
    }

	return n;
}

int math2(int n, int m) {
	int num = math1(n, m);
	return (n * m) / num;
}
