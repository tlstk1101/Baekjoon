#include <stdio.h>
#include <iostream>

int main() {
	int input;
	scanf_s("%d", &input);

	if (input <= 100 && input >= 90) {
		printf("A");
	}
	else if (input <= 89 && input >= 80) {
		printf("B");
	}
	else if (input <= 79 && input >= 70) {
		printf("C");
	}
	else if (input <= 69 && input >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}
	return 0;
}