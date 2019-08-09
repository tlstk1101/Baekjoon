#include <iostream>

using namespace std;

int main() {
	int N;
	int result = 1;
	cin >> N;
	
	if (N != 0) {
		for (int i = N; i > 0; i--) {
			result = result * i;
		}
		cout << result << endl;
	}
	else {
		cout << 1 << endl;
	}
	return 0;
}