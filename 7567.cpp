#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	int count = 0;
	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		if (i == 0)
			count += 10;
		else {
			if (input[i - 1] != input[i]) {
				count += 10;
			}
			else {
				count += 5;
			}
		}
	}
	cout << count << endl;

	return 0;
}