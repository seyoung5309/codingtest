#include <stdio.h>
#include <string.h>

char tri[3][6] = {
    "  *  ",
    " * * ",
    "*****"
};

char buf[3072][6144];
int N;

void draw(int n, int x, int y) {
    if (n == 3) {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 5; j++)
                buf[x + i][y + j] = tri[i][j];
        return;
    }

    int half = n / 2;

    draw(half, x, y + half);
    draw(half, x + half, y);
    draw(half, x + half, y + 2 * half);
}

int main() {
    scanf("%d", &N);

    memset(buf, ' ', sizeof(buf));

    draw(N, 0, 0);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2 * N - 1; j++) {
            printf("%c", buf[i][j]);
        }
        printf("\n");
    }

    return 0;
}
