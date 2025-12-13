#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int pizza = n/7;
    switch (pizza) {
        case 0:
        case 1: 
            answer = 1;
            break;
        default:
            if (n%7 == 0) {
                answer = pizza; 
            } else {
                answer = pizza+1;
            }
            break;
    }
    return answer;
}