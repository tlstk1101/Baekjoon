#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int testCase = 0;
	int valueA, valueB;
	int tempValueA, tempValueB;
	int result = 0;

	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
		cin >> valueA >> valueB;
		tempValueA = valueA;
		tempValueB = valueB;

		while (1) {
			if (valueA > valueB)
				valueB += tempValueB;
			else if (valueA < valueB)
				valueA += tempValueA;
			else {
				result = valueA;
				break;
			}
		}

		cout << result << endl;
	}
	return 0;
}