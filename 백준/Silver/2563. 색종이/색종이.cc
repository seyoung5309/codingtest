#include <iostream>

using namespace std;

int main(void) {
	int arr[100][100] = {0};
	
	int n;
	cin >> n;
	
	int x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		for (int i = x; i < x+10; i++) {
			for (int j = y; j < y+10; j++) {
				arr[i][j] = 1;
			}
		}
	}
	
	int size = 0; 
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			size += arr[i][j];
		}
	}
	
	cout << size << endl;
	return 0; 
}