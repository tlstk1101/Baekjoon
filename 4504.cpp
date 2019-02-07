#include <iostream>
#include <vector>

using namespace std;

int main() {
	int number = 0;
	int input = 0;
	vector<int> array;

	cin >> number;

	while (1) {
		cin >> input;
		if (input == 0)
			break;
		array.push_back(input);
	}
	
	for (int i = 0; i < array.size(); i++) {
		if (array[i] % number != 0)
			cout << array[i] << " is NOT a multiple of " << number << "." << endl;
		else
			cout << array[i] << " is a multiple of " << number << "." << endl;
	}
	
	return 0;
}