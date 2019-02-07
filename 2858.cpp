#include <iostream>
#include <algorithm>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
	int R, B;
	int W, L;
	int temp = 0;
	cin >> R >> B;
	int sum = R + B;
	
	for (int i = 3; i < sum; i++) {
		temp = sum / i;
		if ((sum % i) == 0) {
			if (R == ((temp * 2) + ((i - 2) * 2))) {
				L = max(temp, i);
				W = sum / L;
				break;
			}
		}
	}

	cout << L << " " << W << endl;
	return 0;
}