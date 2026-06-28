#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct ARRAY {
    int num;
    int distance;
};

int* solution(int numlist[], size_t numlist_len, int n) {
    int * answer = (int *) malloc(sizeof(int) * numlist_len);
    struct ARRAY * arr = (struct ARRAY *)malloc(sizeof(struct ARRAY) * numlist_len);
    for (int i = 0; i < numlist_len; i++) {
        arr[i].num = numlist[i];
        arr[i].distance = numlist[i] - n;
        if (arr[i].distance < 0) {
            arr[i].distance = arr[i].distance * -1;
        }
    }
    
    struct ARRAY tmp;
    for (int i = 0; i < numlist_len; i++) {
        for (int j = 0; j < numlist_len; j++) {
            if (arr[i].distance < arr[j].distance) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            } else if (arr[i].distance == arr[j].distance) {
                if (arr[i].num > arr[j].num) {
                    tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }
    
    for (int i = 0; i < numlist_len; i++) {
        // printf("%d\n", arr[i].num);
        answer[i] = arr[i].num;
    }
    
    return answer;
}