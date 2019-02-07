#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	double a, b;
	a = b = 0;

	scanf_s("%lf %lf", &a, &b);
	while (a < 0 || b < 0 || a > 10 || b > 10) {
		scanf_s("%lf %lf", &a, &b);
	}
	printf("%.9lf", a / b);
	return 0;
}
