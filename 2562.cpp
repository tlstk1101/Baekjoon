#include <iostream>
#include <vector>

using namespace std;

int main() {
	int temp;
	int maxValue, number;
	vector<int> input;

	for (int i = 0; i < 9; i++) {
		cin >> temp;
		input.push_back(temp);
	}

	maxValue = input[0];
	number = 1;
	for (int i = 1; i < 9; i++) {
		if (maxValue < input[i]) {
			maxValue = input[i];
			number = i + 1;
		}
	}

	cout << maxValue << endl;
	cout << number << endl;

	return 0;
}