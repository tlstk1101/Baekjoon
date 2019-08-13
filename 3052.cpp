#include <iostream>
#include <vector>

using namespace std;

int main() {
	int temp[42] = { 0, };
	int inValue;
	int result = 0;

	for (int i = 0; i < 10; i++) {
		cin >> inValue;
		temp[inValue % 42]++;
	}

	for (int i = 0; i < 42; i++) {
		if (temp[i] > 0) {
			result++;
		}
	}

	cout << result << endl;
	return 0;
}