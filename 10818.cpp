#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N, temp;
	int maxValue, minValue;
	vector<int> inputN;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		inputN.push_back(temp);
	}

	minValue = *min_element(inputN.begin(), inputN.end());
	maxValue = *max_element(inputN.begin(), inputN.end());

	cout << minValue << " " << maxValue << endl;

	return 0;
}