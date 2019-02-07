#include <iostream>

using namespace std;

int main() {
	int test_case = 0;
	int k, n;
	int room[15][14] = { 0, };

	cin >> test_case;
	for (int i = 0; i < 14; i++) {
		room[i+1][0] = 1;
		room[0][i] = i + 1;
	}
	for (int i = 1; i <= 14; i++) {
		for (int j = 1; j < 14; j++) {
			room[i][j] = room[i - 1][j] + room[i][j - 1];
		}
	}
	
	for (int i = 0; i < test_case; i++) {
		cin >> k >> n;
		cout << room[k][n-1] << endl;
	}
	return 0;
}