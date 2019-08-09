#include <iostream>

using namespace std;

int main() {
	int testA, testB;

	do
	{
		cin >> testA >> testB;
		if (testA != 0 && testB != 0)
			cout << testA + testB << endl;
		else
			break;
		
	} while (true);

	return 0;
}