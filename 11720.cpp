#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {	
	int n, sum = 0;
	string input;

	scanf_s("%d", &n);
	while (n < 0 || n > 100) {
		scanf_s("%d", &n);
	}
	cin >> input;

	for (int i = 0; i < n; i++) {
		sum += input[i] - '0';
	}
	printf("%d", sum);
	return 0;
}