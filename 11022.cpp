#include <iostream>

using namespace std;

int main() {
	int tastCase;
	int inputA, inputB;

	cin >> tastCase;
	for (int i = 0; i < tastCase; i++) {
		cin >> inputA >> inputB;
		cout << "Case #" << i + 1 << ": " << inputA << " + " << inputB << " = " << inputA + inputB << endl;
	}
}