#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int num1 = -1;
    int num2 = -1;
    int count = 0;
    
    for (int i = 0; i < numbers.size(); i++) {
        if (num1 <= numbers[i]) {
            num1 = numbers[i];
            count = i;
        } 
    }
    
    for (int i = 0; i < count; i++) {
        if (num2 < numbers[i]) {
            num2 = numbers[i];
        }
    }
    
    for (int i = count+1; i < numbers.size(); i++) {
        if (num2 < numbers[i]) {
            num2 = numbers[i];
        }
    }
    answer = num1 * num2;
    return answer;
}