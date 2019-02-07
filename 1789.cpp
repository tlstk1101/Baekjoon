#include<iostream>

using namespace std;

int main() {
	long long int s = 0;
	long long int temp = 0;
	int n = 0;

	cin >> s;

	for (int i = 1; ; i++) {
		temp += i;
		if (temp > s) {
			n = i - 1;
			break;
		}
	}

	cout << n << endl;
	return 0;
}