#include <iostream>
#include <algorithm>
#include <vector>
#include<cmath>

using namespace std;

int main() {
	int M, N;
	int sum = 0;
	vector<int> output;
	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		if (sqrt((double)i) - (int)sqrt((double)i) == 0) {
			output.push_back(i);
			sum += i;
		}
	}
	if (output.size() == 0)
		cout << -1 << endl;
	else {
		cout << sum << endl;
		cout << output[0] << endl;
	}
	return 0;
}