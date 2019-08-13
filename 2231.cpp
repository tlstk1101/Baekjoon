#include <iostream>

using namespace std;

int main() {
	int N;
	int maxLimit;
	int temp;

	cin >> N;	

	for (int i = 1; i <= N; i++) {
		temp = i;
		maxLimit = N;

		maxLimit -= temp;
		while (temp != 0) {
			maxLimit -= temp % 10;
			temp = temp / 10;
		}

		if (maxLimit == 0) {
			temp = i;
			break;
		}
	}

	if (temp == N)
		cout << 0 << endl;
	else
		cout << temp << endl;

	return 0;
}