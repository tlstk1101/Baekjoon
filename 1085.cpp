#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int array[4] = {0, };
	int result = 0;
	int i = 0;
	for (i = 0; i < 4; i++)
		cin >> array[i];

	result = min(array[0], array[1]);
	for (i = 2; i <= 3; i++) {
		result = min(result, array[i] - array[i - 2]);
	}
	cout << result << endl;
		
	return 0;
}