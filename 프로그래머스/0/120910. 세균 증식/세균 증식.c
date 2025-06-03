#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int t) {
  int answer = 0;
        int count = 0;
        
        while (t != count) {
            n*= 2;
            count++;
        }
        answer = n;
        return answer;
}