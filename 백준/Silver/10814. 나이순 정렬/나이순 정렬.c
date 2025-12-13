#include <stdio.h>
#include <stdlib.h>

struct PEOPLE {
    int index;
    int age;
    char name[101];
};

int cmp(const void *, const void *);

int main(void) {
    int n;
    scanf("%d", &n);

    struct PEOPLE *arr = malloc(sizeof(struct PEOPLE) * n);

    for (int i = 0; i < n; i++) {
        arr[i].index = i;
        scanf("%d %s", &arr[i].age, arr[i].name);
    }

    qsort(arr, n, sizeof(struct PEOPLE), cmp);

    for (int i = 0; i < n; i++)
        printf("%d %s\n", arr[i].age, arr[i].name);

    free(arr);
}

int cmp(const void *a, const void *b) {
    struct PEOPLE *i = a;
    struct PEOPLE *j = b;

    if (i->age == j->age)
        return i->index - j->index;
    return i->age - j->age;
}
