#include <iostream>

using namespace std;

int main() {
	int inputValue;
	int temp = 1;
	int i = 1;
	cin >> inputValue;
	
	while (inputValue > temp) {
		temp += (i * 6);
		i++;
	}

	cout << i << endl;

	return 0;
}