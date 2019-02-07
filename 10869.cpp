#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int a, b, c;
	a = b = c = 0;

	scanf_s("%d %d %d", &a, &b, &c);
	while (a < 2 || b < 2 || a > 10000 || b > 10000) {
		scanf_s("%d %d %d", &a, &b, &c);
	}
	printf("%d\n", (a + b) % c);
	printf("%d\n", ((a % c) + (b % c)) % c);
	printf("%d\n", ((a * b) % c));
	printf("%d\n", ((a % c) * (b % c) % c));
	return 0;
}
