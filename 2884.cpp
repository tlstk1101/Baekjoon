#include <iostream>

using namespace std;

int main() {
	int H, M;
	cin >> H >> M;

	if (M >= 45) {
		M -= 45;
		cout << H << " " << M << endl;
	}
	else {
		if (H - 1 > 0) {
			M += 15;
			H -= 1;
			cout << H << " " << M << endl;
		}
		else {
			H = 23;
			M += 15;
			cout << H << " " << M << endl;
		}
	}
	return 0;
}