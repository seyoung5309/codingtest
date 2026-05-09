#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    int minX = dots[0][0];
    int maxX = dots[0][0];
    int minY = dots[0][1];
    int maxY = dots[0][1];

    for (int i = 1; i < 4; i++) {
        if (dots[i][0] < minX) minX = dots[i][0];
        if (dots[i][0] > maxX) maxX = dots[i][0];

        if (dots[i][1] < minY) minY = dots[i][1];
        if (dots[i][1] > maxY) maxY = dots[i][1];
    }

    return (maxX - minX) * (maxY - minY);
}