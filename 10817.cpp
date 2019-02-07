#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	int max, min;
	int temp[3] = { 0, };
	cin >> a >> b >> c;
	temp[0] = a; temp[1] = b; temp[2] = c;

	max = temp[0] < temp[1] ? (temp[1] < temp[2] ? temp[2] : temp[1]) : (temp[0] < temp[2] ? temp[2] : temp[0]);
	min = temp[0] > temp[1] ? (temp[1] > temp[2] ? temp[2] : temp[1]) : (temp[0] > temp[2] ? temp[2] : temp[0]);

	for (int i = 0; i < 3; i++) {
		if(temp[i] != max && temp[i] != min)
			printf("%d", temp[i]);
	}
	return 0;
}