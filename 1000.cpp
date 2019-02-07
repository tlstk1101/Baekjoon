#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int a, b;
	a = b = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	while (a < 0 || b < 0 || a > 10 || b > 10) {
		scanf_s("%d", &a);
		scanf_s("%d", &b);
	}
	cout << a + b << endl;
	return 0;
}