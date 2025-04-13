#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int h, m;
    scanf("%d %d", &h, &m);
    
    if(m >= 45){
        m -= 45;
        printf("%d %d", h, m);
    }
    else{
        m += 15;
        if(h == 0)
            h = 23;
        else
            h -= 1;
        printf("%d %d", h, m);
    }
    return 0;
}