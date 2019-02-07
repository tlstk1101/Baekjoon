#include <iostream>

using namespace std;

int main() {
	int player = 0;
	int a, b;
	int count = 0;
	cin >> player >> a >> b;
	
	if (a > player || b > player)
		cout << "-1" << endl;

	while (a != b) {
		a = (a / 2) + (a % 2);
		b = (b / 2) + (b % 2);
		count++;
	}
	
	cout << count << endl;
	return 0;
}