#include <stdio.h>

int main(void) {
    
    int num = 0; int A;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &A);
        if (A < 40) {
            num += 40; 
        } else {
            num += A;
        }
    }
    
    printf("%d", num/5);
    
    return 0; 
}