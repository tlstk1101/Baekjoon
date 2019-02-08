#include <iostream>
#include <string>
using namespace std;

int main() {
	int temp = 0;
	string S;
	cin >> S;

	for (int i = 0; i < S.length(); i) {
		if (S[i] == 'p' && S[i + 1] == 'i')
			i += 2;
		else if (S[i] == 'k' && S[i + 1] == 'a')
			i += 2;
		else if (S[i] == 'c' && S[i + 1] == 'h' && S[i + 2] == 'u')
			i += 3;
		else {
			temp = 1;
			break;
		}
	}

	if (temp != 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}