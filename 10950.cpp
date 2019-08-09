#include <iostream>

using namespace std;

int main() {
	int testCase;
	int testA, testB;
	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
		cin >> testA >> testB;
		cout << testA + testB << endl;
	}

	return 0;
}