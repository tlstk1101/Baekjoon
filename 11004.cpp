#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K;
	vector<int> inArr;
	int temp;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		inArr.push_back(temp);
	}

	sort(inArr.begin(), inArr.end());

	cout << inArr[K - 1] << endl;
	return 0;
}