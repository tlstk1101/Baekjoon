#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	int n, test = 0;
	int *array = new int[12];
	array[0] = 0;
	array[1] = 1;
	array[2] = 2;
	array[3] = 4;

	cin >> test;
	for (int i = 0; i < test; i++) {
		cin >> n;
		for (int j = 4; j <= n; j++) {
			array[j] = array[j - 1] + array[j - 2] + array[j - 3];
		}
		cout << array[n] << endl;
	}

	return 0;
}