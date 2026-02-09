#include <string>
#include <vector>
using namespace std;

int solution(vector<int> array) {
    int save = 0;

    for (int i = 0; i < array.size(); i++) {
        for (int j = i; j < array.size(); j++) {
            if (array[i] > array[j]) {
                save = array[i];
                array[i] = array[j];
                array[j] = save;
            }
        }
    }

    return array[array.size() / 2];
}
