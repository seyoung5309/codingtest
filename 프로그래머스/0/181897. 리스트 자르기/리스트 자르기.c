#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int slicer[], size_t slicer_len, int num_list[], size_t num_list_len) {
    int* answer = (int*)malloc(sizeof(int)*num_list_len);
    int count = 0; 
    int check = 0; 
    switch (n) {
        case 1:
           for (int i = 0; i <= slicer[1]; i++) {
               answer[i] = num_list[i];
           } 
            break;
        case 2:
            for (int i = slicer[0]; i < num_list_len; i++) {
                answer[count] = num_list[i];
                count++;
            } break;
        case 3:
            for (int i = slicer[0]; i <= slicer[1]; i++) {
                answer[count] = num_list[i];
                count++;
            } break;
        default:
            for (int i = slicer[0]; i <= slicer[1]; i++) {
                if (check%slicer[2] == 0) {
                    answer[count] = num_list[i];
                    count++;
                }
                check++;
            }
    }
    return answer;
}