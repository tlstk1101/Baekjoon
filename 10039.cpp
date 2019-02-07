#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> array(5);
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> array[i];
		if (array[i] < 40) {
			array[i] = 40;
		}
		sum += array[i];
	}
	cout << sum / 5 << endl;

	return 0;
}