#include <stdio.h>

int main() {
	int n = 0;
	while (n < 1 || n > 100000) {
		scanf_s("%d", &n);
	}
	for (int i = n; i > 0; i--) {
		printf("%d\n", i);
	}
	return 0;
}