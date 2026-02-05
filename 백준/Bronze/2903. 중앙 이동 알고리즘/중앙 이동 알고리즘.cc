#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    int l = 2;
    int sum = 0;

    for(int i=1; i<=n; i++) {
        sum = l + 1;
        sum *= sum;
        l = l * 2;
    }

    cout << sum << endl;
    return 0;
}