#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int idx;
    int total;
    int point3;
    int point2;
} Student;

void addPoint(Student* v, int idx, int point);
int cmp(const void* a, const void* b);
int isEqual(Student a, Student b);

int main(void)
{
    int n;
    scanf("%d", &n);

    Student v[3] = {
        {1, 0, 0, 0},
        {2, 0, 0, 0},
        {3, 0, 0, 0}
    };

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        addPoint(v, 0, a);
        addPoint(v, 1, b);
        addPoint(v, 2, c);
    }

    qsort(v, 3, sizeof(Student), cmp);

    if (isEqual(v[0], v[1]))
        printf("0 %d\n", v[0].total);
    else
        printf("%d %d\n", v[0].idx, v[0].total);

    return 0;
}

void addPoint(Student* v, int idx, int point) {
    if (point == 3)
        v[idx].point3++;
    else if (point == 2)
        v[idx].point2++;

    v[idx].total += point;
}

int cmp(const void* a, const void* b) {
    const Student* s1 = (const Student*)a;
    const Student* s2 = (const Student*)b;

    if (s1->total != s2->total)
        return s2->total - s1->total; 
    if (s1->point3 != s2->point3)
        return s2->point3 - s1->point3;  
    return s2->point2 - s1->point2;   
}

int isEqual(Student a, Student b) {
    return a.total == b.total &&
           a.point3 == b.point3 &&
           a.point2 == b.point2;
}