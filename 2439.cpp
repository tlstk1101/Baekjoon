#include <stdio.h>

int main() {
	int n = 0;
	while (n < 1 || n > 100) {
		scanf_s("%d", &n);
	}

	for (int i = 0; i < n; i++) {
		for (int k = (n - 1); k > i; k--) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}