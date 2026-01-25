#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push();
void pop();
void size();
void empty();
void front_f();
void back_f();

int *q = NULL;
int front = 0, back = 0;
int q_size = 0;

int main(void) {
    int n;
    char cmd[10];

    scanf("%d", &n);

    while (n--) {
        scanf("%s", cmd);

        if (strcmp(cmd, "push") == 0) push();
        else if (strcmp(cmd, "pop") == 0) pop();
        else if (strcmp(cmd, "size") == 0) size();
        else if (strcmp(cmd, "empty") == 0) empty();
        else if (strcmp(cmd, "front") == 0) front_f();
        else if (strcmp(cmd, "back") == 0) back_f();
    }

    free(q);
    return 0;
}

void push() {
    int x;
    scanf("%d", &x);

    if (back == q_size) {
        q_size = (q_size == 0) ? 4 : q_size * 2;
        q = (int *)realloc(q, sizeof(int) * q_size);
    }

    q[back++] = x;
}

void pop() {
    if (front == back) {
        printf("-1\n");
    } else {
        printf("%d\n", q[front++]);
    }
}

void size() {
    printf("%d\n", back - front);
}

void empty() {
    printf("%d\n", front == back);
}

void front_f() {
    if (front == back) {
        printf("-1\n");
    } else {
        printf("%d\n", q[front]);
    }
}

void back_f() {
    if (front == back) {
        printf("-1\n");
    } else {
        printf("%d\n", q[back - 1]);
    }
}
