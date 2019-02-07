#include <stdio.h>
#include <iostream>
#include <ios>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a, b;
	int temp = 0;
	cin >> n;
	int *result = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		result[i] = a + b;
	}
	for (int i = 0; i < n; i++) {
		cout << result[i] << '\n';
	}
	return 0;
}