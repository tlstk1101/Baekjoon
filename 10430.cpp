#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int a, b;
	a = b = 0;

	scanf_s("%d %d", &a, &b);
	while (a < 1 || b < 1 || a > 10000 || b > 10000) {
		scanf_s("%d %d", &a, &b);
	}
	printf("%d\n", (a + b));
	printf("%d\n", (a - b));
	printf("%d\n", (a * b));
	printf("%d\n", (a / b));
	printf("%d\n", (a % b));
	return 0;
}
