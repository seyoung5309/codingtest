#include <iostream>
using namespace std;

int main() {
    string N;
    int B;
    cin >> N >> B;

    long long result = 0;

    for (char c : N) {
        int value;
        if ('0' <= c && c <= '9') {
            value = c - '0';        	
		} else {
            value = c - 'A' + 10;        	
		}
        result = result * B + value;
    }

    cout << result << '\n';
    return 0; 
}
