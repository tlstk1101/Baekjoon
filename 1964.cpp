#include <iostream>

using namespace std;

int main() {
	long long int input;
	long long int output = 5;
	cin >> input;
	for (int i = 2; i <= input; i++) {
		output += (3 * (i - 1)) + 4;
	}
	cout << output % 45678 << endl;

	return 0;
}