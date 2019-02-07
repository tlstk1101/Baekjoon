#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int fibo(int *ary, int temp) {
	for (int i = 2; i <= temp; i++) {
		ary[i] = ary[i - 1] + ary[i - 2];
	}

	return ary[temp];
}

int main() {
	int temp = 0;
	cin >> temp;
	int *array = new int[temp + 1];
	array[0] = 0;
	array[1] = 1;

	temp = fibo(array, temp);
	cout << temp << endl;
	return 0;
}