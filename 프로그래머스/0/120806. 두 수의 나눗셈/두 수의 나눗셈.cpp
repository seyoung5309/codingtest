#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    double num3 = (double)num1/num2*1000;
    return (int)num3;
}