#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> inArr;
	int temp = 0;
	int sum = 0;
	int minValue = 0;

	for (int i = 0; i < 7; i++) {
		cin >> temp;

		if (temp % 2 != 0) {
			sum += temp;
			inArr.push_back(temp);
		}
	}

	if (sum == 0) {
		cout << -1 << endl;
	}
	else {
		cout << sum << endl;
		cout << *min_element(inArr.begin(), inArr.end()) << endl;
	}

	return 0;
}