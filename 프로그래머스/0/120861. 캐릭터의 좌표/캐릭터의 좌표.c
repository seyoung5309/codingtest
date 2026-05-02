#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int func(int [2], int *, int);

int* solution(const char* keyinput[], size_t keyinput_len, int board[], size_t board_len) {
    int* answer = (int*)malloc(sizeof(int) * 2);
    answer[0] = 0; answer[1] = 0;
    for (int i = 0; i < keyinput_len; i++) {
        if (strcmp(keyinput[i], "up") == 0) {
            answer[1] += func(board, answer, 1) ? 1 : 0; 
        } else if (strcmp(keyinput[i], "down") == 0) {
            answer[1] -= func(board, answer, 2) ? 1 : 0;
        } else if (strcmp(keyinput[i], "left") == 0) {
            answer[0] -= func(board, answer, 3) ? 1 : 0;
        } else {
            answer[0] += func(board, answer, 4) ? 1 : 0;
        }
    }
    return answer;
}

int func(int board[], int * answer, int key) {
    if (key == 1) { // up
        return (answer[1] >= board[1] / 2) ? 0 : 1;
    } else if (key == 2) { // down
        return (answer[1] <= -(board[1] / 2)) ? 0 : 1;
    } else if (key == 3) { // left
        return (answer[0] <= -(board[0] / 2)) ? 0 : 1;
    } else { // right
        return (answer[0] >= board[0] / 2) ? 0 : 1;
    }
}