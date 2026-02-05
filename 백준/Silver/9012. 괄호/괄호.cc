#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string str;
        cin >> str;

        int index = 0;
        bool check = true;

        for (char c : str) {
            if (c == '(') {
                index++;
            } else {
                if (index == 0) {
                    check = false;
                    break;
                }
                index--;
            }
        }

        if (check && index == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
