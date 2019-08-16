#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	int *score = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> score[i];
	}

	sort(score, score + N);

	cout << score[N - 1] - score[0] << endl;

	return 0;
}