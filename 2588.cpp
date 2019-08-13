#include <iostream>
#include <string>

using namespace std;

int main() {
	int inputA;
	string inputB;
	int tast1, tast2, tast3;
	cin >> inputA >> inputB;

	tast1 = inputA * (inputB[2] - '0');
	tast2 = inputA * (inputB[1] - '0');
	tast3 = inputA * (inputB[0] - '0');

	cout << tast1 << endl;
	cout << tast2 << endl;
	cout << tast3 << endl;
	cout << tast1 + (tast2 * 10) + (tast3 * 100) << endl;

	return 0;
}