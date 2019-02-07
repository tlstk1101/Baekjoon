#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int input, pre_input, count = 0, temp = 0;

	cin >> input;
	pre_input = input;

	do{
		temp = (input / 10) + (input % 10);
		input = ((input % 10) * 10) + (temp % 10);
		count++;
	} while (pre_input != input);

	cout << count << endl;

	return 0;
}