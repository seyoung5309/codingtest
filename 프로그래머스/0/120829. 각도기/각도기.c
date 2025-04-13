#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int solution(int angle) {
       int answer;

   if (0 < angle)
       if (angle < 90) answer = 1;

   if (angle == 90) answer = 2;

   if (90 < angle)
       if (angle < 180) answer = 3;

   if (angle == 180) answer = 4;

   return answer;
}