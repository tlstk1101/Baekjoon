#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

void shell_sort(int a[], int n) {
	int i, j, k, h, v;
	for (h = n / 2; h > 0; h /= 2) {
		for (i = 0; i < h; i++) {
			for (j = i + h; j < n; j += h) {
				v = a[j];
				k = j;
				while (k > h - 1 && a[k - h] > v) {
					a[k] = a[k - h];
					k -= h;
				}
				a[k] = v;
			}
		}
	}
}

int main() {
	int input[3] = { 0, };
	cin >> input[0] >> input[1] >> input[2];

	shell_sort(input, sizeof(input) / sizeof(input[0]));
	cout << input[1] << endl;
	return 0;
}