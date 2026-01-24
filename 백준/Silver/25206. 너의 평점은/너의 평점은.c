#include <stdio.h>
#include <string.h>

double score(char *g);

int main(void) {
    char subject[100];
    double c;
    char grade[3];

    double sum = 0.0;
    double credit_sum = 0.0;

    for (int i = 0; i < 20; i++) {
        scanf("%s %lf %s", subject, &c, grade);

        if (strcmp(grade, "P") == 0) continue;

        sum += c * score(grade);
        credit_sum += c;
    }

    printf("%.6lf\n", sum / credit_sum);
    return 0;
}

double score(char *g) {
    if (strcmp(g, "A+") == 0) return 4.5;
    if (strcmp(g, "A0") == 0) return 4.0;
    if (strcmp(g, "B+") == 0) return 3.5;
    if (strcmp(g, "B0") == 0) return 3.0;
    if (strcmp(g, "C+") == 0) return 2.5;
    if (strcmp(g, "C0") == 0) return 2.0;
    if (strcmp(g, "D+") == 0) return 1.5;
    if (strcmp(g, "D0") == 0) return 1.0;
    return 0.0; 
}
