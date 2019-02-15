#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int input[20] = { 0, };
	int N, M;
	for (int i = 0; i < 20; i++) {
		input[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		cin >> N >> M;
		reverse(input + (N - 1), input + M);
	}

	for (int i = 0; i < 20; i++) {
		printf("%d ", input[i]);
	}
	return 0;
}