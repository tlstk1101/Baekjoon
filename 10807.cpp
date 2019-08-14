#include <iostream>

using namespace std;

int main() {
	int N, v, count = 0;
	cin >> N;
	int *Arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> Arr[i];
	}
	cin >> v;

	for (int i = 0; i < N; i++) {
		if (Arr[i] == v)
			count++;
	}

	cout << count << endl;
	return 0;
}