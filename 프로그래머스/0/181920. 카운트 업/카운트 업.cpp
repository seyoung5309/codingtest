#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> answer(end_num - start_num + 1); 
    int count = 0; 
    for (int i = start_num; i <= end_num; i++) {
        answer[count] = i;
        count++;
    }
    return answer;
}