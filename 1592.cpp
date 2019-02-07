#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N, M, L;
	int max = 0;
	int total = 0;
	int temp = 0;
	cin >> N >> M >> L;
	int *N_array = new int[N] {};
	N_array[0] = 1;

	while (max < M) {
		if ((N_array[temp] % 2) != 0) {
			if ((temp + L) >= N) {
				temp = (temp + L) - N;
			}
			else {
				temp += L;
			}
		}//È¦¼ö
		else {
			if ((temp - L) <= 0) {
				temp = N - abs((temp - L));
			}
			else {
				temp -= L;
			}
		}//Â¦¼ö
		N_array[temp]++;
		total++;
		max = *max_element(N_array, N_array + N);
	}

	cout << total - 1 << endl;
	return 0;
}