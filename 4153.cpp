#include <iostream>
#include <math.h>

using namespace std;

int main() {
	do
	{
		int Number[3] = { 0, };
		int max = 0;
		int sum = 0;

		for (int i = 0; i < 3; i++) {
			cin >> Number[i];

			if (max < Number[i]) {
				max = Number[i];
			}
		}

		if (max == 0)
			break;

		for (int i = 0; i < 3; i++) {
			if (Number[i] < max) {
				sum += pow(Number[i], 2);
			}
		}

		max = pow(max, 2);
		if (max != sum)
			cout << "wrong" << endl;
		else
			cout << "right" << endl;

	} while (true);

	return 0;
}