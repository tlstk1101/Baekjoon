#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int prime_number(int min, int max, vector<int> &a) {
	int i, j, sum = 0;

	for (i = min; i <= max; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0)
				break;
		}
		if (i == j)
			a.push_back(i);
	}

	if (a.size() < 1)
		return -1;
	else {
		for (int i = 0; i < a.size(); i++) {
			sum += a[i];
		}
		return sum;
	}
}

int main() {
	int min, max, sum;
	vector<int> a;
	cin >> min >> max;
	
	sum = prime_number(min, max, a);

	if (sum != -1) {
		cout << sum << endl;
		cout << a[0] << endl;
	}
	else
		cout << sum << endl;

	return 0;
}