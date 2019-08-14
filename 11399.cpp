#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N, sum = 0;
	cin >> N;
	int *sortArr = new int[N];
	int *sumArr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> sortArr[i];
	}

	sort(sortArr, sortArr + N);

	sumArr[0] = sortArr[0];
	for (int i = 1; i < N; i++) {
		sumArr[i] = sortArr[i] + sumArr[i - 1];		
	}
	
	for (int i = 0; i < N; i++) {
		sum += sumArr[i];
	}

	cout << sum << endl;
	return 0;
}