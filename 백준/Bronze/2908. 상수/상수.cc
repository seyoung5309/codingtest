#include <iostream>
using namespace std;

int main(void) {
	string num1;
    string num2;
	
	int A = 0;
	int B = 0;
	
    cin >> num1 >> num2;
	
	int mul = 1; 
	for (int i = 0; i < 3; i++) {
		A += (int)((num1[i] - '0')*mul);
		B += (int)((num2[i] - '0')*mul);
		mul *= 10;
	}
	
	if (A > B) {
        cout << A;
	} else {
        cout << B;
	}
	
	return 0; 
}