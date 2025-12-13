#include <stdio.h>

int main(void) {
    double d1, d2, d3;
    scanf("%lf %lf %lf", &d1, &d2, &d3);

    double b = (d1 - d2 + d3) / 2.0;
    double a = d1 - b;
    double c = d2 - a;

    if (a > 0 && b > 0 && c > 0) {
        printf("1\n");
        printf("%.1f %.1f %.1f", a, b, c);
    } else {
        printf("-1");
    }

    return 0;
}
