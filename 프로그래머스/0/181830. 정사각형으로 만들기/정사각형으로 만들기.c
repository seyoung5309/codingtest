#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int** arr, size_t arr_rows, size_t arr_cols) {
    int size = (arr_rows > arr_cols) ? arr_rows : arr_cols;

    int** result = (int**)malloc(sizeof(int*) * size);

    for (int i = 0; i < size; i++) {
        result[i] = (int*)malloc(sizeof(int) * size);
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i < arr_rows && j < arr_cols) {
                result[i][j] = arr[i][j];
            } else {
                result[i][j] = 0;
            }
        }
    }

    return result;
}
