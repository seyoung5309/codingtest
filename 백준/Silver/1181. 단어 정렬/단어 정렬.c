#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b);

int main(void) {
    int n;
    scanf("%d", &n);
    
    char str[n][51];
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    qsort(str, n, sizeof(str[0]), cmp);

    printf("%s\n", str[0]);
    for (int i = 1; i < n; i++) {
        if (strcmp(str[i-1], str[i]) != 0) {
            printf("%s\n", str[i]);
        }
    }

    return 0;
}

int cmp(const void *a, const void *b) {
    const char *s1 = (const char *)a;
    const char *s2 = (const char *)b;

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) return len1 - len2;
    return strcmp(s1, s2);
}
