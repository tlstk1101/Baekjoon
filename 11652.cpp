#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int64_t N, result;
	int64_t CurCount = 1, OldCount = 1;
	cin >> N;
	int64_t *Arr = new int64_t[N];
	
	for (int i = 0; i < N; i++) {
		cin >> Arr[i];
	}

	sort(Arr, Arr + N);

	result = Arr[0];
	for (int i = 1; i < N; i++) {
		if (Arr[i] == Arr[i - 1]) 
			CurCount++;
		else
			CurCount = 1;

		if (CurCount > OldCount) {
			OldCount = CurCount;
			result = Arr[i];
		}
	}

	cout << result << endl;
	return 0;
}