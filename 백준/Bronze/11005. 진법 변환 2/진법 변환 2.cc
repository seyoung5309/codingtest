#include <iostream>
#include <string>
using namespace std;

int main() {
    long long N;
    int B;
    cin >> N >> B;

    string result = "";

    while (N > 0) {
        int r = N % B;
        if (r < 10)
            result += char('0' + r);
        else
            result += char('A' + (r - 10));
        N /= B;
    }

    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }

    return 0;
}
