#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	string K;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> K;
		int stringSize = K.size();
		if ((K[K.size() - 1] - '0') % 2 == 0)
			cout << "even" << endl;
		else
			cout << "odd" << endl;
	}

	return 0;
}