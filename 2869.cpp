#include <iostream>
#include <algorithm>

using namespace std;
const int INF = 1000000000 + 1;

int64_t binarySearch(int A, int B, int V) {
	int64_t left = 0, right = V / (A - B) + 1;
	int64_t mid;
	int64_t result = INF;

	while (left <= right) {
		mid = (left + right) / 2;
		if (V <= mid * (A - B) + A)
		{
			result = min(result, mid + 1);
			right = mid - 1;
		}
		else
			left = mid + 1;
	}
	return result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B, V;
	cin >> A >> B >> V;

	cout << binarySearch(A, B, V) << endl;

	return 0;
}