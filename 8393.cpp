#include <iostream>

int main() {
	int n = 0;
	int sum = 0;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d", sum);
	return 0;
}