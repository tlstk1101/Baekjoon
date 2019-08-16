#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, K, result = 0;
	cin >> N >> K;
	int *inArr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> inArr[i];
	}

	while (K != 0) {
		for (int i = (N - 1); i >= 0; i--) {
			if (inArr[i] <= K) {
				K -= inArr[i];
				result++;
				break;
			}
		}
	}

	cout << result << endl;
	return 0;
}