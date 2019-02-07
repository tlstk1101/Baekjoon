#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;

	do {
		cin >> input;
	}while (input.length() < 0 || input.length() > 100);

	for (int i = 1; i <= input.length(); i++) {
		printf("%c", input[i - 1]);
		if (i % 10 == 0) {
			printf("\n");
		}
	}
	return 0;
}