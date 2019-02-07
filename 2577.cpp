#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b, c;
	int result = 0;
	int number[10] = { 0, };
	cin >> a >> b >> c;

	result = a * b * c;
	while (result != 0) {
		number[result % 10]++;
		result /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << number[i] << endl;
	}

	return 0;
}