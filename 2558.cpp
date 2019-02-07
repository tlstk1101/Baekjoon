#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int a, b;
	a = b = 0;

	scanf_s("%d %d", &a, &b);
	while (a < 0 || b < 0 || a > 10 || b > 10) {
		scanf_s("%d %d", &a, &b);
	}
	printf("%d\n", (a + b));
	return 0;
}
