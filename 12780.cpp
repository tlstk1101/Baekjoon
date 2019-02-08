#include <iostream>
#include <string>

using namespace std;

int main() {
	int temp = 0;
	int index = 0;
	string H, N;
	cin >> H;
	cin >> N;

	while (true) {
		if ((index = H.find(N, index)) != string::npos) {
			temp++;
			index++;
		}
		else if (index >= H.length()) {
			break;
		}
		else {
			break;
		}
	}
	cout << temp << endl;
	return 0;
}