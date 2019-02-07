#include<iostream>
#include<cmath>

using namespace std;

int Rev(int x) {
	int result = 0;
	int temp = x;
	int i = 0, j = 0;
	if (x >= 1000)
		i = j = 3;
	else if(x >= 100)
		i = j = 2;
	else if (x >= 10)
		i = j = 1;

	for (i; i >= 0; i--) {
		result += (temp / (int)pow(10, i)) * (int)pow(10, j - i);
		temp %= (int)pow(10, i);
	}

	return result;
}

int main() {
	int input[2] = { 0, };
	for (int i = 0; i < 2; i++) {
		do {
			cin >> input[i];
		} while (input[i] > 1000);
	}

	cout << Rev(Rev(input[0]) + Rev(input[1])) << endl;

	return 0;
}

// 완전 개 하드코딩..